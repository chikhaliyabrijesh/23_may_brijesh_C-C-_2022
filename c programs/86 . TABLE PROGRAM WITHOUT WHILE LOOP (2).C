#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i=1,ans;

	clrscr();

	printf("enter a number to print the table : ");
	scanf("%d",&n);

	table :
	if(i<=10)
	{
	     ans = n * i;
	     printf("\n%d * %d = %d ",n,i,ans);
	     i++;
	     goto table;
	}
	getch();
}