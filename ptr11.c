#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int age ;
    char *name;
}student;

student **crearte_students(int num){
    student **students=malloc(sizeof(student*)*num); /*struct diziszi oluştudrm ve return ettim */

    for(int i=0; i<num ;i++){
        students[i] = malloc(sizeof(student));
        students[i]->name=malloc(sizeof(char)*30);
        printf("enter %d. name >",i+1);
        scanf("%s",students[i]->name);
        printf("enter %d. age >",i+1);
        scanf("%d",&students[i]->age);
    }
    return students;
}

void print_student_and_free(student **arr,int num){ /*burada ** koydum çünkü burada aynı zamanda free etmek istedim*/
    for(int i=0;i<num;i++){
        printf("%d name : %s age %d  : \n",i+1,arr[i]->name,arr[i]->age);
        free(arr[i]->name);
        free(arr[i]);
    }
}

int main (){
    int num ;
    printf("how many student >");
    scanf("%d",&num);
    student **students=crearte_students(num);
    print_student_and_free(students,num);
}