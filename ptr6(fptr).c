/*fonksiyon pointer kullanma */
/*<dönüş_türü> (*<pointer_adı>)(<parametreler>) 
    şeklinde kuulanılır */


#include<stdio.h>

int add(int a, int b){
    return a+b;
}

int sub(int a ,int b){
    return a-b;
}

char new_word(char a ,char b ,char c){
    char new =a+b+c;
    return new ;
}

void print_hi(char *name){
    printf("hello , %s",name);
}

void apply_op(int(*fptr)(int,int),int a ,int b){
        printf("result is :%d \n",fptr(a,b));
    
}

int main (void){
    int a =5,b=2;
    int result ;
    char d;
    char x='x';
    char y='y';
    char z='z';


    /*<dönüş_türü> (*<pointer_adı>)(<parametreler>)*/
    int (*fop)(int,int);
    
    char (*fch)(char,char,char);

    fop=add;
    result =fop(a,b);
    printf("%d\n",result);

    fop=sub;
    result=fop(a,b);
    printf("%d \n",result);

    fch=new_word;
    d=fch(x,y,z);
    printf("%c \n",d);

    apply_op(fop,a,b);

}