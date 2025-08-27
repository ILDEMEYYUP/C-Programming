#include <stdio.h>
#include <stdlib.h>

char *change_sizeof_stack(char *stack,int *max){
    
    char *n=n=realloc(stack,sizeof(char)*(*max)*2);
    
    printf("size of stack is change to %d \n",(*max)*2);
    return n ;

}

void push (char *stack,char item,int *top,int *max)
{
    if(*top < *max)
    {
        stack[*top]=item;
        (*top)++;
    }
    else {
        stack = change_sizeof_stack(stack,max);
        (*max)*=2;
        stack[*top]=item;
        (*top)++;
    }
}

char pop(char *stack,int *top){
    char pop='\0';
    if(*top>0){
        (*top)--;
        pop=stack[*top];
    }
    return pop ;
}



int main (void){ 
    int max =2;
    char *stack= (char*)malloc(sizeof(char)*max);
    int flag =0;
    char item ;
    int top =0;
    int c;

    while (!flag) {
        printf("Enter 1 to push, 2 to pop: ");
        scanf("%d",&c);

        if (c == 1) {
            printf("Enter a character to push: ");
            scanf(" %c", &item);
            push(stack, item, &top,&max);

        } 
        else if (c == 2) {
            char popped = pop(stack, &top);
            if (popped != '\0')
                printf("Popped: %c\n", popped);
            else{
                flag = 1;
                printf("stack is empty \n");
            }
        }
    }
}


