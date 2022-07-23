#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
       char s1[20],s2[20];
       clrscr();
       printf("enter the first string : ");
       scanf("%s",&s1);
       strcpy(s2,s1);
       printf("\nafter copy of string2 : %s",s2);
       getch();
}