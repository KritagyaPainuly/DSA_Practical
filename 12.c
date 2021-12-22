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
    n->next=NULL;
    if((*head)==NULL){
    (*head)=n;   
    return;}
    node *temp=(*head);
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=n;
}
void display(node *temp)
{
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
void sort(node **head)
{
    node *temp=*head;
    while(temp!=NULL)
    {
        node *temp1=temp->next;
        while(temp1!=NULL)
        {
        int x=temp->data;
        if(temp->data>temp1->data)
        {
            temp->data=temp1->data;
            temp1->data=x;
        }
        temp1=temp1->next;
        }
        temp=temp->next;
    }
    printf("-----SORTED LL-----\n");
    display(*head);
}
void merge(node **head1,node **head2)
{
    node *temp=*head1;
    while(temp->next!=NULL)
    temp=temp->next;
    temp->next=*head2;
    printf("-----MERGED LL-----\n");
    display(*head1);
}
int main()
{
    node *head1=NULL,*head2=NULL;
    int x;
    printf("How many numbers do you want in 1 LL\n");
    scanf("%d",&x);
    printf("Enter the number\n");
    for(int i=0;i<x;i++)
    {
          int val;
          scanf("%d",&val);
          add(&head1,val);
    }
    printf("How many numbers do you want in 2 LL\n");
    scanf("%d",&x);
    printf("Enter the number\n");
    for(int i=0;i<x;i++)
    {
          int val;
          scanf("%d",&val);
          add(&head2,val);
    }
    display(head1);
    display(head2);
    sort(&head1);
    sort(&head2);
    merge(&head1,&head2);
    sort(&head1);
}