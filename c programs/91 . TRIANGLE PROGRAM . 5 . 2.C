#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,s;
int n=5;
clrscr();
for(j=1;j<=n;j++)
{
  for(s=1;s<=n-j;s++)
  printf(" ");

  for(i=1;i<=j*2-1;i++)
  {
	printf("*");
  }
  printf("\n");
}
getch();
}

OUTPUT :-

    *
   ***
  *****
 *******
*********
