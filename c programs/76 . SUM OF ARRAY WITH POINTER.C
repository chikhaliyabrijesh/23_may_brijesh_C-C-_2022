#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,*p,sum=0;
	clrscr();
	printf("enter a number : ");
	for(i=0;i<10;i++)
	{
	    scanf("%d",&a[i]);
	}
	p=&a[0];
	for(i=0;i<10;i++)
	sum=sum + *(p+i);
	{
	    printf("\nsum of array element is : %d",sum);
	}
	getch();
}
