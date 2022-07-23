#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str1[50],str2[50],*p,*q;

    clrscr();

    printf("enter the first string : ");
    scanf("%s",&str1);

    printf("\nenter the second string : ");
    scanf("%s",&str2);

    p=str1;
    q=str2;

    while(*p != '\0')
    {
	p++;
    }

    while(*q != '\0')
    {
	*p=*q;
	q++;
	p++;
    }
    *p = '\0';

    printf("after the concatenation of two string : %s ",str1);

    getch();
}




