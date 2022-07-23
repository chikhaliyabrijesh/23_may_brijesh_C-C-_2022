#include<stdio.h>
#include<conio.h>
void main()
{
    int *p,*q,a,b,c;

    clrscr();

    printf("enter the first number : ");
    scanf("%d",&a);

    printf("\nenter the second number : ");
    scanf("%d",&b);

    p=&a;
    q=&b;

    c = *p + *q;

    printf("addition of two numbers = %d ",c);

    getch();
}
