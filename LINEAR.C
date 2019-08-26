#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max1 3
void enqueue(int[],int *, int *);
void dequeue(int[],int *,int *);
void display(int[],int *,int *);
int main()
{  int choice,front=-1,rear=-1,que[max1];
clrscr();
  do{
    printf("queue menu \n");
    printf("\n1.insert \n2.delete \n3.display \n4.exit \n");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1: enqueue(que,&front,&rear);
	       break;
      case 2: dequeue(que,&rear,&front);
		break;
      case 3: display(que,&front,&rear);
	       break;
      case 4: exit(0);
      default: printf("wronng choice \n");
       }
       }while(choice!=4);
     return 0;
    }
void enqueue(int que[max1],int *front,int *rear)
{  int n;
  printf("enter the number to be inserted : ");
  scanf("%d",&n);
  if((*rear)==(max1-1))
  {    printf("queue is full \n");
  }
  else
  {  if((*front)==-1)
	 { (*front)=0;  }
     (*rear)=(*rear)+1;
     que[*rear]=n;
     }
  printf("Item inserted=%d\n",n);
   }


   void dequeue(int que[max1],int *rear,int *front)
   {
      if((*front)==-1||(*front)>(*rear))
	{  printf("queue is empty \n");
	  }
      else
      {
	 printf("deleted element from the queue is : %d ",que[(*front)++]);
	}
    }
    void display(int que[max1],int *front, int *rear)
    {
      int i;
      if((*front)==-1||(*front)>(*rear))
	 {
	  printf("queue is empty \n");

	  }
     else
     {
	printf("elements in the queue are :  ");
	i=*front;
	while(i<=(*rear))
	{
	  printf("%d\t",que[i]);
	  i++;	 }
    }
}



