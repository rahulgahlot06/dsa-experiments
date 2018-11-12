#include<stdio.h>
#include<conio.h>
void sort(int[],int);
void main()
{
int i,a[10],size;
clrscr();
printf("enter the size of array\n");
scanf("%d",&size);
printf("enter array elements");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
sort(a,size);
printf("sorted array is:");
for(i=0;i<size;i++)
printf("%d",a[i]);
getch();
}
void sort(int a[],int size)
{
int i,j,min,index;
for(i=0;i<size;i++)
{
min=a[i];
index=i;
for(j=i+1;j<size;j++)
{
if(min>a[j])
{
min=a[j];
index=j;
}
}
a[index]=a[i];
a[i]=min;
}
}