#include<stdio.h>
#include<conio.h>
void main()
{
	int n,f=1,i;
	clrscr();
	printf("\nenter the number to find a factorial : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("\nthe factorial of given number is : %d ",f);
	getch();
}

