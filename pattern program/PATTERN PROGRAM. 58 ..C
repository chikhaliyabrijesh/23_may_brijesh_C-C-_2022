#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n=5,x=1;
	clrscr();
	for(i=1;i<=n;i++)
	{
	   for(j=1;j<=n;j++)
	   {
		printf("%2d ",x);
		x++;
	   }
	   printf("\n");
	}
	getch();
}

OUTPUT :-   1  2  3  4  5
            6  7  8  9 10
           11 12 13 14 15
           16 17 18 19 20
           21 22 23 24 25