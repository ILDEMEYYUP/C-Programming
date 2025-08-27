#include<stdio.h>
#include<stdlib.h>


int **create_arr(int **arr , int size){
    for(int i=0;i<size; i++){
        printf("enter %d element of array > ",i+1);
        arr[i]=malloc(sizeof(int));
        scanf("%d",arr[i]);
    }
    return arr;
}

void print_arr(int **arr ,int size){
    for(int  i=0;i<size;i++){
        printf("%d elemnt of element > %d\n",i+1,*arr[i]); /*burada *arr[i] demem gerekti çünkü arr[i] adresten ibaret 
                                                            öyle olmasının da sebebi ** olarak tanımlanmış olması */
    }
}

void free_arr(int **arr , int size ){
    for(int i=0;i<size;i++){
        free(arr[i]);
    }
    free(arr);
}

int main (){
    int size ;
    printf("enter size >");
    scanf("%d",&size);

    int **arr=malloc(sizeof(int*)*size);

    arr = create_arr(arr,size);
    print_arr(arr,size);
    free_arr(arr,size);

}