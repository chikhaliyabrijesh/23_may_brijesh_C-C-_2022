#include<stdio.h>
#include<conio.h>
void main()
{
	char i,j;
	clrscr();
	for(i=0;i<=4;i++)
	{
	  for(j=4;j>=i;j--)
	  {
	    printf("%c ",i+65);
	  }
	  printf("\n");
	}
	getch();
}

PROGRAM WITH ASCCI CODE :-

OUTPUT :- A A A A A
          B B B B 
          C C C 
          D D
          E 