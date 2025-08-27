#include<stdio.h>
#include<stdlib.h>

/*iki boyutlu dinamik dizii*/
char **crate_city_list(int counter){ /*iki ** çünkü iki boyutlu dizi */
    char **cities=malloc(sizeof(char*)*counter); /* burada sixzeof(char*) diyorum çünkü 2 boyut ya aslında bana 
                                                    counter kadar tek boyutlu  dinamik dizi oluştur demek*/
    int i;

    for(i=0;i<counter ;i++){
        printf("enter %d. city >",i+1);
        cities[i]=malloc(sizeof(char)*30); /*tek boyutlu dinamil diziinin boyuut*/
        scanf("%s",cities[i]);
    }
    return cities ;
    
    
}




int main (){
    int counter ;
    printf("how many names>");
    scanf("%d",&counter);
    char **cities= crate_city_list(counter); /*burada aslında bir nevi iki bouutlu dizi oluşturdum */

    for(int i=0;i<counter;i++){
        printf("%d city is %s \n ",i+1,cities[i]);
        free(cities[i]); 
    }


    free(cities);

    
}