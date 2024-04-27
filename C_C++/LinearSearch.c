#include <stdio.h>
void main()
{
 int z;
 printf("Enter the Size of Array: ");
 scanf("%d",&z);
 int a[z],b,flag=0;
 printf("Enter the elements of array in sorted order: ");
 
 for(int i=0; i<z;i++)
 {
     scanf("%d",&a[i]);
 }
 printf("Enter the elements you want to Search: ");
 scanf("%d",&b);
 
 for(int j=0; j<z;j++)
 {
     if(b==a[j])
     {
         flag=1;
         printf("The element's pos %d",j+1);
         break;
     }
 }
 if(flag==0)
 {
     printf("Element dosent exist");
 }
     
}