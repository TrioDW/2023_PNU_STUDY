#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/un.h>

#define UNIX_PATH "UNIX_SOCKET_1"

int main() {
    int unixSocketFd;
    struct sockaddr_un serverUnixAddr;
    char buffer[256];

    if ((unixSocketFd = socket(AF_UNIX, SOCK_STREAM, 0)) == -1) {
        perror("socket");
        exit(EXIT_FAILURE);
    }

    memset(&serverUnixAddr, 0, sizeof(struct sockaddr_un));
    serverUnixAddr.sun_family = AF_UNIX;
    strncpy(serverUnixAddr.sun_path, UNIX_PATH, sizeof(serverUnixAddr.sun_path) - 1);

    if (connect(unixSocketFd, (struct sockaddr*)&serverUnixAddr, sizeof(serverUnixAddr)) < 0) {
        perror("[Error] Unix socket : connect");
        exit(EXIT_FAILURE);
    }

    printf("[Info] Unix socket : connected to the server\n");

    while (1) {
        printf("Enter : ");
        fgets(buffer, sizeof(buffer), stdin);

        if (send(unixSocketFd, buffer, strlen(buffer), 0) == -1) {
            perror("send");
            break;
        }

        if (strcmp(buffer, "quit\n") == 0) {
            break;
        }
    }

    printf("Terminate...\n");
    close(unixSocketFd);

    printf(": Success\n");
    printf("[Info] Closing socket\n");

    return 0;
}

