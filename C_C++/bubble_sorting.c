#include <stdio.h>
void main()
{
    int n,c;
    printf("Enter the size of stack:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of stack:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("1.Ascending Order\n2.Descending Order\nSelect how you want to do the sorting:");
    scanf("%d",&c);
    if (c==1)
    {
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-1-i;j++)
            {
                if(a[j]>a[j+1])
                {
                   int temp=a[j];
                   a[j]=a[j+1];
                   a[j+1]=temp;
                }
            }
        }
    }
    else if (c==2)
    {
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-1-i;j++)
            {
                if(a[j]<a[j+1])
                {
                   int temp=a[j];
                   a[j]=a[j+1];
                   a[j+1]=temp;
                }
            }
        }
    }
    printf("Sorted Array:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}