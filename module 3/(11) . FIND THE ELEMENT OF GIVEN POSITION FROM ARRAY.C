#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],n,element,i;

	clrscr();

	printf("\n enter the size of array [1-100] : ");
	scanf("%d",&n);

	printf("\n enter the array elements : ");
	for(i=0;i<n;i++)
	{
	       scanf("%d",&a[i]);
	}

	printf("\n enter element to find : ");
	scanf("%d",&element);

	for(i=0;i<n;i++)
	{
	   if(a[i]==element)
	   {
	       printf("\n the element is found in the position : %d ",i+1);
	   }

	}

	getch();
}









