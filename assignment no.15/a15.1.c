#include<stdio.h>
int max(int x[],int s);
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
    r=max(a,n);
    printf("\nMaximum number is %d\n\n",r);
    return 0;
}
int max(int arr[],int size)
{
    int i,max=arr[0];
    for(i=0;i<size;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    return max;
}
