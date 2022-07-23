#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10;
	int *p;
	p=&a;
	clrscr();
	printf("\n%d",p);
	printf("\n%d",*p);
	printf("\n%d",&a);
	printf("\n%d",a);
	getch();
}