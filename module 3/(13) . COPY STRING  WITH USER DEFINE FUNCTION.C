#include<stdio.h>
#include<conio.h>
#include<string.h>
void strcpy(char str1[30],char str2[30])
{
    int i;
    for(i=0;str1[i]!='\0';i++)
    {
       str1[i]=str2[i];
    }
    str1[i]='\0';
}
void main()
{
    char str1[30],str2[30];
    int i;

    clrscr();

    printf("\nenter the string : ");
    scanf("%s",&str1);

    strcpy(str2,str1);

    printf("\nafter copy of string is : %s ",str2);

    getch();
}