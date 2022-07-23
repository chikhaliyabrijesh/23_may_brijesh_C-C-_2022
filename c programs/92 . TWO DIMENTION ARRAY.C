#include<stdio.h>
#include<conio.h>
void main()
{

clrscr();
int ary[3][3],i,j,no;
printf("enter the nine array numbers :");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		scanf("%d",&ary[i][j]);
	}
}
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d ,",ary[i][j]);
	}
	printf("\n");
}
getch();
}

OUTPUT :-

ENTER THE NINE ARRAY NUMBERS :
1
2
3
4
5
6
7
8
9
1, 2, 3,
4, 5, 6,
7, 8, 9,