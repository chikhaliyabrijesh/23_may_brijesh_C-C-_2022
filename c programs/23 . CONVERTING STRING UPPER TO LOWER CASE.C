#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
       char s[20];
       clrscr();
       printf("enter the string in upper case : ");
       scanf("%s",&s);
       strlwr(s);
       printf("\nstring in lower case is : %s",s);
       getch();
}