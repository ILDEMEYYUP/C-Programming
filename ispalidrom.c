#include<stdio.h>
#include<string.h>

/*önce çıkış anhatarı 
    sonra devamlılık şartı 
        şeklimnde gitmek doğru*/




int ispalidrom(char *str){
    int len=strlen(str);
    if(len<=1){
         return 1 ;
    }

    if(str[0]!=str[len-1]){
        return 0 ;
    }
    ispalidrom(str+1);
    
}


int main (void){
    char word[20];
    printf("enter a word>");
    scanf("%s",word);
    if(ispalidrom(word)==0){
        printf("%s is not a palidrom word",word);
    }
    else {
        printf("%s is a palidrom word",word);
    }
}