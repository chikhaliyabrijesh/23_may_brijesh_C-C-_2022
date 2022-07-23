#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
	  for(j=1;j<=i;j++)
	  {
	    printf("%d ",j);
	  }
	  printf("\n");
	}
	getch();
}

OUTPUT :- 1
          1 2
          1 2 3
          1 2 3 4
          1 2 3 4 5