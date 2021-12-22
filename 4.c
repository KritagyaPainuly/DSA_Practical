#include<stdio.h>
#define max 10
void push(int *arr,int val,int *top)
{
  if(*top==max-1){
  printf("Stack is full\n");    
  return;}  
  *top=*top+1; 
  arr[*top]=val;
  return;
}
void pop(int arr[],int *top)
{
    if(*top==-1){
    printf("Stack is empty\n");    
    return;}
    printf("%d has been poped\n",arr[*top]);
    *top=*top-1;
    return;
}
void peek(int arr[],int top)
{
    if(top==-1){
    printf("Stack is empty\n");    
    return;}
    printf("%d\n",arr[top]);
}
void display(int arr[],int top)
{
    if(top==-1){
    printf("Stack is empty\n");    
    return;}
    for(int i=0;i<=top;i++)
    printf("%d ",arr[i]);
    printf("\n");
}
void isempty(int arr[],int top)
{
    if(top==-1){
    printf("Stack is empty\n");    
    return;}
    printf("Stack is not empty\n");
    return;
}
int main()
{
    int n;
    int top=-1,arr[max];
    while(1){
    printf("Enter 1 Push 2 Pop 3 Peek 4 Display 5 isempty 6 Exit\n");
    scanf("%d",&n);
    switch(n){
    case 1:{int val;
         printf("Enter the number\n");  
         scanf("%d",&val); 
         push(arr,val,&top);
         break;}
    case 2:{int val;
         pop(arr,&top);
         break;}    
    case 3:{
         peek(arr,top);
         break;}
    case 4:{
         display(arr,top);
         break;}     
    case 5:{     
         isempty(arr,top);
         break;}
    case 6:{
         printf("\n-----Exiting-----\n");
         return 0;
    }}}
}