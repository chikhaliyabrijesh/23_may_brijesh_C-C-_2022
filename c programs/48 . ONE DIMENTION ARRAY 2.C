#include<stdio.h>
#include<conio.h>
void main()
{
	int ary[5],i;
	clrscr();
	printf("enter the five numbers : ");
	for(i=0;i<5;i++)
	{
	    scanf("%d",&ary[i]);
	}
	for(i=0;i<5;i++)
	{
	    printf("\n%d",ary[i]);
	}
getch();
}

OUTPUT :- 12 23 34 45 56

12
23
34
45
56