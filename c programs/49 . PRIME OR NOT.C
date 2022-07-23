#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,flag=0;
clrscr();
	printf("enter the no for prime or not\n");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
	{
	if(n%i==0)
	{
	flag=1;
	}
	}
	if(flag==0)
	{
	printf("no is prime");
	}
	else
	{
	printf("no is not prime");
	}
getch();
}

OUTPUT :-

ENTER THE NO FOR PRIME OR NOT : 
7
NO IS PRIME