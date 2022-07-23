#include<stdio.h>
#include<conio.h>
void ascend(int *p)
{
	int i,j,t;
	for(i=0;i<5;i++)
	{
	  for(j=i+1;j<5;j++)
	  {
	     if(*(p+i) > *(p+j))
	     {
		t = *(p+i);
		*(p+i) = *(p+j);
		*(p+j) = t;
	     }
	  }
	}
}

void descend(int *p)
{
	int i,j,t;
	for(i=0;i<5;i++)
	{
	  for(j=i+1;j<5;j++)
	  {
	     if(*(p+i) < *(p+j))
	     {
		t = *(p+i);
		*(p+i) = *(p+j);
		*(p+j) = t;
	     }
	  }
	}
}
void main()
{
	int a[5],i,*p;

	clrscr();

	p = &a[0];
	printf("enter a number : ");
	for(i=0;i<5;i++)
	{
	   scanf("%d",p+i);
	}
	ascend( &a[0] );
	printf("\nthe nummber in ascending order is : ");
	for(i=0;i<5;i++)
	{
	   printf("%d ",*(p+i));
	}

	descend( &a[0] );
	printf("\nthe nummber in descending order is : ");
	for(i=0;i<5;i++)
	{
	   printf("%d ",*(p+i));
	}
	getch();

}









