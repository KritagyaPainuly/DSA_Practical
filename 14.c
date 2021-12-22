#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}node;
void add(node **head,int val)
{
    node *n=(node *)malloc(sizeof(node));
    n->data=val;
    if((*head)==NULL){
    (*head)=n;  
    n->next=*head; 
    return;}
    node *temp=(*head);
    while(temp->next!=(*head))
    temp=temp->next;
    n->next=*head;
    temp->next=n;
}
void display(node *head)
{
    node *temp=head;
    while(temp->next!=head)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("%d->",temp->data);
    printf("HEAD\n");
}
int main()
{
    node *head=NULL;
    int x;
    printf("How many numbers do you want in CIRCULAR LL\n");
    scanf("%d",&x);
    printf("Enter the number\n");
    for(int i=0;i<x;i++)
    {
          int val;
          scanf("%d",&val);
          add(&head,val);
    }
    display(head);
}  