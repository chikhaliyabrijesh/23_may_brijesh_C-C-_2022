#include<stdio.h>
#include<conio.h>
int leapyear()
{
	int year;
	printf("enter a year : ");
	scanf("%d",&year);
	if(year%4==0)
	{
	    printf("\nthe year is a leap year.");
	}
	else
	{
	    printf("\nthe year is not a leap year.");
	}
	return year;
}
void main()
{
	clrscr();
	leapyear();
	getch();
}