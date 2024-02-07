#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <time.h>
#define BUF_SIZE 1024

void transmit_file(FILE* file_ptr, int client_sock, char* file_name) {
    char data_buf[BUF_SIZE] = { 0 };
    send(client_sock, file_name, BUF_SIZE, 0);
    while (fgets(data_buf, BUF_SIZE, file_ptr) != NULL) {
        if (send(client_sock, data_buf, sizeof(data_buf), 0) == -1) {
            perror("Server: Send file error");
            exit(1);
        }
        bzero(data_buf, BUF_SIZE);
    }
    strcpy(data_buf, "\\EOF");
    send(client_sock, data_buf, sizeof(data_buf), 0);
}

void transmit_time(int client_sock) {
    time_t rawtime;
    struct tm* time_info;
    char buffer[BUF_SIZE];
    time(&rawtime);
    time_info = localtime(&rawtime);
    sprintf(buffer, "%s", asctime(time_info));
    if (send(client_sock, buffer, BUF_SIZE, 0) == -1) {
        perror("Server: Send time error");
        exit(1);
    }
}

void run_echo_server(int client_sock) {
    char buffer[BUF_SIZE];
    while (1) {
        bzero(buffer, BUF_SIZE);
        if (recv(client_sock, buffer, sizeof(buffer), 0) == -1) {
            perror("Server: Receive error");
            exit(1);
        }
        if (strcmp(buffer, "\\quit") == 0) {
            send(client_sock, buffer, sizeof(buffer), 0);
            break;
        }
        if (send(client_sock, buffer, sizeof(buffer), 0) == -1) {
            perror("Server: Send error");
            exit(1);
        }
    }
}

int main() {
    char* ip_addr = "127.0.0.1";
    int port_num = 8080;
    int bind_check, server_sock, client_sock;
    struct sockaddr_in server_address, client_address;
    socklen_t addr_size;
    char buffer[BUF_SIZE];
    char* file_name;
    server_sock = socket(AF_INET, SOCK_STREAM, 0);
    if (server_sock < 0) {
        perror("Server: socket error");
        exit(1);
    }
    printf("Server socket created.");
    server_address.sin_family = AF_INET;
    server_address.sin_port = port_num;
    server_address.sin_addr.s_addr = inet_addr(ip_addr);
    bind_check = bind(server_sock, (struct sockaddr*)&server_address, sizeof(server_address));
    if (bind_check < 0) {
        perror("Server: Binding error");
        exit(1);
    }
    printf("Binding success!");
    bind_check = listen(server_sock, 10);
    if (bind_check == 0) {
        printf("Listening...");
    }
    else {
        printf("Server: Listening error");
        exit(1);
    }
    addr_size = sizeof(client_address);
    client_sock = accept(server_sock, (struct sockaddr*)&client_address, &addr_size);
    while (1) {
        recv(client_sock, buffer, BUF_SIZE, 0);
        if (strcmp(buffer, "\\service 1") == 0) {
            transmit_time(client_sock);
        }
        else if (strcmp(buffer, "\\service 2") == 0) {
            send(client_sock, "[Available File List]\n1. Book.txt\n2. Linux.png\n3. Go back\nEnter: ", BUF_SIZE, 0);
            recv(client_sock, buffer, BUF_SIZE, 0);
            if (strcmp(buffer, "1") == 0) {
                file_name = "Book.txt";
            }
            else if (strcmp(buffer, "2") == 0) {
                file_name = "Linux.png";
            }
            else {
                continue;
            }
            FILE* file_ptr = fopen(file_name, "r");
            if (file_ptr == NULL) {
                perror("Server: File error");
                exit(1);
            }
            transmit_file(file_ptr, client_sock, file_name);
            printf("File data sent successfully.");
        }
        else if (strcmp(buffer, "\\service 3") == 0) {
            run_echo_server(client_sock);
        }
        else if (strcmp(buffer, "\\quit") == 0) {
            printf("Client disconnected.");
            break;
        }
        else {
            printf("Invalid input.");
        }
    }
    close(client_sock);
    close(server_sock);
    return 0;
}

