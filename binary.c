#include<stdio.h>



int main (){
    int arr[]={1,2,3,4};


    FILE*file=fopen("file.bin","wb");
    FILE *f =fopen("file.txt", "w");
    for(int j=0;j<10; j++){
    for(int i=0;i<4;i++){
        fprintf(f,"%d",arr[i]);
    }
    }
    
    fwrite(arr,sizeof(arr),40,file);
    fclose(file);
    
}
