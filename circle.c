#include<stdio.h>
#include<stdlib.h>

typedef struct circle
{
    int data ;
    struct circle *next;
    
}circle;

circle *create_node(int data,circle *list){
    circle *new = (circle*)malloc(sizeof(circle));
    new->data=data;
    new->next =list;
    return new;
}

void add_node_to_list(int data, circle **list){

    if (*list == NULL) {
        *list = create_node(data, NULL);
        (*list)->next = *list; 
        return;
    }
    
    circle *q=(*list);
    while(q->next!= (*list)){
        q=q->next;
    }
    q->next=create_node(data,*list);


}
void print_list(circle *list){
    int a=1;
    circle *q =list;

    do {
        printf("%d data is %d\n", a++, q->data);
        q = q->next;
    } while (q != list);

}
void free_circle(circle *list){
    circle *temp;
    circle *q=list;
    while (q != list) {
        temp = q;
        q = q->next;
        free(temp);
    }
}

int main (){
    circle *list =NULL ;
    int data1=1,
        data2=2,
        data3=3;

    add_node_to_list(data1,&list);
    add_node_to_list(data2,&list);
    add_node_to_list(data3,&list);

    print_list(list);

    free_circle(list);

}
