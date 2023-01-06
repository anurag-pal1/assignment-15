#include<stdio.h>
int smallest(int x[],int s);
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
    r=smallest(a,n);
    printf("\nSmallest number is %d\n\n",r);
    return 0;
}
int smallest(int arr[],int size)
{
    int i,min=arr[0];
    for(i=0;i<size;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    return min;
}

