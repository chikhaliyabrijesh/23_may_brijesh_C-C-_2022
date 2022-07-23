#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a=0,b=1,c,i;
    clrscr();
    printf("enter the number for fibonacci series : ");
    scanf("%d",&n);

    printf("\nthe fibonacci series is : %d %d ",a,b);

    for(i=1;i<=n;i++)
    {
       c=a+b;
       printf("%d ",c);
       a=b;
       b=c;
    }
    getch();
}