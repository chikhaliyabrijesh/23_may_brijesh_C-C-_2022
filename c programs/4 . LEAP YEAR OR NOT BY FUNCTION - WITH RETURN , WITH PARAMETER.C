#include<stdio.h>
#include<conio.h>
int leapyear(int year)
{
	if(year%4==0)
	{
	    printf("\nthe year is a leap year.");
	}
	else
	{
	    printf("\nthe year is not a leap year");
	}
	return 0;
}
void main()
{
	int year;
	clrscr();
	printf("enter a year : ");
	scanf("%d",&year);
	leapyear(year);
	getch();
}
