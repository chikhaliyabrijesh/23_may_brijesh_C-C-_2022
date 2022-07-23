#include<stdio.h>        OUTPUT :- *     *
#include<conio.h>                  **   **
void main()                        * * * *
{                                  *  *  *
	int i,j;                   * * * *
	int n=7;                   **   **
	clrscr();                  *     * 
	for(i=1;i<=n;i++)
	{
	   for(j=1;j<=n;j++)
	   {
	      if((j==1 || j==n) || (i==j || i+j==n+1))
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