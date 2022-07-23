#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
       char s1[100];
       char s2[50];
       clrscr();
       printf("enterthe first string : ");
       scanf("%s",&s1);
       printf("\nenter the second string : ");
       scanf("%s",&s2);
       strcat(s1,s2);
       printf("\nconcat string is : %s",s1);
       getch();
}