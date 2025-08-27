#include<stdio.h>



typedef struct {
    char name[20];
    int age ;
}student;
                /*burada fonksiyona diziyi pointer olarak gönderdim 
                 ama yararı daha hızlı olması  */
void print_student(student *arr ,int  size ){
    for(int i=0;i<size;i++){
        printf("%d. student name is %s",i+1,arr[i].name); /* pointer olarak gönderdiğim arr dizisinin elemanları (arr[i]) struct türünde.
                                                            Yani arr[i] doğrudan bir student struct'ıdır. Bu yüzden . kullanarak 
                                                            name ve age alanlarına erişebilirim.

                                                            Eğer arr[i] değil de doğrudan struct pointer olsaydı (örneğin: student *p),
                                                            o zaman -> kullanmam gerekirdi.

                                                            Yani: arr[i].name doğru çünkü arr[i] bir struct.
                                                            */
        printf("%d. student age  is %d \n",i+1,arr[i].age);

    }
}


int main(void){
    student students[3];

    for(int i=0;i<3;i++){
        printf("enter %d. student name >",i+1);
        scanf("%s",students[i].name);
        printf("enter %d. student age >",i+1);
        scanf("%d",&students[i].age);
    }
    print_student(students,3);
}