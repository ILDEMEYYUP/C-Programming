/*part 10 da yaptığımın biraz farklısı */
/* (**) kullanımı */
/*amaç fonksiynun adresini değiştirmek */
/*veya adres oluşturmk */
/*birden fazla str ttumak için ideal*/
/*iki boyutlu yapılar için matrix table gibi*/
#include<stdio.h>
#include<stdlib.h>


void create_city(char **cities,int num){

    for(int i=0;i<num;i++){
        cities[i]=malloc(sizeof(char)*30);
        printf("enter %d. city >",i+1);
        scanf("%s",cities[i]);
    }

}

void print_city(char **city ,int num){
    for(int i=0;i<num;i++){
        printf(" %d : %s \n",i+1 ,city[i]);
    }
}

void free_city(char **city ,int num){
    for(int i=0;i<num;i++){
        free(city[i]);
    }
    free(city);
}

int main(){
    int num ;
    printf("how many city >");
    scanf("%d",&num);

    char **city=malloc(sizeof(char*)*num); /*10. kısımdan farklı olarak diyi mainde oluştudum*/

    create_city(city,num);/*sonra fonkstionun içinde doldurdum*/
    print_city(city,num);
    free_city(city,num);
}