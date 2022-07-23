#include<stdio.h>
#include<conio.h>
void main()
{

	char nm[20],fdata[20];
	int no,i,ans;
	clrscr();
	FILE *fptr;
	fptr=fopen("TABLE.txt","w");
	printf("enter your name : ");
	scanf("%s",&nm);
	printf("\nenter a number for printing a table : ");
	scanf("%d",&no);
	fprintf(fptr,"\n%s",nm);
	for(i=1;i<=10;i++)
	{

		ans=no*i;
		fprintf(fptr,"\n%d * %d = %d",no,i,ans);
	}
	fclose(fptr);
	fptr=fopen("TABLE.txt","r");
	fscanf(fptr,"%s",fdata);
	printf("\n%s",fdata);
	for(i=1;i<=10;i++)
	{
		ans=no*i;
		printf("\n%d * %d = %d",no,i,ans);
	}
	fclose(fptr);
	getch();

}