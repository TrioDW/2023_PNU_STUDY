#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#define BUF_SIZE 1024

void write_to_file(int client_sock, char* file_name) {
    int n;
    FILE* file_ptr;
    char buffer[BUF_SIZE];
    file_ptr = fopen(file_name, "w");
    if (file_ptr == NULL) {
        perror("Client: File error");
        exit(1);
    }
    while (1) {
        n = recv(client_sock, buffer, BUF_SIZE, 0);
        if (n <= 0) {
            break;
            return;
        }
        if (strcmp(buffer, "\\EOF") == 0) {
            break;
        }
        fprintf(file_ptr, "%s", buffer);
        bzero(buffer, BUF_SIZE);
    }
    fclose(file_ptr);
    return;
}

int main() {
    char* ip_addr = "127.0.0.1";
    int port_num = 8080;
    int connect_check;
    int client_sock;
    struct sockaddr_in server_addr;
    char buffer[BUF_SIZE];
    char file_name[BUF_SIZE];
    client_sock = socket(AF_INET, SOCK_STREAM, 0);
    if (client_sock < 0) {
        perror("Client: socket error");
        exit(1);
    }
    printf("Server socket created.");
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = port_num;
    server_addr.sin_addr.s_addr = inet_addr(ip_addr);
    connect_check = connect(client_sock, (struct sockaddr*)&server_addr, sizeof(server_addr));
    if (connect_check == -1) {
        perror("Client: Connection error");
        exit(1);
    }
    printf("Connected to server.");
    while (1) {
        int user_command;
        printf("\n[Service List]\n1. Get Current Time\n2. Download File\n3. Echo Server\nEnter: ");
        scanf("%d", &user_command);
        sprintf(buffer, "\\service %d", user_command);
        send(client_sock, buffer, BUF_SIZE, 0);
        if (user_command == 1) {
            printf("Time: ");
            recv(client_sock, buffer, BUF_SIZE, 0);
            printf("%s", buffer);
        }
        else if (user_command == 2) {
            recv(client_sock, buffer, BUF_SIZE, 0);
            printf("%s", buffer);
            scanf("%s", buffer);
            send(client_sock, buffer, BUF_SIZE, 0);
            recv(client_sock, file_name, BUF_SIZE, 0);
            write_to_file(client_sock, file_name);
            printf("File downloaded successfully.");
        }
        else if (user_command == 3) {
            while (1) {
                printf("\nEnter message: ");
                scanf("%s", buffer);
                send(client_sock, buffer, BUF_SIZE, 0);
                if (strcmp(buffer, "\\quit") == 0) {
                    break;
                }
                printf("\n[You] %s", buffer);
            }
        }
        else {
            printf("Invalid input.");
        }
    }
    close(client_sock);
    return 0;
}

