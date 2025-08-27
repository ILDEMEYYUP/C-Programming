#include <stdio.h>
#include <stdlib.h>
void maxi(int *arr,int *max ,int n)
{
    *max=arr[0];
for(int i =0;i< n;i++)
{
    if(arr[i]>*max)
    {
        *max=arr[i];
    }
}
}
int main ()
{
    int n ;
    printf("dizi boyutu\n");
    scanf("%d",&n);
    int array[n];
    for(int i =0 ;i<n;i++)
    {
        printf("dizinin %d. elemanı",i);
        scanf("%d",&array[i]);
    }
    int max ;
    maxi(array, &max,n);
    printf("dizinin max elemanı :%d",max);

return 0 ; 
}
