#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,s1=4,s,n=1;
	clrscr();
	for(i=1;i<=4;i++)
	{
	    for(s=1;s<=s1;s++)
	    {
		printf(" ");
	    }
	    for(j=1;j<=i;j++)
	    {
		printf(" ");
		printf("%d",n);
		n++;
	    }
	    printf("\n");
	    s1--;
	}
	getch();
}
