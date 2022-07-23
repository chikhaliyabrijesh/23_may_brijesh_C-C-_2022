#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,*p,*q,temp;
	clrscr();
    p=&a;    q=&b;
    printf("enter two numbers : ");
    scanf("%d %d",&a,&b);
    printf("\nbefore swapping : %d %d",a,b);
    temp=*p;
    *p=*q;
    *q=temp;
    printf("\nafter swapping : %d %d",*p,*q);
    getch();
}