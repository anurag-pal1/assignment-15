#include<stdio.h>
void merged(int x[],int s,int y[]);
int main()
{
    int i,n;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter %d numbers:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter %d numbers:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    merged(a,n,b);
    return 0;
}
void merged(int x[],int size,int y[])
{
    int c[2*size];
    int i=0,j=0,k=0,n;
    n=2*size;
    while(n != 0)
    {
        if(x[i]>y[j])
            {
                if(i==5)
                    break;
                c[k]=x[i];
                i++;
            }
            else
            {
                c[k]=y[j];
                j++;
            }
            k++;
            n--;
    }
    for(i=0;i<2*size;i++)
    {
        printf("%d ",c[i]);
    }

}


