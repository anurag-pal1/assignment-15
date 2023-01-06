#include<stdio.h>
void frequency(int x[],int s);
int main()
{
    int i,n;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    frequency(a,n);
    return 0;
}
void frequency(int x[],int size)
{
    int hash[100]={0};
    int i,count=0;
    for(i=0;i<=size;i++)
    {
        hash[x[i]]++;
    }
    for(i=1;i<100;i++)
    {
       if(hash[i] !=0)
       {
           printf("%d ---> %d",i,hash[i]);
           printf("\n");
       }
    }
}

