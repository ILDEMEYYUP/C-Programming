#include<stdio.h>
#include<string.h>


void printf_range(char *str,int start ,int end ){

    for(int i=start ;i<=end;i++){
        printf("%c",str[i]);
    }
    printf("\n");
}

int ispalidrom(char *str,int start ,int end ){
    if (end-start +1 <= 2){
        return 1 ;
    }
    if(str[start] == str[end]){
        start++;
        end--;
        return ispalidrom(str,start,end);
    }
    return 0 ;
}

void find_palidrom(char *str){
    int len =strlen(str);
    for(int start=0; start<len ;start++){
        for(int end =start+1; end<len ; end++){
            if(ispalidrom(str,start,end)){
                printf_range(str,start,end);
            }
        }
    }
   
}


int main (){

    char word[20];
    printf("enter a word >");
    scanf("%s",word);
    find_palidrom(word);
}