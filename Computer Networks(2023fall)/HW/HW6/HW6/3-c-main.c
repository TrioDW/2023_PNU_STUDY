#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <arpa/inet.h>
#include <errno.h>
#include <fcntl.h>
#include <string.h>

#define SERVER_IP "127.0.0.1"
#define UNIX_PATH "UNIX_SOCKET_2"
#define INET_PORT 8080

int main() {
    // Unix Socket
    int unixServerSocket = socket(AF_UNIX, SOCK_STREAM, 0);
    if (unixServerSocket < 0) {
        perror("[Error] Unix socket : socket");
        exit(EXIT_FAILURE);
    }

    struct sockaddr_un unixServerAddr;
    memset(&unixServerAddr, 0, sizeof(struct sockaddr_un));
    unixServerAddr.sun_family = AF_UNIX;
    strncpy(unixServerAddr.sun_path, UNIX_PATH, sizeof(unixServerAddr.sun_path));

    if (bind(unixServerSocket, (struct sockaddr*)&unixServerAddr, sizeof(unixServerAddr)) < 0) {
        perror("[Error] Unix socket : bind");
        exit(EXIT_FAILURE);
    }

    if (listen(unixServerSocket, 5) < 0) {
        perror("[Error] Unix socket : listen");
        exit(EXIT_FAILURE);
    }

    printf("[Info] Unix socket : waiting for conn req\n");

    // Inet Socket
    int inetClientSocket;
    struct sockaddr_in inetServerAddr;
    if ((inetClientSocket = socket(AF_INET, SOCK_STREAM, 0)) == -1) {
        perror("socket");
        exit(EXIT_FAILURE);
    }
    
    memset(&inetServerAddr, 0, sizeof(inetServerAddr));
    inetServerAddr.sin_family = AF_INET;
    inetServerAddr.sin_addr.s_addr = inet_addr(SERVER_IP);
    inetServerAddr.sin_port = htons(INET_PORT);

    if (connect(inetClientSocket, (struct sockaddr*)&inetServerAddr, sizeof(inetServerAddr)) == -1) {
        perror("connect");
        exit(EXIT_FAILURE);
    }

    // Accept connections
    struct sockaddr_un unixClientAddr;
    socklen_t unixClientLen = sizeof(unixClientAddr);
    int unixConnectionSocket = accept(unixServerSocket, (struct sockaddr*)&unixClientAddr, &unixClientLen);
    if (unixConnectionSocket < 0) {
        perror("[Error] Unix socket : accept");
        exit(EXIT_FAILURE);
    }
    printf("[Info] Unix socket : client connected\n");

    printf("[Info] Inet socket : client connected\n");

    // Communication
    char buffer[256];

    int flag = fcntl(inetClientSocket, F_GETFL, 0);
    fcntl(inetClientSocket, F_SETFL, flag | O_NONBLOCK);
    fd_set readFds;
    int maxFd = (unixConnectionSocket > inetClientSocket) ? unixConnectionSocket : inetClientSocket;
    
    while (1) {
        FD_ZERO(&readFds);
        FD_SET(unixConnectionSocket, &readFds);
        FD_SET(inetClientSocket, &readFds);

        int ready = select(maxFd + 1, &readFds, NULL, NULL, NULL);
        if (ready < 0) {
            perror("select");
            break;
        }

        if (FD_ISSET(unixConnectionSocket, &readFds)) {
            // Unix Socket Recv
            memset(buffer, 0, sizeof(buffer));
            ssize_t recvSize = recv(unixConnectionSocket, buffer, sizeof(buffer) - 1, 0);
            if (recvSize <= 0) {
                perror("recv");
                break;
            }
            buffer[recvSize] = '\0';
            printf("[ME] : %s", buffer);

            send(inetClientSocket, buffer, strlen(buffer) + 1, 0);

            if (strncmp(buffer, "quit", 4) == 0) {
                break;
            }
        }

        if (FD_ISSET(inetClientSocket, &readFds)) {

            memset(buffer, 0, sizeof(buffer));
            ssize_t readRtn = read(inetClientSocket, buffer, sizeof(buffer) - 1);
            if (readRtn > 0) {
                printf("[YOU] : %s", buffer);
            }
        }
    }

    close(unixConnectionSocket);
    close(inetClientSocket);
    return 0;
}

