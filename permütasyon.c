#include<stdio.h>
#include <string.h>

/*amaç string al ör: abc tüm permütasyonları yazdrı abc bca cba cab bac acb gibi*/

void swap(char *str, int i ,int j){
     char temp ;
    temp=str[i];
    str[i]=str[j];
    str[j]=temp;
}

void permute(char *str, int start ,int end ){
   if(start==end) {
    printf("%s\n",str);
    return ;
   }

    for(int i=start ;i<end ;i++){
            swap(str,start,i);
            permute(str,start+1,end);
            swap(str,i,start);
    }

}


int main(){
    char str[]="abcd";
    int end =strlen(str);
    permute(str,0,end);
}