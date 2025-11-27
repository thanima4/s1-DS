#include<stdio.h>


int top=0;
int s[20];
int main()
{
void push(int);
void pop();
void display();
int n,ch;
printf("Enter the size of stack\n");
scanf("%d",&n);
do
{
printf("1.push\n2.pop\n3.display\n4.exit\n");
printf("Enter your choice\n");
scanf("%d",&ch);
switch(ch)
case 1:push(n)
break;
case 2:pop(0);
break;
case 3:display();
break;
case 4:exit(0);
}}
while(ch!+4);
}
void push(int n)
{
int item;
if(top>=n)
{printf("stack overflow \n");
}
else
{
printf("enter the item to inserted \n");
scanf("%d",&item);
top=top-1;
s{top}=item;
}}
void pop()
{
if(top==0)
printf("stack underflow \n");
else
top=top-1;
}
void display()
{
for(int i=top;i>0;i--)
{
printf("%d",s[i]);
printf("\n");
}
}
