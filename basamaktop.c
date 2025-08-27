/*amaç : bir sayının basamakları toplamını hesaplamak */
/*yol haritası
                1	Problemi küçük parçalara bölebiliyor muyum?
                2	Aynı işlemi tekrar yapıyor muyum?
                3	Durma şartım nedir? (base case)
                4	Her adımda sona yaklaşıyor muyum?
                5	Çıktı ileri giderken mi yoksa geri dönerken mi üretilecek?*/

#include <stdio.h>






int basamak_toplamı(int num ){
    if( num<10 )
        return num ;
    else{
        return num % 10 + basamak_toplamı(num/10);
    }
}

void terstenyaz(int num){
    if(num<10){
        printf("%d\n",num);
        return ;
    }  
    else {
        printf("%d",num%10);
        terstenyaz(num/10);
       
       
        
    }
}


int main(){
    int num ;
    printf("enter a num>");
    scanf("%d",&num);
    printf("result is :%d \n",basamak_toplamı(num));
    printf("tersten ise :");
    terstenyaz(num);
}

