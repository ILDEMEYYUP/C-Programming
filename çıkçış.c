#include<stdio.h>
/*kaç tane eleman aynı*/
int compare(char a[],char b[]){
    int i=0;
    int common=0;
   
    while(a[i]!='\0'){
        int j=0;
        while(b[j]!='\0'){
            if(a[i]==b[j]){
                common++;
                break ;
            }
        j++;
        }
   i++;
    }
    return common;
}

void f(char *a[],int size ,int *x, int *y){
    int max=0;
    for(int i=0 ;i<size;i++){
        for(int j=i+1 ;j<size;j++){
            if(compare(a[i],a[j])>max){
                max=compare(a[i],a[j]);
                *x=i;
                *y=j;
            }
                
        }
    }

}


int main(){
    char s1[]="512",
        s2[]="0011",
        s3[]="9821",
        s4[]="125";
    int i1,i2;

    char *ptr[5]={s1,s2,s3,s4};
    f(ptr,4,&i1,&i2);
    printf("%d and %d \n",i1,i2);

}