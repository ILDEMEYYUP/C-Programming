#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*amaç strcut içiçnde string oluştururken runtime zamanında size ayarlamak*/
struct person {
    char *name;
    char *surname;
    int age ;
};


int main (){
    struct person *p1=malloc(sizeof(struct person));

    p1->name=(char*)malloc(sizeof(char)*(strlen("Eyyüp")+1));
    strcpy(p1->name,"Eyyüp");

                         /* p1->surname="eyyup";
                          normalde stringi böyle değer atamak için 
                        strcpy() kullanamam lazım fakat pointer ne de olsa bi sonraki adrese 
                        atarım deyip yapıyor fakat hiç sağlıklı değil çünkü 
                        diyelim çok uzun br string yaptım  ya da bir sonraki adresin dolu 
                        olmayacağı ne malum 
                        en doğrusu malloc ile oluşturup sonra free yapmak*/
    p1->age=19;

    p1->surname=(char*)malloc(sizeof(char)*(strlen("ildem")+1));/*yeterli bellek*/
                                                    /*ya da strdup() ile halledebilrdim*/
    strcpy(p1->surname,"ildem");
    


    printf("%s %s %d  \n",p1->name, p1->surname, p1->age);

    free(p1->name);
    free(p1->surname);
    free(p1);
}