#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node * next
};
void traversal(struct Node *ptr)
{
    while(ptr!=NULL)
    {
    printf("%d ",ptr->data);
    ptr=ptr->next;
    }
}
struct Node * insert(struct Node *head ,int data )
{
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}

int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    head->data=6;
    head->next=second;
    second->data=7;
    second->next=third;
    third->data=12;
    third->next=NULL;
    traversal(head);
   head= insert(head,45);
    printf("\n");
    traversal(head);
}













