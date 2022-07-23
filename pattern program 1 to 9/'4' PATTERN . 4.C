#include<stdio.h>                     OUTPUT :-     *
#include<conio.h>                                  ** 
void main()                                       * *
{                                                *  *
	int i,j,n=7;                            *******    
	clrscr();                                   *
	for(i=1;i<=n;i++)                           * 
	{
	   for(j=1;j<=n;j++)
	   {
	     if((i==5 || j==5) || (i+j==6 && i+j<=6))
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