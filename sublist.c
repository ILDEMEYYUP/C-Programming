#include<stdio.h>





void sublist(int *arr, int target , int n ,int *path,int patlen){
    if(target==0){
        for(int i=0;  i<patlen;i++){
            printf("%d ",path[i]);
        }
        printf("\n");
        return ;
    }
    if(n==0)return ;
    if(arr[n]>target){
        sublist(arr,target,n-1,path,patlen);
    }
    
        path[patlen]=arr[n];
        sublist(arr,target-arr[n],n-1,path,patlen+1);

        sublist(arr,target,n-1,path,patlen);
}


int main(){
    int arr[5]={1,2,3,4,5};
    int path[10] ;
    int plen=0;
    sublist(arr,10,5,path,plen);
}