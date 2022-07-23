#include<stdio.h>
#include<conio.h>
void main()
{
int a=2;
int b=5;
clrscr();
printf("enterthe value of a = %d",a);
printf("\nenterthe value of b = %d",b);
b%=a;
printf("\nthe answer = %d",b);
getch();
}