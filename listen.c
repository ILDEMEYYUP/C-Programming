#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 9000
#define BUF_SIZE 1024

int main() {
    int sockfd;
    struct sockaddr_in serverAddr, clientAddr;
    char buffer[BUF_SIZE];
    socklen_t addrLen = sizeof(clientAddr);

    /* Socket*/
    sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    if (sockfd < 0) {
        perror("socket");
        return 1;
    }

    /*Server adres bilgilerini ayarla*/
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(PORT);
    serverAddr.sin_addr.s_addr = INADDR_ANY;

    /*Bağla */
    if (bind(sockfd, (struct sockaddr*)&serverAddr, sizeof(serverAddr)) < 0) {
        perror("bind");
        close(sockfd);
        return 1;
    }

    printf("Server %d mesaj bekliyor...\n", PORT);

    
    while (1) {
        int recvLen = recvfrom(sockfd, buffer, BUF_SIZE, 0, (struct sockaddr*)&clientAddr, &addrLen);
        if (recvLen < 0) {
            perror("recvfrom");
            continue;
        }

        buffer[recvLen] = '\0'; 
        printf("gelen mesaj: %s\n", buffer);
    }

    close(sockfd);
    return 0;
}
