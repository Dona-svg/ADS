
On Sun, 14 Mar 2021, 8:12 pm Lisna Jos, <lisnajos08@gmail.com> wrote:
#include<stdio.h>
#define max 5
int cqueue_arr[max];
int front=-1;
int rear=-1;
void insert(int item)
{
	if((front==0&&rear==max-1)||(front==rear+1))
	{
		 printf("queue overflow\n");
		 return;
	}
	if(front==-1)
	{
	       front=0;
	       rear=0;
	}
	else
	{
	       if(rear==max-1)
	       rear=0;
	       else
	       rear=rear+1;
	}
	cqueue_arr[rear]=item;
}
void del()
{
      if(front==-1)
      {
	      printf("queue underflow\n");
	      return;
      }
      printf("element deleted from queue is:%d\n",cqueue_arr[front]);
      if(front==rear)
      {
	      front=-1;
	      rear=-1;
      }
      else
      {
	      if(front==max-1)
	      front=0;
	      else
	      front=front+1;
      }
}
void display()
{
      int front_pos=front,rear_pos=rear;
      if(front==-1)
      {
	      printf("queue is empty\n");
	      return;
      }
      printf("queue elements:\n");
      if(front_pos<=rear_pos)
      while(front_pos<=rear_pos)
      {
	      printf("%d",cqueue_arr[front_pos]);
	      front_pos++;
      }
      else
      {
	      while(front_pos<=max-1)
	      {
		      printf("%d",cqueue_arr[front_pos]);
		      front_pos++;
	      }
	      front_pos=0;
	      while(front_pos<=rear_pos)
	      {
		      printf("%d",cqueue_arr[front_pos]);
		      front_pos++;
	      }
       }
       printf("\n");
}
int main()
{
	int choice,item;
	clrscr();
	do
	{
		printf("1.Insert\n");
		printf("2.Delete\n");
		printf("3.Display\n");
		printf("4.Exit\n");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Input the element for insertio in queue:");
				scanf("%d",&item);
				insert(item);
				break;
			case 2:
				del();
				break;
			case 3:
				display();
				break;
			case 4:
				break;
			default:
				printf("Wrong choice\n");
		}
	  }while(choice!=4);
	  return 0;
}
