#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k=7;
	clrscr();
	for(i=1;i<=7;i++)
	{
	   k--;
	   for(j=1;j<=13;j++)
	   {
	      if(j<=7-k || j>=7+k)
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

OUTPUT :-  *           *
           **         **
           ***       ***
           ****     ****
           *****   *****
           ****** ******
           *************
           