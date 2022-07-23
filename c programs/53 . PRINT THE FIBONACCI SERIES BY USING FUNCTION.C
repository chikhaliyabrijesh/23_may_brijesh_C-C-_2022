#include<stdio.h>
#include<conio.h>
void fibonacciseries(int n)
{
    int a=0,b=1,c,i;
    printf("%d %d ",a,b);
    for(i=1;i<=n;i++)
    {
	c=a+b;
	printf("%d ",c);
	a=b;
	b=c;
    }
}

void main()
{
    int n;

    clrscr();

    printf("\nenter a number to print the fibonacci series : ");
    scanf("%d",&n);

    printf("\nthe fibonacci series for given number is : \n ");
    fibonacciseries(n);

    getch();
}