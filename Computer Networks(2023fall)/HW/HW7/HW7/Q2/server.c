#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define SERVER_PORT 9002
#define MAX_CLIENTS 10

int main(void) {
    char buffer[256];
    struct sockaddr_in server_addr, client_addr;
    int server_socket, client_socket, client_len = sizeof(client_addr);
    int client_count = 0;

    if ((server_socket = socket(AF_INET, SOCK_STREAM, 0)) == -1) {
        perror("socket");
        exit(1);
    }

    memset((char *)&server_addr, '\0', sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(SERVER_PORT);
    server_addr.sin_addr.s_addr = INADDR_ANY;

    if (bind(server_socket, (struct sockaddr *)&server_addr, sizeof(server_addr)) == -1) {
        perror("bind");
        exit(1);
    }

    if (listen(server_socket, MAX_CLIENTS) == -1) {
        perror("listen");
        exit(1);
    }

    while (1) {
        if ((client_socket = accept(server_socket, (struct sockaddr *)&client_addr, &client_len)) == -1) {
            perror("accept");
            exit(1);
        }

        printf("New Client!\nNumber of service clients: %d\n", ++client_count);

        switch (fork()) {
        case 0:
            close(server_socket);

            while (1) {
                if (recv(client_socket, buffer, sizeof(buffer), 0) == -1) {
                    perror("recv");
                    exit(1);
                }

                if (strcmp(buffer, "quit") == 0) {
                    printf("Client disconnected\n");
                    close(client_socket);
                    exit(0);
                }

                printf("Received from Client: %s\n\n", buffer);

                if (send(client_socket, buffer, strlen(buffer) + 1, 0) == -1) {
                    perror("send");
                    exit(1);
                }
            }
        default:
            close(client_socket);
        }
    }

    return 0;
}

