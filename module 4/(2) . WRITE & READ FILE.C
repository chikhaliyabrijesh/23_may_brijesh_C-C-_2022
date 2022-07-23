#include<stdio.h>
#include<conio.h>
void main()
{
	char nm[20],fdata[20];
	FILE *fptr;
	clrscr();
	fptr=fopen("world.txt","w");
	printf("enter your name : ");
	scanf("%s",&nm);
	fprintf(fptr,"%s",nm);
	fclose(fptr);

	fptr=fopen("world.txt","r");
	fscanf(fptr,"\n%s",fdata);
	printf("\n%s",fdata);
	fclose(fptr);
	getch();
}