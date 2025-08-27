#include <stdio.h>

void push(char stack[],
                 char item,
                         int *top, 
                            int max_size) {
    if (*top < max_size) /*stack e 
                                 eleman ekliyorum bu yüzden 
                                    top değeri boyuttan fazla olmamalı*/ {
        stack[*top] = item;
        (*top)++;
    } else {
        printf("Stack is full!\n");
    }
}

char pop(char stack[],
                 int *top) {

    char item = '\0';
    if (*top > 0) { /*son eelmanı göster diyorum son elemana gelidsye zetgn artık boştur*/
        (*top)--;
        item = stack[*top];
    } else {
        printf("Stack is empty!\n");
    }
    return item;
}

int main() {
    int max = 3;
    char stack[max];
    int flag = 0;
    int c;
    char item;
    int top = 0;

    while (!flag) {
        printf("Enter 1 to push, 2 to pop: ");
        scanf("%d", &c);

        if (c == 1) {
            printf("Enter a character to push: ");
            scanf(" %c", &item);
            push(stack, item, &top, max);

        } 
        else if (c == 2) {
            char popped = pop(stack, &top);
            if (popped != '\0')
                printf("Popped: %c\n", popped);
            else
                flag = 1;
        }
    }
}
