#include<stdio.h>
#include<conio.h>
int matrix()
{
	int i,j,m[3][3];
	printf("\nenter the matrix element : ");
	for(i=0;i<3;i++)
	{
	   for(j=0;j<3;j++)
	   {
	      scanf("%d",&m[i][j]);
	   }
	}
	printf("\nthe matrix is :\n");
	for(i=0;i<3;i++)
	{
	   for(j=0;j<3;j++)
	   {
	      printf("%d ",m[i][j]);
	   }
	   printf("\n");
	}
	return 0;
}
void main()
{
	clrscr();
	matrix();
	getch();
}