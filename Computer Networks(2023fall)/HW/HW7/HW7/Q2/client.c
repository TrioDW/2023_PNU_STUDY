#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define SERVER_IP "127.0.0.1"
#define SERVER_PORT 9002

int main(void) {
    char message[256];
    int client_socket;
    struct sockaddr_in server_address;

    if ((client_socket = socket(AF_INET, SOCK_STREAM, 0)) == -1) {
        perror("socket");
        exit(1);
    }

    memset((char *)&server_address, '\0', sizeof(server_address));
    server_address.sin_family = AF_INET;
    server_address.sin_port = htons(SERVER_PORT);
    server_address.sin_addr.s_addr = inet_addr(SERVER_IP);

    if (connect(client_socket, (struct sockaddr *)&server_address, sizeof(server_address)) == -1) {
        perror("connect");
        exit(1);
    }

    while (1) {
        printf("Enter message: ");
        fgets(message, sizeof(message), stdin);
        message[strlen(message) - 1] = '\0'; // remove newline character

        if (send(client_socket, message, strlen(message) + 1, 0) == -1) {
            perror("send");
            exit(1);
        }

        if (recv(client_socket, message, sizeof(message), 0) == -1) {
            perror("recv");
            exit(1);
        }

        printf("Received from server:\n%s\n\n", message);

        if (strcmp(message, "quit") == 0) {
            printf("Connection to the server has been terminated.\n");
            break;
        }
    }

    close(client_socket);

    return 0;
}

