#include <stdio.h>
 #define size 10 
 int Arr[size] ;
   int top=-1 ;
   int main ()
   {
   	int option ;
   	do {
   		printf("\n.......Menu of the Stack.......\n");
   		printf("1.Push \n 2.Pop \n 3.Display \n 4.Exit \n");
   		printf(".................................\n");
   		printf("what do you want to do\n");
   		scanf("%d",&option);
   		switch(option)
		    {
   			case 1:  push() ;
   			break;
   			case 2:   pop();
   			break ; 
   			case 3:  display();
   			break ; 
		   }
           
		   } while(option!=4) ;
           return 0;
	   
   }
   void push ()
      {
   	int p ;
   	if(top==size-1)
   	{
   		printf("Stack is overflow\n");
	}
	   else 
	   {
	   	printf("Enter the element:\n ");
	   	scanf("%d",&p);
	   	top=top+1 ;
	   	Arr[top]=p ;
	   }
	}
          int pop ()
	{
	    	int n ; 
	    	if(top==-1)
	      {
	    		printf("Stack is empty\n");
		}
		    else
		{
		    	 n=Arr[top] ;
		      top=top-1 ; 
		      return n ;
		}
		}
			 
	void display ()
	{
	  	if(top==-1)
	{
	  		printf("stack is empty");
	}
		  else 
		  {
		  	printf("Elements of stack");
		  	for(int i=top ; i>=0 ; i--)
			{
		  		printf("%d\n",&Arr[i]);
			}
		  }
	}
