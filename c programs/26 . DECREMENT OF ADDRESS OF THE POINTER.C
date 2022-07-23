#include<stdio.h>
#include<conio.h>
void main()
{
	int num = 50;
	int *p;
	clrscr();
	p = &num;
	printf("address of p : %d",p);
	p=p-2;
	printf("\nafter increment address of p : %d",p);
	getch();
}