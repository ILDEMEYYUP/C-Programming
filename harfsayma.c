#include<stdio.h>


int count(char a ,char *str){

    
    if(str[0]=='\0')
        return 0;

    if(str[0]==a)
        return (1 + count(a,str+1));
    
    else 
        return count(a,str+1);
}


int main (){
    char a ='a';
    char str[]="merhaba";
    printf("%d time %c letter in the %s",count(a,str),a,str);
}
