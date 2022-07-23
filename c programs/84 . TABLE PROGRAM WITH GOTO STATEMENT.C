#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i=1;

	clrscr();

	printf("enter a number to print the table : ");
	scanf("%d",&n);

	table :
	if(i<=10)
	{
	     printf("\n%d * %d = %d ",n,i,n*i);
	     i++;
	     goto table;
	}
	getch();
}