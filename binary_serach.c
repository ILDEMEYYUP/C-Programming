#include<stdio.h>
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
void binary (int array[],int x ,int *left_index,int *right_index)
{
    int mid_index=(*left_index) +((*right_index)-(*left_index))/2;

    if(array[mid_index]==x)
    {
        printf("its found \n");
        return ;
    }
    if((*left_index)==(*right_index))
    {
        printf("not found \n");
        return ;
    }
    if(array[mid_index]<x)
    {
        (*left_index)=mid_index+1;
        binary(array,x,left_index,right_index);
    }
    else 
    {
        (*right_index)=mid_index-1;
        binary(array,x,left_index,right_index);

    }
}

int main(void) //babacum marjinallik yaaaaa
{
int array[]={0,1,2,7,4,5};
int size =sizeof(array)/sizeof(array[0]);
int left_index=0;
int right_index=size-1;
int x ;
printf("the number search :");
scanf("%d",&x);
insertion_sort(array,size );
binary(array,x,&left_index,&right_index);

}
