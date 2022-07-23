#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter a number : ");
scanf("%d",&n);
printf("\nthe reverce numbers from %d to 1 : \n",n);
while(n != 0)
{
printf("%d ",n);
n--;
}

getch();
}