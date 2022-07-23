#include<stdio.h>
#include<conio.h>
void main()
{
int a;
int b;
clrscr();
printf("enter two number : ");
scanf("%d%d",&a,&b);
if(a==b && b==a)
{
printf("true");
}
else
{
printf("false");
}
getch();
}