#include<stdio.h>


typedef enum {
    entertainment, /* hiçbir şeye ellemden yapsam 0dan 1 artaracak*/
    rent,       
    utilities,
    food,
    clothing=5, /*dersem eğer öncekiler aynı matık 0dan 1 <rtarak */
    automobile, /* fakt burası 6dan başlayacak*/
    insurance,
    miscellaneous
} expense_t;


void print_expense(expense_t x ){
    printf("expense code is represent : ");
    switch (x)
    {
    case entertainment:
        printf("entertainment");
        printf(".\n");
        break;
    case rent:
        printf("rent");
        printf(".\n");
        break;
    case utilities:
        printf("utilities");
        printf(".\n");
        break;
    case food:
        printf("food");
        printf(".\n");
        break;
    case  clothing:
        printf(" clothing");
        printf(".\n");
        break;
    case automobile:
        printf("automobile");
        printf(".\n");
        break;
    case insurance:
        printf("insurance");
        printf(".\n");
        break;
    case miscellaneous:
        printf("miscellaneous");
        printf(".\n");
        break;
    default:
        printf("nothing.\n");
        break;
    }
}

int main (){
    expense_t x ;

    printf("enter  a code :");
    scanf("%d",&x);
   
    print_expense(x);
    
}