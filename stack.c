#include<stdio.h>
#include<conio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
void main()
{
top=-1;
printf("enter the size of stack");
scanf("%d",&n);
printf("\n1.PUSH\n2.POP\n3.DISPLAY");
do{
printf("enetr your choie");
scanf("%d",&choice);
switch(choice)
{
case 1:push();
break;
case 2:pop();
break;
case 3:display();
break;
case 4:exit(0);
break;
}
}while(choice!=3);
}
void push()
{
if(top>=n-1)
{
printf("stack overflow");
}
else
{
printf("enetr the value to be inserted");
scanf("%d",&x);
top++;
stack[top]=x;
}
}
void pop()
{
if(top<=-1)
{
printf("stack underflow");
}
else
{
printf("popped element is %d",stack[top]);
top--;
}
}
void display()
{
if (top>=0)
{
printf("the elements of the array are") ;
for(i=0;i<=top;i++)
{
printf("%d",stack[i]);
}
}
else
{
printf("stack is empty");
}
}