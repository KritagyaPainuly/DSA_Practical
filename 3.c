#include<stdio.h>
#include<stdlib.h>
void reverse(int * arr,int end,int start)
{
    if(start>=end)
    return;
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    reverse(arr,end-1,start+1);
}

int main()
{
    int n;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    printf("Enter elements\n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    reverse(arr,n-1,0); 
    for(int i=0;i<n;i++)
    printf("%d   ",*(arr+i));
}