#include<stdio.h>
#include<ctype.h>

/*amaç string deki sayıalrı bulu psadece onları tersten yazmak*/
void print_digits_reverse(char *str){   
    if(*str=='\0'){
       return;
    }

    print_digits_reverse(str+1); /*eğer sorun yoksa devam et bakmaya */
    
    if(isdigit(str[0])==1){
        printf("%d",str[0]-'0'); /*en sona geldin mi sıra sıra geri bak uygunsa teminale bastır*/
    }
}


int main() {
    char input[100];
    printf("Bir kelime girin: ");
    scanf("%s", input);
    print_digits_reverse(input);
    return 0;
}