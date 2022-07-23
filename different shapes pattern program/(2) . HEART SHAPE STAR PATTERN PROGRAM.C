#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;                                             OUTPUT :-   ***     ***
	clrscr();                                                       *****   *****         
	for(i=1;i<=3;i++)                                              ******* *******
	{                                                              ***************     
	   for(j=1;j<=15;j++)                                           *************
	   {                                                             ***********
	      if(j>=4-i && j<=4+i || j>=12-i && j<=12+i )                 *********
	      {                                                            *******
		 printf("*");                                               *****
	      }                                                              ***
	      else                                                            *
	      {
		 printf(" ");
	      }
	   }
	   printf("\n");
	}

	for(i=1;i<=8;i++)
	{
	   for(j=1;j<=15;j++)
	   {
	      if(j>=i && j<=16-i)
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