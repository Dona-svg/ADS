#include<stdio.h>
#include<conio.h>
struct node
{
int info;
struct node *next;
};
typedef struct node N;
void init();
void create();
void insertbeg();
void insertend();
void deletbeg();
void deletend();
void count();
void search();
void display();
N *start,*ptr,*q,*t,*temp,*save,*r;
void main()
{
int ch,n,i,elem;
clrscr();
start=NULL;
do
{
printf("1.create\n2.insertbegin\n3.insertend\n4.deletbegin\n5.deletend\n6.count\n7.search\n8.display\n9.exit\n");
printf("enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:create();
break;
case 2:insertbeg();
break;
case 3:insertend();
break;
case 4:deletbeg();
break;
case 5:deletend();
break;
case 6: count();
break;
case 7:search();
break;
case 8:display();
break;
case 9:exit();
break;
default:printf("invalid choice");
break;
}}
while(ch!=9);
}
void init()
{
int elem;
printf("enter the element");
scanf("%d",&elem);
ptr=(struct node*)malloc(sizeof(struct node));
ptr->info=elem;
ptr->next=NULL;
}
void create()
{
init();
if(start==NULL)
start=ptr;
else
{
q=start;
while(q->next!=NULL)
q=q->next;
q->next=ptr;
}}
void insertbeg()
{
init();
if(start==NULL)
{
printf("the list is empty");
start=ptr;
}
else
{
ptr->next=start;
start=ptr;
}}
void insertend()
{
init();
if(start==NULL)
start=ptr;
else
{
r=start;
r->next=ptr;
ptr->next=NULL;
}}
void deletbeg()
{
if(start==NULL)
printf("the list is empty");
else
{
if(start->next==NULL)
{
temp=start;
start=NULL;
free(temp);
}
else
{
temp=start;
start=start->next;
free(temp);
}} }
void deletend()
{
save=start;
if(start==NULL)
printf("the list is empty");
if(start->next==NULL)
{
temp=start;
start=NULL;
free(temp);
}
else
{
while(save->next!=NULL)
{
temp=save;
save=save->next;
}
temp->next=NULL;
free(save);
}}
void display()
{
if(start==NULL)
printf("the list is empty");
else
{
t=start ;
while(t!=NULL)
{
printf("%d\n",t->info);
t=t->next;
}}}