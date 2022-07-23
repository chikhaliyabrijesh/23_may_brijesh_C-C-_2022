#include<stdio.h>
#include<conio.h>
void main()
{
	char fdata[20];
	FILE *fptr;
	clrscr();
	fptr=fopen("world.txt","r");
	fscanf(fptr,"\n%s",fdata);
	printf("\n%s",fdata);
	fclose(fptr);
	getch();
}