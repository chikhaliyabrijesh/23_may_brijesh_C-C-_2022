#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=3;i++)                                 OUTPUT :-  AAA     AAA 
	{                                                           AAAAA   AAAAA
	   for(j=1;j<=15;j++)                                      AAAAAAA AAAAAAA
	   {                                                       BBBBBBBBBBBBBBB
	      if(j>=4-i && j<=4+i || j>=12-i && j<=12+i )           BBBBBBBBBBBBB  
	      {                                                      BBBBBBBBBBB
		 printf("A");                                         BBBBBBBBB
	      }                                                        BBBBBBB
	      else                                                      BBBBB
	      {                                                          BBB
		 printf(" ");                                             B
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
		 printf("B");
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