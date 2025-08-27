#include<stdio.h>
#include<string.h>


void reverse(char *str, int *n) {
    if (*n < 0)
        return;

    printf("%c", str[*n]);
    (*n)--;  
    reverse(str, n);
}



int main (){
    char str[]="merhaba";
    int n =strlen(str)-1;
    reverse(str,&n);

}