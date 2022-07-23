#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
       char s[50];
       clrscr();
       printf("enter the string : ");
       scanf("%s",&s);
       strrev(s);
       printf("\nstring in reverse order : %s",s);
       getch();
}