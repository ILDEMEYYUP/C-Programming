#include<stdio.h>
#include<stdlib.h>

/*amaç:Kullanıcıdan kaç giriş yapacağını sor.

        Her giriş için:

        Türünü iste (int, float, string)

        Değeri al

        Bütün girdileri bir dizi içinde sakla.

        En sonda, kullanıcıya tüm girişleri yazdır:  */

typedef enum {
    INTEGER,
    FLOAT,
    STRING
} ValueType;

typedef union {
    int i_val;
    float f_val;
    char str_val[50];
} Value;

typedef struct {
    ValueType type;
    Value data;
} Entry;

void print_variant(Entry *e,int size) {
    for(int i=0;i<size;i++){

        switch (e[i].type) {
            case INTEGER: printf("%d entry int: %d\n",i+1, e[i].data.i_val); break;
            case FLOAT: printf("%d entry float: %.2f\n",i+1, e[i].data.f_val); break;
            case STRING: printf("%d entry str: %s\n",i+1, e[i].data.str_val); break;
        }

    }

}
int main (){
    int size ;
    printf("enter how many ent>");
    scanf("%d",&size);

    Entry *entrys=(Entry*)malloc(sizeof(Entry)*size);

    for(int i=0;i<size;i++){

        printf("%d in which data type >",i+1);
        scanf("%d",&entrys[i].type);

    switch (entrys[i].type) {
        case INTEGER:
                    printf("enter a integer> ");
                    scanf("%d",&entrys[i].data.i_val);
        break;
        case FLOAT: 
                    printf("enter a float num>"); 
                    scanf("%f",&entrys[i].data.f_val);
        break;
        case STRING:
                     printf("enter a string >"); 
                     scanf("%s",entrys[i].data.str_val);
        break;
    }
    }
    print_variant(entrys,size);

}