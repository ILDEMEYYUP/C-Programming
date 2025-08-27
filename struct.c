#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct person {
    int age;
    char *name ; /*böyle yaparak istedğim boyuutta string oluşturdum*/
    char *departmen;
    float height;
    int weight;
};

typedef struct car {
    char name[20] ;
    int age ;
}car;



typedef struct student {
    char name [20];
    char surname [20];
    int id ;
    int age ;
    int mid ;
    int final ;
    float gpa;
}student;




int get_gpa(student *a ){
    return a->gpa=(a->final+a->mid)/2;


}


int main (void)
{
    /*struct pointer dalgası*/
    student a;
    student *ptr=&a;
    ptr->mid=20;
    ptr->final=20; 
    get_gpa(ptr); /*içeri &a yazsam da olur */
    printf("%d\n",ptr->mid);
    printf("%d\n",ptr->final);
    printf("%f\n",ptr->gpa);
    printf("---------------------------------\n");
    

    



    struct  person eyp;
    eyp.age=19;
    /* bu kullanım hatalı eğer name e bi boyut değeri vermezsem strcpy(eyp.name,"eyyüp"); */ 
    eyp.departmen="computer eng";   
    eyp.weight=90;
    eyp.height=1.94;
    printf("%s\n",eyp.name);
    printf("%s\n",eyp.departmen);
    printf("%d\n",eyp.age);
    printf("%d\n",eyp.weight);
    printf("%0.2f\n",eyp.height);
    printf("---------------------------------\n");
    /*typedef ile oluşturrulanlafr*/

    car toyota;
    toyota.age=23;
    strcpy(toyota.name,"corolla");
    
    printf("%s\n",toyota.name);
    printf("%d\n",toyota.age);
    printf("---------------------------------\n");




}