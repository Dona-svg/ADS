#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],b[20],c[20];
int i,m1,m2,m3,ind=1,j,k,d;
clrscr();
printf("enter number of elements in the first array");
scanf("%d" ,&m1);
printf("enter elements");
for (i=1;i<=m1;i++)
{
scanf("%d",&a[i]);
}
printf("enter number of elements in the second array");
scanf("%d",&m2);
printf("enter elements");
for (i=1;i<=m2;i++)
{
scanf("%d",&b[i]);
}
m3=m1+m2;
for (i=1;i<=m1;i++)
{
c[ind]=a[i];
ind++;
}
for (i=1;i<=m2;i++)
{
c[ind]=b[i];
ind++;
}
for (j=1;j<=m3;j++)
{
for (k=j+1;k<=m3;k++)
{
if (c[j] > c[k])
{
d=c[j];
c[j]=c[k];
c[k]=d;
}
}
}
printf ("SORTED ARRAY is");
for (i=1;i<=m3;i++)
{
printf("\t%d\t",c[i]);
}
getch();
}