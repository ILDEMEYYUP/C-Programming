#include<stdio.h>
#include<stdlib.h>
/*amaç : struct oluştur dinamik bellek le 
        fonksiyona parametre olaark gönder yazdır 
        */
typedef struct {
    char name[30];
    int age;
} student;

student *s(int number){

    student *s=(student*)malloc(sizeof(student));

    printf("%d enter name >",number);
    scanf("%s",s->name);
    printf("%d enter age >",number);
    scanf("%d",&s->age);
    return s;

}

void print_student(student *arr ,int size)
{
    for(int i=0;i<size;i++){
        printf("%d. name : %s age : %d \n",i+1,arr[i].name,arr[i].age);
    }

}


int main(){
    int counter ;
    printf("how many student : ");
    scanf("%d",&counter);
    student *students=(student*)malloc(sizeof(student)*counter);

    for(int i=0;i<counter;i++){
        students[i]= *s(i+1); /* burada * koymam gerekti çünkü sol taraf normal bir dizi iken
                                    sağ taraf * olmdan bi pointer dan yani adresten ibaret ben * koyarak adersin içine bak demek istedim  */
    }
    print_student(students,counter);


        free(students);

    
}
