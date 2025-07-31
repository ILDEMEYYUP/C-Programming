#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include<time.h>


#define PORT 9000
#define BUF_SIZE 1024

int main() {
    int socked;
    struct sockaddr_in serverAddr;
    char buffer[BUF_SIZE];
    FILE * log = fopen("logged.txt","w");
    /* Socket oluşturma*/
    /*AF_INET kullandım domain olarak 
    type olrak sock_dgram(UDP) 
    hızlı fakat dengesiz*/
    socked = socket(AF_INET, SOCK_DGRAM, 0);
    if (socked < 0) {
        perror("socket");
        return 1;
    }

    /* Server adres bilgileri*/
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(PORT);
    inet_pton(AF_INET, "127.0.0.1", &serverAddr.sin_addr);  

    while (1) {
        time_t now = time(NULL);
        struct tm *local = localtime(&now);
        fprintf(log,"Şu anki tarih ve saat: %s", asctime(local));
        fprintf(log,"%s",buffer);
        
        printf("mesaj: ");
        fgets(buffer, BUF_SIZE, stdin);

        
        buffer[strcspn(buffer, "\n")] = '\0';

        int sentLen = sendto(socked, buffer, strlen(buffer), 0,
                             (struct sockaddr*)&serverAddr, sizeof(serverAddr));
        if (sentLen < 0) {
            perror("sendto");
        }
    }

    close(socked);
    fclose(log);
    return 0;
}
