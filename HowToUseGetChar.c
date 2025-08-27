#include<stdio.h>
#include<string.h>


char *scanline(char *output,int size){
    char ch;
    int i=0; 
    for(ch = getchar(); ch!=EOF &&  ch!='\n' && i<size-1 ;ch=getchar())
    output[i++]=ch; /* burada stringi dolduruyoruz */

    output[i]='\0';

    while(ch!=EOF && ch!='\n' ) /*fazladan giriş olursa temizle */
        ch=getchar();
    

    return output ;
}


int main ()
{
    int len =10;
    
    char str[len] ;

    scanline(str,len);

    printf("%s",str);
    
}