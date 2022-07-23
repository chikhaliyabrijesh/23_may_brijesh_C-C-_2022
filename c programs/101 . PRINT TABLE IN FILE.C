#include<stdio.h>
#include<conio.h>
void main()
{

	int no,i,ans;

	clrscr();

	FILE *fptr;
	fptr=fopen("table.txt","w");

	printf("enter a number for printing the table : ");
	scanf("%d",&no);
	for(i=1;i<=10;i++)
	{
	     ans=no*i;
	     fprintf(fptr,"\n%d * %d = %d",no,i,ans);
	}
	fclose(fptr);

	getch();
}