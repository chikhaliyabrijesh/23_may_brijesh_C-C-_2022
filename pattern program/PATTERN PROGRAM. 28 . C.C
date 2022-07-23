#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n=5,k;
	clrscr();
	for(i=1;i<=n;i++)
	{
	  for(j=n-1;j>=i;j--)
	  {
	    printf(" ");
	  }
	  for(k=1;k<=i;k++)
	  {
	    printf("%d",i);
	  }
	  printf("\n");
	}
	getch();
}

OUTPUT :-    1
            22
           333
          4444
         55555 