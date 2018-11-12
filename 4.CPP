#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int que[7];
int front=-1;
int rear=-1;
void insert(int);
int del();
void display();
void insert(int item)
{
if (rear==6)
printf("overflow\n");
else if(front<0)
{
front=0;
rear=0;
que[rear]=item;
}
else
{
rear++;
que[rear]=item;
printf("item entered\n");
}
}
int del()
{
int x;
if(front<0)
printf("queue underflow\n");
else if (front==rear)
{
x=que[front];
front=rear=-1;
return x;
}
else
{
x=que[front];
front++;
return x;}
return 0; }
void display()
{
int i;
printf("elements of queue are\n");
for(i=front;i<=rear;i++)
printf("%d\t", que[i]);
}
void main()
{
int q,ite,i;
clrscr();
while(i)
{
printf("\n press 1 to insert:\n press 2 to delete:\n press 3 to display:\n press 4 to exit:");
scanf("%d",&q);
switch(q)
{
case 1: printf("enter the item");
scanf("%d",&ite);
insert(ite);
break;
case 2: printf("deleted item is %d", del());
break;
case 3: display();
break;
case 4: exit(0);
}
}
getch();
}
