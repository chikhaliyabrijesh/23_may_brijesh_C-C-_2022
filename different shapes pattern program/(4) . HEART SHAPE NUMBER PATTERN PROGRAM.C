#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();                                           OUTPUT :-   111     111
	for(i=1;i<=3;i++)                                              22222   22222
	{                                                             3333333 3333333            
	   for(j=1;j<=15;j++)                                         111111111111111
	   {                                                           2222222222222
	      if(j>=4-i && j<=4+i || j>=12-i && j<=12+i )               33333333333
	      {                                                          444444444 
		 printf("%d",i);                                          5555555
	      }                                                            66666
	      else                                                          777 
	      {                                                              8   
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
		 printf("%d",i);
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