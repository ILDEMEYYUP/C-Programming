#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node {
    int data ;
    char *name ;
    struct node *next;
}node;

node *create_node(int data , char *name)
{
    node *n = (node*)malloc(sizeof(node));
    n->data=data;
    n->name=strdup(name);
    n->next=NULL;
    return n ;
}

void print_reverse(node *n)
{
    if(n->next!=NULL){
        print_reverse(n->next);
    }
    printf("%s %d\n",n->name,n->data);
}

void print_list(node *n)
{
    node * q =n;
    int a =1;
    
    while(q!=NULL)
    {
        printf("%d: %s %d \n",a,q->name,q->data);
        a++;
        q=q->next;
    }

}

void add_node_to_head(node **head, int data ,char *name)
{
    node *new_head=create_node(data,name);
    new_head->next=*head;
    *head=new_head; 
}

void add_node_to_tail(node **list ,int data ,char *nam)
{
    node *q=*list;

    while(q->next!=NULL){
        q=q->next;
    }
    q->next=create_node(data,nam);
}

void delete_node(node**list , char *name)
{
    if(strcmp((*list)->name,name)==0)
    {
        node *temp=(*list);
        (*list)=(*list)->next;
        free(temp);
        return ;
    }

    node *q=*list;

    while(q!=NULL && q->next!=NULL)
    {
        if(strcmp(q->next->name,name)==0)
        {
            node *temp=q->next;
    
            q->next=q->next->next;

            free(temp);

            break; 
        }
        q=q->next;

    }

}

void reverse_list();

int main(void)
{
    node *list = NULL;

    char name1[] = "eyyup";
    char name2[] = "yusu";
    char name3[] = "ali";
    char name4[] = "hasn";




    add_node_to_head(&list,4,name1);
    add_node_to_head(&list,3,name2);
    add_node_to_head(&list,2,name3);
    add_node_to_head(&list,1,name4);

    print_list(list);
    
    printf("-----------------------------\n");

    delete_node(&list,name1);

    print_list(list);

    // Bellek temizliği
    node *temp;
    while (list != NULL) {
        temp = list;
        list = list->next;
        free(temp->name);
        free(temp);
    }

    return 0;
}
