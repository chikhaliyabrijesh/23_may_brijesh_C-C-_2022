#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s1[20],s2[20],*a,*b;

	clrscr();

	printf("enter the first string : ");
	scanf("%s",&s1);
	printf("\nenter the second string : ");
	scanf("%s",&s2);

	a=s1;
	while(*a != '\0')
	{
	    a++;
	}

	b=s2;
	while(*b != '\0')
	{
	    *a = *b;
	    a++;
	    b++;
	}
	*a = '\0';

	printf("\nafter concat of string = %s",s1);
	getch();
}
