#include<stdio.h>
void reverse(int x[],int s);
int main()
{
    int i,n;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    reverse(a,n);
    return 0;
}
void reverse(int x[],int size)
{
    int i;
    for(i=size-1;i>=0;i--)
    {
         printf("%d ",x[i]);
    }
}
