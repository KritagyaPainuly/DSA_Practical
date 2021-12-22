#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node;
void atRight(node **head,int val)
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
void deleteAl(node **head)
{
    int count=0;
    node *n=(node *)malloc(sizeof(node));
    node *temp=*head;
    while(temp->next!=NULL)
    {
        if(count%2==0)
        {
         n=temp->next;
         temp->next=temp->next->next;  
         free(n);
        }
        else
        temp=temp->next;
        count++;
    }   
    display(*head);
}

int main()
{
  node *head=NULL;
  int n;
  while(1)
  {
  printf("1 Add element at right 2 Delete Alternative 3 Display 4 Exit\n");
  scanf("%d",&n);
  switch(n){
      case 1:{
          printf("Enter the number\n");
          int val;
          scanf("%d",&val);
          atRight(&head,val);
          break;
      }
      case 2:{
          deleteAl(&head);
          break;
      }
      case 3:{
          display(head);
          break;
      }
      case 4:{
          printf("EXITING\n");
          return 0;
      }
  }    
  }
}