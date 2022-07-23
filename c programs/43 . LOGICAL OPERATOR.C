#include<stdio.h>
#include<conio.h>
void main()
{
int a=10;
int b=5;
clrscr();
printf("enter the value of a and b : ");
scanf("%d%d",&a,&b);
if(a>b && b<a)
{
  printf("true");
}
else
{
  printf("false");
}
getch();
}