#include<stdio.h>
#include<string.h>
# define size 6
char stack[size];
int max =size ;
void push(int *top, char x ){
    if(*top<max){
        stack[*top]=x;
        (*top)++ ;
        return ;
    }
    else 
        printf("stack dolu \n");
}
char pop(int *top) {
  char item='?'; 
  if(*top>0){
    (*top)--;
    item =stack[*top];
    
  }
   return item;
}
int is_valid(char *str){
    int top =0;
    int rtrn=1;
    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='(')
            push(&top,'(');
        else if(str[i]== '[')
            push(&top,'[');
        else if(str[i]=='{')
            push(&top,'{');

        else if(str[i]==']'){
            if(pop(&top)!='['){
                rtrn=0;
                break;
            }
        }
            
        else if(str[i]==')'){ 
            if(pop(&top)!='('){
                rtrn=0;
                break;
            }
        }
        else if(str[i]=='}'){ 
            if(pop(&top)!='{'){
                rtrn=0;
                break;
            }
        }
        i++;
    }
return rtrn;
}
int main (){
    char str[size] ="()[]]";
    if (is_valid(str)==1)
        printf("is valid \n");
    else 
        printf("is not valid \n");
}
