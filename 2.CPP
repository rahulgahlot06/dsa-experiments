#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,a[10],x;
clrscr();
printf("enter the size of array\n");
scanf("%d", &n);
printf("enter the series");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=1;i<n;i++)
{
for(j=0;j<n-1;j++)
{
if(a[j]>a[j+1])
{
x=a[j];
a[j]=a[j+1];
a[j+1]=x;
}
}
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
getch();
}
