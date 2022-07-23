#include<stdio.h>          OUTPUT :- *******
#include<conio.h>                    *
void main()                          *  
{                                    *******
	int i,j,n=7;                 *
	clrscr();                    *  
	for(i=1;i<=n;i++)            *
	{
	   for(j=1;j<=n;j++)
	   {
	     if((i==1 || j==1) || (i==4 && j<=7))
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