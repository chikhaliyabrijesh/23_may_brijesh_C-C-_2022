#include<stdio.h>
#include<conio.h>
void matrix(int i,int j,int m[3][3])
{

	printf("\nthe matrix is :\n");
	for(i=0;i<3;i++)
	{
	   for(j=0;j<3;j++)
	   {
	      printf("%d ",m[i][j]);
	   }
	   printf("\n");
	}

}
void main()
{
	int i,j,m[3][3];
	clrscr();
	printf("\nenter the matrix element : ");
	for(i=0;i<3;i++)
	{
	   for(j=0;j<3;j++)
	   {
	      scanf("%d",&m[i][j]);
	   }
	}
	matrix(i,j,m);
	getch();
}