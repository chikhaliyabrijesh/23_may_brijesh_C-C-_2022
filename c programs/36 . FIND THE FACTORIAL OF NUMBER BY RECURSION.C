#include<stdio.h>
#include<conio.h>
int factorial(int);
int main()
{
int n,ans;
clrscr();
printf("enter the number : ");
scanf("%d",&n);
ans=factorial(n);
printf("factorial = %d",ans);
getch();
return 0;
}
int factorial(int n)
{
  int f;
  if(n==0)
  {
    return 1;
  }
  else
  {
    f=n*factorial(n-1);
    return (f);
  }
}