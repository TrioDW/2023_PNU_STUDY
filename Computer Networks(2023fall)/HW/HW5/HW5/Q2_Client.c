#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define SERVER_IP "127.0.0.1"
#define PORT 12345
#define BUFFER_SIZE 256

void printMessage(const char *prefix, const char *message) {
    printf("[%s] %s\n", prefix, message);
}

int main() {
    int clientSocket;
    struct sockaddr_in serverAddr;
    char buffer[BUFFER_SIZE];

    if ((clientSocket = socket(AF_INET, SOCK_STREAM, 0)) == -1) {
        perror("socket");
        exit(EXIT_FAILURE);
    }

    memset(&serverAddr, 0, sizeof(serverAddr));
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_addr.s_addr = inet_addr(SERVER_IP);
    serverAddr.sin_port = htons(PORT);

    if (connect(clientSocket, (struct sockaddr*)&serverAddr, sizeof(serverAddr)) == -1) {
        perror("connect");
        exit(EXIT_FAILURE);
    }

    printf("Server connected.\n");

    while (1) {
        printf("Client: ");
        fgets(buffer, sizeof(buffer), stdin);
        buffer[strcspn(buffer, "\n")] = '\0';  

        if (send(clientSocket, buffer, strlen(buffer), 0) == -1) {
            perror("send");
            break;
        }

        if (strcmp(buffer, "\\quit") == 0) {
            printMessage("Client", "Client quit");
            break;
        }

        ssize_t recvSize = recv(clientSocket, buffer, sizeof(buffer), 0);
        if (recvSize <= 0) {
            perror("recv");
            break;
        }
        buffer[recvSize] = '\0';

        if (strcmp(buffer, "\\quit") == 0) {
            printMessage("Client", "Server requested quit.");
            break;
        } else {
            printMessage("Client", buffer);
        }
    }

    close(clientSocket);

    return 0;
}

