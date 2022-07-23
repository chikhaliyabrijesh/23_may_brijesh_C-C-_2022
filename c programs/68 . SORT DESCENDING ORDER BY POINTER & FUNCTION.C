#include<stdio.h>
#include<conio.h>
void sort(int *p)
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
   int a[5],i,*x;

   clrscr();

   x=&a[0];
   printf("enter the number : ");
   for(i=0;i<5;i++)
   {
       scanf("%d",x+i);
   }
   sort( &a[0] );
   printf("\nthe number in descending order is : ");
   for(i=0;i<5;i++)
   {
       printf("%d ",*(x+i));
   }
   getch();
}




