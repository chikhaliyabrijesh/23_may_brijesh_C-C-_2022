#include<stdio.h>
#include<conio.h>
void main()
{
	int j,k,n=4;
	char i;
	clrscr();
	for(i=0;i<=n;i++)
	{
	  for(j=n-1;j>=i;j--)
	  {
	    printf(" ");
	  }
	  for(k=0;k<=i;k++)
	  {
	    printf("%c ",i+65);
	  }
	  printf("\n");
	}
	getch();
}

PROGRAM WITH ASCCI CODE :-

OUTPUT :-   A
           B B 
          C C C
         D D D D
        E E E E E