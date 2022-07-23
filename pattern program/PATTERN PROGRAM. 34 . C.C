#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n=4;
	char k;
	clrscr();
	for(i=0;i<=n;i++)
	{
	  for(j=n-1;j>=i;j--)
	  {
	    printf(" ");
	  }
	  for(k=0;k<=i;k++)
	  {
	    printf("%c",k+65);
	  }
	  printf("\n");
	}
	getch();
}

PROGRAM WITH ASCCI CODE :-

OUTPUT :-  A
          AB
         ABC
        ABCD
       ABCDE