/*dizi aslında ilk elamanı pointer olan ve her elemanı art arda kaydeden bir yapıdır */
/*yani ilk eleamnın yerini biliyorska sonrakş eelmanın da yerini biliyotuz demek*/
# include <stdio.h>


int main(){
    int arr[5]={10,2,3,4,5};
    int *ptr = arr; /*artık benim oluşturduğum pointer dizinin ilk elamının adrsine eşit*/
    
    printf("%d",*ptr); /*diznin ilk elamına eşit*/

    for(int i=0;i<5;i++){
        printf("%d \n ",*(ptr+i)); /* (en başa '*' koydum çünkü adres değil 
                                        değer görmk istitorum ve sürekli adresi artttırıdm 
                                        böylece dizi index i kullanmadan dizi de dolaşmıl oldum )*/
    }


}