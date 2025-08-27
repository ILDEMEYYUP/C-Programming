
#include<stdio.h>
/*fptr yi fonksiton içinde kullanılabilir*/
/*amaç daha mödüler olması*/

int add(int a, int b){
    return a+b;
}

int sub(int a ,int b){
    return a-b;
}

/*mainde değil burada tanımladım*/
void apply(int (*fptr)(int,int),int a,int b){
    printf("result is %d \n",fptr(a,b));

}

int main (){

    int choise,a,b;
    printf("enter a op: 1 to add 2 for sub");
    scanf("%d",&choise);

    printf("enter two number num1 num2:");
    scanf("%d %d",&a,&b);

    switch (choise){
    case 1:apply(add,a,b);break;

    case 2 :apply(sub,a,b);break;
    default:break;}
}