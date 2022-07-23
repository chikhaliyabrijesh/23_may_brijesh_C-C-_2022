#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
	  for(j=5;j>=i;j--)
	  {
	    printf("%d ",j);
	  }
	  printf("\n");
	}
	getch();
}

OUTPUT :- 5 4 3 2 1
          5 4 3 2
          5 4 3
          5 4
          5