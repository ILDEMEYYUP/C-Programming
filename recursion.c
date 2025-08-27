#include<stdio.h>
void reverse(char *str, int *n) {
    if (*n < 0)
        return;

    printf("%c", str[*n]);
    (*n)--;  
    reverse(str, n);
}

void decimal_to_binary(int *index,char *result,int number )
{                       //indexi pointer oalrak kullanıyroum çünkü değerini değiştiriyorum 
                        //aynı şey result için de geçerli 
                        //rsult[] şeklinde olamyacak 
if (number==0)
{
    result[*index]='\0'; // böylece 32 yerlik yeri index kadarına indirdim
    reverse(result,(index));
    return ;
}
int kalan =number%2;
number=(number-kalan)/2;
result[*index]=kalan+'0';
(*index)++;
decimal_to_binary(index, result ,number );

}

int fibonacci(int n)
{
    //fibo serisinin ilk iki elemanı 
    if(n==1)
    {
        return 1 ;
    }
    if(n==2)
    {
        return 1 ;
    }
    return fibonacci(n-1)+fibonacci(n-2);
            // 1 1 2 3 5 8 13 ...
}





int main()
{
int choise ;
int number ;
int index=0 ;
int n ;
char result[32];
printf("for decimal to binary press 1 \n");
printf("for fibo  press 2 \n");

scanf("%d",&choise);
switch(choise)
{
    case 1 :
    printf("enter a number:");
    scanf("%d",&number);
    decimal_to_binary(&index,result,number);
    printf(" is equal to %d  \n",number);
    break ;
    case 2 :
    printf("learn the nth element in the fibonacci series \n");
    scanf("%d",&n);
    printf("%d\n",fibonacci(n));
    break;

}


}