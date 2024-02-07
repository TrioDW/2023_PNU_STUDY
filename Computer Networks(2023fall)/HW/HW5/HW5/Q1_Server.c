#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>

#define SOCKET_PATH "./sock_addr"
#define BUFFER_SIZE 256

int main() {
    int serverSocket, clientSocket;
    socklen_t clientAddrLen;
    struct sockaddr_un serverAddr, clientAddr;
    char buffer[BUFFER_SIZE];

    if ((serverSocket = socket(AF_UNIX, SOCK_STREAM, 0)) == -1) {
        perror("socket");
        exit(EXIT_FAILURE);
    }

    memset(&serverAddr, 0, sizeof(struct sockaddr_un));
    serverAddr.sun_family = AF_UNIX;
    strncpy(serverAddr.sun_path, SOCKET_PATH, sizeof(serverAddr.sun_path) - 1);

    if (bind(serverSocket, (struct sockaddr*)&serverAddr, sizeof(struct sockaddr_un)) == -1) {
        perror("bind");
        exit(EXIT_FAILURE);
    }

    if (listen(serverSocket, 5) == -1) {
        perror("listen");
        exit(EXIT_FAILURE);
    }

    printf("Server Waiting...\n");

    clientAddrLen = sizeof(struct sockaddr_un);
    if ((clientSocket = accept(serverSocket, (struct sockaddr*)&clientAddr, &clientAddrLen)) == -1) {
        perror("accept");
        exit(EXIT_FAILURE);
    }

    printf("Client Connected.\n");

    while (1) {
        ssize_t recvSize = recv(clientSocket, buffer, sizeof(buffer) - 1, 0);
        if (recvSize <= 0) {
            perror("recv");
            break;
        }

        buffer[recvSize] = '\0';  

        printf("Client: %s\n", buffer);

        if (strcmp(buffer, "\\quit") == 0) {
            printf("Client request stopped.\n");
            break;
        }
    }

    close(clientSocket);
    close(serverSocket);
    unlink(SOCKET_PATH);

    printf("Server quit.\n");

    return 0;
}

