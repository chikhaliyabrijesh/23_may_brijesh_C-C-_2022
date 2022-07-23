#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
       char s[20];
       clrscr();
       printf("enter the string in lower case : ");
       scanf("%s",&s);
       strupr(s);
       printf("\nstring in upper case is : %s",s);
       getch();
}