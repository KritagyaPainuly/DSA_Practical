#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
    struct node* prev;
}node;
void add(node **head,int val)
{
    node *n=(node *)malloc(sizeof(node));
    n->data=val;
    n->next=NULL;
    n->prev=NULL;
    if(*head==NULL)
    {
        *head=n;
        return;
    }
    node *temp=*head;
    while (temp->next!=NULL)
        temp=temp->next;
    n->prev=temp;    
    temp->next=n;  
}
void display(node *temp)
{
    printf("NULL");
    while(temp!=NULL)
    {
        printf("<-%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
void palidrom(node *temp)
{
    node *temp1=temp;
    while(temp->next!=NULL)
    temp=temp->next;
    while(temp1!=temp)
    {
        if(temp->data!=temp1->data)
        {
            printf("----NOT PALIDROM----\n");
            return;
        }
        temp=temp->prev;
        temp1=temp1->next;
    }
    printf("----PALIDROM----\n");
    return;
}
int main()
{
    node *head=NULL;
    int x;
    printf("How many numbers do you want in DOUBLY LL\n");
    scanf("%d",&x);
    printf("Enter the number\n");
    for(int i=0;i<x;i++)
    {
          int val;
          scanf("%d",&val);
          add(&head,val);
    }
    display(head);
    palidrom(head);
}