#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <arpa/inet.h>
#include <errno.h>
#include <fcntl.h>
#include <string.h>

#define UNIX_PATH "UNIX_SOCKET_1"
#define INET_PORT 8080

int main() {
    // Unix Socket
    int usockfd = socket(AF_UNIX, SOCK_STREAM, 0);
    if (usockfd < 0) {
        perror("[Error] Unix socket : socket");
        exit(EXIT_FAILURE);
    }

    struct sockaddr_un userv_addr;
    memset(&userv_addr, 0, sizeof(struct sockaddr_un));
    userv_addr.sun_family = AF_UNIX;
    strncpy(userv_addr.sun_path, UNIX_PATH, sizeof(userv_addr.sun_path));

    if (bind(usockfd, (struct sockaddr*)&userv_addr, sizeof(userv_addr)) < 0) {
        perror("[Error] Unix socket : bind");
        exit(EXIT_FAILURE);
    }

    if (listen(usockfd, 5) < 0) {
        perror("[Error] Unix socket : listen");
        exit(EXIT_FAILURE);
    }

    printf("[Info] Unix socket : waiting for conn req\n");

    // Inet Socket
    int inetServerFd, inetClientFd;
    struct sockaddr_in inetServerAddr, inetClientAddr;
    socklen_t inetClientLen = sizeof(inetClientAddr);
    char buffer[256];

    if ((inetServerFd = socket(AF_INET, SOCK_STREAM, 0)) == -1) {
        perror("socket");
        exit(EXIT_FAILURE);
    }

    memset(&inetServerAddr, 0, sizeof(inetServerAddr));
    inetServerAddr.sin_family = AF_INET;
    inetServerAddr.sin_addr.s_addr = INADDR_ANY;
    inetServerAddr.sin_port = htons(INET_PORT);

    if (bind(inetServerFd, (struct sockaddr*)&inetServerAddr, sizeof(inetServerAddr)) == -1) {
        perror("bind");
        exit(EXIT_FAILURE);
    }

    if (listen(inetServerFd, 1) == -1) {
        perror("listen");
        exit(EXIT_FAILURE);
    }

    printf("[Info] Inet socket : waiting for conn req\n");

    // Accept connections
    struct sockaddr_un uClientAddr;
    socklen_t uClientLen = sizeof(uClientAddr);
    int uConnFd = accept(usockfd, (struct sockaddr*)&uClientAddr, &uClientLen);
    if (uConnFd < 0) {
        perror("[Error] Unix socket : accept");
        exit(EXIT_FAILURE);
    }
    printf("[Info] Unix socket : client connected\n");

    if ((inetClientFd = accept(inetServerFd, (struct sockaddr*)&inetClientAddr, &inetClientLen)) == -1) {
        perror("accept");
        exit(EXIT_FAILURE);
    }
    printf("[Info] Inet socket : client connected\n");

    int flag = fcntl(inetClientFd, F_GETFL, 0);
    fcntl(inetClientFd, F_SETFL, flag | O_NONBLOCK);
    fd_set readFds;
    int maxFd = (uConnFd > inetClientFd) ? uConnFd : inetClientFd;

    while (1) {
        FD_ZERO(&readFds);
        FD_SET(uConnFd, &readFds);
        FD_SET(inetClientFd, &readFds);

        int ready = select(maxFd + 1, &readFds, NULL, NULL, NULL);
        if (ready < 0) {
            perror("select");
            break;
        }

        if (FD_ISSET(uConnFd, &readFds)) {
            // Unix Socket Recv
            memset(buffer, 0, sizeof(buffer));
            ssize_t recvSize = recv(uConnFd, buffer, sizeof(buffer) - 1, 0);
            if (recvSize <= 0) {
                perror("recv");
                break;
            }
            buffer[recvSize] = '\0';
            printf("[ME] : %s", buffer);

            send(inetClientFd, buffer, strlen(buffer) + 1, 0);

            if (strncmp(buffer, "quit", 4) == 0) {
                break;
            }
        }

        if (FD_ISSET(inetClientFd, &readFds)) {
            // Read from inetClientFd
            memset(buffer, 0, sizeof(buffer));
            ssize_t readRtn = read(inetClientFd, buffer, sizeof(buffer) - 1);
            if (readRtn > 0) {
                printf("[YOU] : %s", buffer);
            } 
        }
    }

    printf("[Server] quit\n");
    printf("[Info] Closing sockets\n");
    close(uConnFd); 
    close(inetClientFd);
    close(usockfd);
    close(inetServerFd);

    return 0;
}

