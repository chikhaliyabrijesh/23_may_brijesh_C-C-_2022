#include<stdio.h>           OUTPUT :-  *     *
#include<conio.h>                      **    *
void main()                            * *   *
{                                      *  *  *
	int i,j,n=7;                   *   * *
	clrscr();                      *    **  
	for(i=1;i<=n;i++)              *     * 
	{
	   for(j=1;j<=n;j++)
	   {
	     if((j==1 || j==n) || (i-j==n-n))
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