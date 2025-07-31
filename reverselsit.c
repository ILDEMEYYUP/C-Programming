#include<stdio.h>
#include<stdlib.h>


typedef struct node {
    int data ;
    struct  node *next;

}node;

node *create_node(int data){
    node *q=(node*)malloc(sizeof(node));
    q->data=data;
    q->next=NULL;
    return q ;

}

void add_node_to_list(node **head  , int data){
 
    if(*head==NULL){
        *head =create_node(data);
        return;
}
    node *q=*head;
   while(q->next!=NULL){
    q=q->next;
   }
   q->next=create_node(data);
}

void print_lsit(node *head){
    node *q=head;
    int a =1;   

    while(q!=NULL){
        
        printf("%d.node >%d \n",a,q->data);
        q=q->next;

    }
}

void free_node(node *list){
    node *q=list;
  
    while(q!=NULL){
        node *temp=q ;
        q=q->next;
        free(temp);
    }
}

node  *reverse(node *list){
    node *pre =NULL;
    node *next=NULL;
    node *currnt=list;
    while(currnt!=NULL){

        next=currnt->next;

        currnt->next=pre;
        pre=currnt;

        currnt=next;

    }
    return pre ;

}
node* reverse_but_recorsive(node* head) {
    if (head == NULL || head->next == NULL) {
        return head; 
    }

    node* new_head = reverse_but_recorsive(head->next);  
    head->next->next = head;  
    head->next = NULL;        

    return new_head;
}

int main (){
    node *list =NULL;
    add_node_to_list(&list,3);
    add_node_to_list(&list,4);
    add_node_to_list(&list,5);
    print_lsit(list);
    printf("-----------------------\n");
    list= reverse(list);
    print_lsit(list);

    printf("-----------------------\n");
    list = reverse_but_recorsive(list);
    print_lsit(list);
    free_node(list);
}