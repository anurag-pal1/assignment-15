#include<stdio.h>
void unique(int x[],int s);
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
    unique(a,n);
    return 0;
}
void unique(int x[],int size)
{
    int hash[100]={0};
    int i,count=0;
    for(i=0;i<=size;i++)
    {
        hash[x[i]]++;
    }
    for(i=0;i<=100;i++)
    {
       if(hash[i]==1)
       {
           printf("%d ",i);
       }
    }
}

