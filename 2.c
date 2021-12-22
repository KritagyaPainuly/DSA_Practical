#include<stdio.h>
int process(int arr[],int n)
{
    int temp[n],count=1;
    for(int i=0;i<n;i++)
    temp[i]=arr[i];
    for(int i=0;i<n;i++)
    for(int j=i;j<n;j++)
    if(arr[i]==temp[j] && j!=i)
    {
        if(count==3)
        return arr[i];
        count++;
        break;
    }
    printf("No 3 Repeating elements\n");
    return -1;
}

int main(){
    int n;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements\n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("%d",process(arr,n));
}