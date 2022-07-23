#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
       char s[20];
       int i;
       clrscr();
       printf("enter the string : ");
       scanf("%s",&s);
       i=strlen(s);
       printf("\nthe length of string is : %d",i);
       getch();
}