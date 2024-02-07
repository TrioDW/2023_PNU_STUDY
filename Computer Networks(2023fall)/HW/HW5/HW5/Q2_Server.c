#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 12345
#define BUFFER_SIZE 256

void printMessage(const char *prefix, const char *message) {
    printf("[%s] %s\n", prefix, message);
}

int main() {
    int serverSocket, clientSocket;
    struct sockaddr_in serverAddr, clientAddr;
    socklen_t clientAddrLen = sizeof(clientAddr);
    char buffer[BUFFER_SIZE];

    if ((serverSocket = socket(AF_INET, SOCK_STREAM, 0)) == -1) {
        perror("socket");
        exit(EXIT_FAILURE);
    }

    memset(&serverAddr, 0, sizeof(serverAddr));
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_addr.s_addr = INADDR_ANY;
    serverAddr.sin_port = htons(PORT);

    if (bind(serverSocket, (struct sockaddr*)&serverAddr, sizeof(serverAddr)) == -1) {
        perror("bind");
        exit(EXIT_FAILURE);
    }

    if (listen(serverSocket, 1) == -1) {
        perror("listen");
        exit(EXIT_FAILURE);
    }

    printf("Server waiting for connection...\n");

    if ((clientSocket = accept(serverSocket, (struct sockaddr*)&clientAddr, &clientAddrLen)) == -1) {
        perror("accept");
        exit(EXIT_FAILURE);
    }

    printf("Client connected.\n");

    while (1) {
        ssize_t recvSize = recv(clientSocket, buffer, sizeof(buffer), 0);
        if (recvSize <= 0) {
            perror("recv");
            break;
        }
        buffer[recvSize] = '\0';

        if (strcmp(buffer, "\\quit") == 0) {
            printMessage("You", "Client requested quit.");
            break;
        } else {
            printMessage("You", buffer);
        }

        printf("Server: ");
        fgets(buffer, sizeof(buffer), stdin);
        buffer[strcspn(buffer, "\n")] = '\0';  

        if (send(clientSocket, buffer, strlen(buffer), 0) == -1) {
            perror("send");
            break;
        }

        if (strcmp(buffer, "\\quit") == 0) {
            printMessage("Server", "Server requested quit.");
            break;
        }
    }

    close(clientSocket);
    close(serverSocket);

    printf("Server quit.\n");

    return 0;
}

