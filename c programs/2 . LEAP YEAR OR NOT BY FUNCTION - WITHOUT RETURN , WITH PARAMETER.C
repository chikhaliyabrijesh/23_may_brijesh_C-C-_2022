#include<stdio.h>
#include<conio.h>
void leapyear(int year)
{
	if(year%4==0)
	{
	    printf("\nthe year is a leap year.");
	}
	else
	{
	    printf("\nthe year is not a leap year.");
	}

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