#include<stdio.h>
#include<conio.h>
void main()
{
	int i,no,ans;

	clrscr();

	printf("enter a number for the table : ");
	scanf("%d",&no);

	i=1;
	do
	{
	     ans = no * i;
	     printf("\n%d * %d = %d ",no,i,ans);
	     i++;
	}
	while(i<=10);
	getch();
}