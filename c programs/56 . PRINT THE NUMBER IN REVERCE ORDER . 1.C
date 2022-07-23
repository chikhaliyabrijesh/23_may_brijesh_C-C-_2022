#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r;
	clrscr();
	printf("\nenter a number for reverce order : ");
	scanf("%d",&n);
	printf("\nthe reverce number is : ");

	while(n>0)
	{
		r=n%10;
		printf("%d ",r);
		n=n/10;
	}

	getch();
}