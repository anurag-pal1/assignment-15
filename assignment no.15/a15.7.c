#include<stdio.h>
void duplicate(int x[],int s);
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
    duplicate(a,n);
    return 0;
}
void duplicate(int x[],int size)
{
    int hash[100]={0};
    int i,count=0;
    for(i=0;i<=size;i++)
    {
        hash[x[i]]++;
    }
    for(i=0;i<=100;i++)
    {
       if(hash[i]==2)
       {
           count++;
       }
    }
    printf("Total numbers of duplicate elements is %d",count);
}
