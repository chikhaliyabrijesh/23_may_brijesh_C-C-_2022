#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,n=7;            OUTPUT :-      *
	clrscr();                               * *
	for(i=1;i<=n;i++)                      * * * 
	{                                     * * * * 
	   for(j=n-1;j>=i;j--)               * * * * *
	   {                                * * * * * *
	     printf(" ");                  * * * * * * *   
	   }                                * * * * * *
	   for(k=1;k<=i;k++)                 * * * * *  
	   {                                  * * * *
	     printf("* ");                     * * *
	   }                                    * *
	   printf("\n");                         *
	}

	for(i=n-1;i>=1;i--)
	{
	   for(j=n-1;j>=i;j--)
	   {
	     printf(" ");
	   }
	   for(k=1;k<=i;k++)
	   {
	     printf("* ");
	   }
	   printf("\n");
	}
	getch();
}