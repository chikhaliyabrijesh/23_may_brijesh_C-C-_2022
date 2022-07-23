#include<stdio.h>
#include<conio.h>
void main()
{
	int ary[10],i,max=0;
	clrscr();
	printf("enter the ten array elements : ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&ary[i]);

	}
	for(i=0;i<10;i++)
	{
		if(max<ary[i])
		{
			max=ary[i];
		}
	}
	printf("maximum value is : %d",max);
	getch();
}
