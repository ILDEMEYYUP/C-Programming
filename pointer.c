# include <stdio.h>
int  avarage (int *ptr , int *ptr2)
{
    
    int sum= *ptr + *ptr2 ;
    int avarage = sum/2 ;
return avarage ;   
}
int main ()
{
    /* 
    int e=4 ; 
    int *ptr ;
    int **ptr2;
    ptr=&e ;
    ptr2=&ptr ;
    printf("%d\n",e);
    printf("%p\n",ptr);
    printf("%p\n",ptr2);
    */

int a = 12 ;
int b=34 ;
int *ptr, *ptr2 ;
ptr=&a ;
ptr2=&b ;

printf("%d",avarage(ptr,ptr2));
return 0 ;

}
