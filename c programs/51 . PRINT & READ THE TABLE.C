#include<stdio.h>
#include<conio.h>
void main()
{
	char fdata[100];
	int no,i,ans;
	FILE *fptr;
	clrscr();
	fptr=fopen("table.txt","w");
	printf("\nenter a number to print the table : ");
	scanf("%d",&no);
	for(i=1;i<=10;i++)
	{
		ans=no*i;
		fprintf(fptr,"\n%d * %d = %d",no,i,ans);
	}
	fclose(fptr);

	fptr=fopen("table.txt","r");
	for(i=1;i<=10;i++)
	{
		fscanf(fptr,"\n%s * %s = %s",fdata);
		printf("\n%s * %s = %s",fdata);
	}
	fclose(fptr);
	getch();
}