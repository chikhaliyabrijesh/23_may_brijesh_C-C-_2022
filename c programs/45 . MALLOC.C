#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int n,i;
	int *ptr;

	clrscr();

	printf("enter a length : ");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
	     printf("\nenter a number : ");
	     scanf("%d",&ptr[i]);
	}
	for(i=0;i<n;i++)
	{
	     printf("\nnumber[%d] = %d",i,ptr[i]);
	}
	getch();
}