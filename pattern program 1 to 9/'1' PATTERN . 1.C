#include<stdio.h>           OUTPUT :-  **   
#include<conio.h>                     * *
void main()                          *  *
{                                   *   *
	int i,j;                   *    *   
	int n=11;                       *  
	clrscr();                       *
	for(i=1;i<=n;i++)               *
	{                               *
	   for(j=1;j<=n;j++)            *
	   {                       ***********
	      if((j==6 || i==n) || (i+j==6 && i+j<=6))
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