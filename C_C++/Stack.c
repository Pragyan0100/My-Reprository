#include <stdio.h>
#define size 20
int stack[size],top=-1;
void push(int data)
{
    if(top==size-1)
    {
        printf("Stack overflow\n");
    }
    else
    {
        top++;
        stack[top]=data;
        printf("The data is pushed\n");
    }
}
int pop()
{
    if (top==-1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        int temp=stack[top];
        top--;
        return temp;
    }
}
void display()
{
    if (top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("The elements of stack are:\n");
        for(int i=top;i>=0;i--) 
       {
           printf("%d\n",stack[i]);
       }
    }
}
void main()
{
    int ch,data;
    char c;
    do
    {
        printf("1. PUSH\n2. POP\n3. DISPLAY\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("Enter data to be pushed:");
                    scanf("%d",&data);
                    push(data);
                    break;
            case 2: printf("Element %d is popped\n",pop());
                    break;
            case 3: display();
                    break;
            default: printf("Invalid Choice!\n");
                    break;
        }
        printf("Do you want to continue(Y/N)?");
        scanf(" %c",&c);
    } while(c=='y' ||c=='Y');
}