#include<stdio.h>
void rotate(int a[],int b,int c);
int main()
{
    int n,i,d;
    printf("Enter size of array:\n ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the no. of rotation:\n");
    scanf("%d",&d);
    rotate(a,n,d);
    return 0;
}
void rotate(int x[],int size, int z)
{
    int i,j,temp;
    for(j=1;j<=z;j++)
    {
        temp=x[size-1];
        for(i=size-1;i>0;i--)
        {
           x[i]=x[i-1];
        }
        x[0]=temp;
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",x[i]);
    }
}
