#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=15;i++)
	{
	   for(j=1;j<=15;j++)
	   {
	      if((i==8 || j==8) || (i==1 && j>=8) || (i<=8 && j==1) ||
		 (i==15 && j<=8) || (i>=8 && j==15))
	      {
		 printf("*");
	      }
	      else
	      {
		 printf(" ");
	      }
	   }
	   printf("\n");
	}

	getch();
}