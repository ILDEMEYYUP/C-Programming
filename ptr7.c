/*amaç :struct’lara pointer ile erişim*/
#include<stdio.h>
#include<stdlib.h>

typedef struct {
    char *name;
    char *surname;
    int age;
}person;


person *create_person(){
        person *p=(person*)malloc(sizeof(person));
        printf("enter name > \n");
        p->name=malloc(sizeof(char)*10);
        scanf("%s",p->name);
        printf("enter surname > \n");
        p->surname=malloc(sizeof(char)*10);
        scanf("%s",p->surname);
        printf("enter age > \n");
        scanf("%d",&p->age);
    return p;
}


void printf_person(person *p){
    printf("name :%s surname: %s age:%d\n"
                                ,p->name
                                ,p->surname
                                    ,p->age);


}

int main(){
    person *p=create_person();
    printf_person(p);
    free(p->surname);
    free(p->name);
    free(p);
}
    