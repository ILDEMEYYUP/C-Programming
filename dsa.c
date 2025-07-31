//data structeres and algorithms
#include <stdio.h>
//O(n^2)
void bubblesort (int arr[] ,int size )
{
for(int i=0;i<size-1;i++)
{
    for(int j=0;j<size-1-i;j++)
    {
        if(arr[j]>arr[j+1])
        {
            int temp;
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;

        }    
    }
}



}
//O(n^2)
void selectionsort (int arr[] , int size )
{
    for(int i=0; i<size-1 ;i++)
    {
        int min_index=i;
        for(int j=i+1 ;j<size;j++)
        {
          if(arr[j]<arr[i])
          {
                min_index=j;
          }  
        }
        if(min_index!=i)
        {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }

    }
}
//O(n^2)
void insertion_sort(int arr[], int size )
{
    for(int i=1;i<size ;i++)
    {
        int current_index=arr[i];
        int j=i-1 ;
            while (j>=0 && arr[j]>current_index)
            {
                arr[j+1]=arr[j];
                j-- ;
            }
            arr[j+1]=current_index;
            

        

    }

}


void quick_sort(int arr[],int size )
{












}


























int main (void)
{
int arr[]={4,2,3,1,5};
int size = sizeof(arr)/sizeof(arr[0]);
quick_sort(arr, size);

for(int i =0;i<size;i++)
{
    printf("%d\n",arr[i]);
} 


    
}