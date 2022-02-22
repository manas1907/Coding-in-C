#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
};
void printList(struct Node* n)
{
    while (n != NULL) {
        printf(" %d ", n->data);
        n = n->next;
    }
}

void after(struct Node* prev_node,int new_data)
{
if(prev_node==NULL)
{
  printf("The previous node cannot be NULL");
  return;
}
else
{
    struct Node* new_Node=(struct Node*)malloc(sizeof(struct Node*));
    new_Node->data= new_data;
    new_Node->next= prev_node->next;
    prev_node->next= new_Node;
}
}
void main()
{
struct Node* head=(struct Node*)malloc(sizeof(struct Node*));
struct Node* second=(struct Node*)malloc(sizeof(struct Node*));
struct Node* third=(struct Node*)malloc(sizeof(struct Node*));
struct Node* last=(struct Node*)malloc(sizeof(struct Node*));
head->data=1;
head->next=second;
second->data=2;
second->next=third;
third->data=3;
third->next=last;
last->data=4;
last->next=NULL;
after(second, 0);
printList(head);
}