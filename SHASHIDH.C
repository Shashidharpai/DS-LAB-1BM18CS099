#include<stdio.h>
#include<conio.h>
#define stack_size 3
void push(int[],int*);
void pop(int[],int*);
void main()
{
int stack[stack_size],top=-1,choice,i;
do
{
printf("enter the choice u want to perform:\n 1 to push\n 2 to pop\n3 to display\n to exit press any other number\n ");
scanf("%d",&choice);
switch(choice)
{
 case 1:
      push(stack,&top);
      break;
 case 2:
	pop(stack,&top);
	break;
 case 3:
    if(top==-1)
    printf("stack empty , push some element first\n");
    else
    {
    printf("displaying the stack\n");
    for(i=0;i<=top;i++)
    {printf("%d",stack[i]);}
    }
    break;
}

}while(choice==1||choice==2||choice==3);

}
void push(int stack[stack_size],int *top)
{
int element;
if ((*top)==stack_size-1)
printf("stack overflow\n");
else
{
printf("enter the element to push :\n ");
scanf("%d",&element);
stack[++(*top)]=element;
printf("the element pushed to the stack is %d\n",element);
}
}
void pop(int stack[stack_size],int *top)
{
int element;
if (*top==-1)
printf("stack underflow\n");
else
{
(*top)--;
printf("the element popped is %d\n",stack[(*top)]);
}
}
