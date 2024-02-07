#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/un.h>

#define NEW_UNIX_PATH "UNIX_SOCKET_2"

int main() {
    int newUsockfd;
    struct sockaddr_un newServAddr;
    char newBuffer[256];

    if ((newUsockfd = socket(AF_UNIX, SOCK_STREAM, 0)) == -1) {
        perror("socket");
        exit(EXIT_FAILURE);
    }
    
    memset(&newServAddr, 0, sizeof(struct sockaddr_un));
    newServAddr.sun_family = AF_UNIX;
    strncpy(newServAddr.sun_path, NEW_UNIX_PATH, sizeof(newServAddr.sun_path));

    if (connect(newUsockfd, (struct sockaddr*)&newServAddr, sizeof(newServAddr)) < 0) {
        perror("[Error] Unix socket : connect");
        exit(EXIT_FAILURE);
    }

    printf("[Info] Unix socket : connected to the server\n");

    while (1) {
        printf("Enter : ");
        fgets(newBuffer, sizeof(newBuffer), stdin); 

        if (send(newUsockfd, newBuffer, strlen(newBuffer), 0) == -1) {
            perror("send");
            break;
        }

        if (strncmp(newBuffer, "quit", 4) == 0) {
            break;
        }
    }

    printf("Terminate...\n");
    close(newUsockfd);

    printf(": Success\n");
    printf("[Info] Closing socket\n");

    return 0;
}

