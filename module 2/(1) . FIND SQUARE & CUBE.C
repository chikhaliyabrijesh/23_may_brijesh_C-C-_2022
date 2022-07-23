#include<stdio.h>
#include<conio.h>
void main()
{
	int square,cube,n;

	clrscr();

	printf("enter a number to find square and cube : ");
	scanf("%d",&n);

	square = n * n;
	printf("\nsquare of the given number is : %d",square);

	cube = n * n * n;
	printf("\ncube of the given number is : %d",cube);

	getch();

}



