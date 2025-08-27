#include<stdio.h>

int count_sub_arr(int arr[],int n,int target){
    if(target==0) return 1 ; /*amacım hedef sayıyı azaltıp sonuca ulaşmak*/
    if(n==0) return 0  ; /*aynı zamanda tüm elemanlar dolaşmak*/

    if(arr[n-1]>target)  /*eğer ki eleman hedeften büyükse onu alma*/
        return count_sub_arr(arr,n-1,target);
    else 
        return count_sub_arr(arr, n-1 ,target) + count_sub_arr(arr, n-1 ,target-arr[n-1]);
            /*burada şunu ypıyorum mesele index de 10 var hem 10u alarak bi rota --count_sub_arr(arr, n-1 ,target-arr[n-1]);-- çiz 
                                                                hem de almadan --count_sub_arr(arr, n-1 ,target-arr[n-1])--*/
         /*burada aslında daha alt parçalara bölmüş oluyorum her ne kadar 2 şeyin toplamı gibi dursa da öyle değil 2-4-10 mesela*/
}

int main(){
    int x=4;
    int arr[4]={10,4,1,6}; /*taeget is 10*/
    int target=5;
    
    printf("number of sub arr> %d",count_sub_arr(arr,x,target));
}