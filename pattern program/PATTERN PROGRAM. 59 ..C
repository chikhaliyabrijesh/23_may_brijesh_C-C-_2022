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
		x = x + 2;
	   }
	   printf("\n");
	}
	getch();
}

OUTPUT :-  1  3  5  7  9
          11 13 15 17 19
          21 23 25 27 29
          31 33 35 37 39 
          41 43 45 47 49 
