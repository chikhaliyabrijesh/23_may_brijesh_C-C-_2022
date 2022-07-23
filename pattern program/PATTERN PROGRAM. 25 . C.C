#include<stdio.h>
#include<conio.h>
void main()
{
	char i,j;
	clrscr();
	for(i=4;i>=0;i--)
	{
	  for(j=0;j<=i;j++)
	  {
	    printf("%c ",j+65);
	  }
	  printf("\n");
	}
	getch();
}

PROGRAM WITH ASCCI CODE :-

OUTPUT :- A B C D E
          A B C D
          A B C
          A B
          A