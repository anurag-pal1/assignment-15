#include<stdio.h>
int adjacentduplicate(int x[],int n);
int main()
{
    int n,i,r;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    r=adjacentduplicate(a,n);
    printf("Value of first duplicate element is %d",r);
    return 0;
}
int adjacentduplicate(int x[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(x[i]==x[i+1])
        {
            return x[i];
        }
    }
}

