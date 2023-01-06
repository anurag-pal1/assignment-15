#include<stdio.h>
void sorting(int a[],int s);
int main()
{
    int n,i;
    printf("Enter size of array:\n");
    scanf("%d",&n);
     int arr[n];
    printf("\nEnter %d numbers:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sorting(arr,n);
    return 0;
}
void sorting(int a[],int size)
{
    int i,t,j;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<(size+1);j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }

    }
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
}
