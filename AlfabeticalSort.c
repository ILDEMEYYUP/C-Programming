#include<stdio.h>
#include<string.h>
                /*bu tanımlayı yapmak için en başta diziyi pointer olarak belirtmek lazım
                ör: *words[]={"elma",
                                "armut"...}*/
void print_words(char *arr[],int size){
    int i;
    for(i=0;i<size;i++){
        printf("%s \n",arr[i]);
    }
}
            /*bu tanımlayı yapmak için en başta diziyi pointer olarak belirtmek lazım*/
void sort_words(char *arr[],int size ){
    int i,j;
    char *temp;

    for (i=0;i<size-1;i++){
        for(j=0; j< size-1;j++){
            if(strcmp(arr[j],arr[j+1])>0){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
}

int main (void){
    char *words[] = { /* tüm diziyi pointer olrak tanımlaama isşi */
                
        "programming",
        "university",
        "algorithm",
        "function",
        "pointer",
        "structure",
        "variable",
        "compiler",
        "debugger",
        "iteration",
        "recursion",
        "expression"
    };
    
    sort_words(words,12);

    print_words(words,12);
}