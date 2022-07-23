#include<stdio.h>
#include<conio.h>
void main()
{
    int a=10,b=20,*p,*q,temp;
	clrscr();
    p=&a;    q=&b;

    printf("%d %d",a,b);
    temp=*p;
    *p=*q;
    *q=temp;
    printf("\n%d %d",*p,*q);
    getch();
}