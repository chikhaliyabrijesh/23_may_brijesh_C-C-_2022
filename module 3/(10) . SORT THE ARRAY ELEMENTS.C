#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,j,t,n;

	clrscr();

	printf("enter the size of array : ");
	scanf("%d",&n);

	printf("\nenter the array elements : ");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	  for(j=i+1;j<n;j++)
	  {
	     if(a[j] < a[i])
	     {
		 t=a[i];
		 a[i]=a[j];
		 a[j]=t;
	     }
	  }
	}
	printf("\nthe array elements in ascending order is : ");
	for(i=0;i<n;i++)
	{
	    printf("%d ",a[i]);
	}



	for(i=0;i<n;i++)
	{
	  for(j=i+1;j<n;j++)
	  {
	     if(a[j] > a[i])
	     {
		 t=a[i];
		 a[i]=a[j];
		 a[j]=t;
	     }
	  }
	}
	printf("\nthe array elements in descending order is : ");
	for(i=0;i<n;i++)
	{
	    printf("%d ",a[i]);
	}

	getch();
}









