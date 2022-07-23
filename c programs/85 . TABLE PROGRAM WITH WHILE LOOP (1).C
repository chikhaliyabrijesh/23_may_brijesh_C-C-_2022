#include<stdio.h>
#include<conio.h>
void main()
{
	int i,no,ans;

	clrscr();

	printf("enter a number for the table : ");
	scanf("%d",&no);

	i=1;
	while(i<=10)
	{
	     ans = no * i;
	     printf("\n%d * %d = %d ",no,i,ans);
	     i++;
	}
	getch();
}