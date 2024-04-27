#include <stdio.h>
void main()
{
    int m,mid,s,flag=0;
    printf("Enter the size of The array: ");
    scanf("%d", &m);
    
    int a[m];
    int lb=0,ub=m-1;
    printf("Enter the Elements in array in Sorted form: ");
    for(int i=0; i<m; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element you want to search: ");
    scanf("%d", &s);
    while (lb<ub)
    {
        mid = (lb+ub)/2;
        if(a[mid]==s)
        {
            flag=1;
            printf("Search element is found at pos %d", mid+1);
            break;
        }

        else if(a[mid]<s)
        {
            lb=mid+1;
        }
        else if(a[mid]>s)
        {
            ub=mid-1;
        }
    }
    if(flag==0)
    {
        printf("Element isnt present.");
    }
}