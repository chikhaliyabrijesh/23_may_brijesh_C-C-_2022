#include<stdio.h>
#include<conio.h>
void main()
{
      int i,j,max,mat[3][3];

      clrscr();

      printf("enter any matrix : ");
      for(i=0;i<3;i++)
      {
	for(j=0;j<3;j++)
	{
	   scanf("%d",&mat[i][j]);
	}
      }
      max=mat[0][0];
      for(i=0;i<3;i++)
      {
	for(j=0;j<3;j++)
	{
	  if(max<mat[i][j])
	  max=mat[i][j];
	}
      }

      printf("\nmaximum element in the matrix is : %d ",max);
      getch();
}










