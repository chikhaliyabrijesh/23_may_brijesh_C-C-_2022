#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],i,j,temp,n;
    clrscr();
    printf("enter the size of array : ");
    scanf("%d",&n);
    printf("\nenter the elements : ");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
	  if(a[j]<a[i])
	  {
	     temp=a[i];
	     a[i]=a[j];
	     a[j]=temp;
	  }
       }
    }
    for(i=0;i<n;i++)
    {

       printf("%d ",a[i]);
    }
getch();
return 0;

}