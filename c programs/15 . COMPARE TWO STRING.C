#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
       char s1[20],s2[20];
       clrscr();
       printf("enter the first string : ");
       scanf("%s",&s1);
       printf("enter the second string : ");
       scanf("%s",&s2);
       if(strcmp(s1,s2)==0)
       {
	   printf("\nboth string are equal");
       }
       else
       {
	   printf("\nboth string are not equal");
       }
       getch();
}