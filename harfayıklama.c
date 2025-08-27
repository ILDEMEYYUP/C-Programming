#include<stdio.h>
 
char vowels[]="aeıiuüoö";

void print_vowels_recursive(char *str){
    if(str[0]=='\0')
        return ;

    for(int i=0;i<8;i++){
        if(str[0]==vowels[i]){
            printf("%c",str[0]);
            break;
        }
    }
    print_vowels_recursive(str+1);

}

int main (){
    char word[20];
    printf("enter a word >");
    scanf("%s",word);
    print_vowels_recursive(word);
}