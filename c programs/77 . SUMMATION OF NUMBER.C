#include<stdio.h>
#include<conio.h>
void main()
{
long int n,r,sum=0;
clrscr();
printf("enter any number : ");
scanf("%ld",&n);
while(n != 0)
{
r=n%10;
sum=sum+r;
n=n/10;
}
printf("sum of number = %ld",sum);
getch();
}