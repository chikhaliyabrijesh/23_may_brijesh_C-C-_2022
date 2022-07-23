#include<stdio.h>
#include<conio.h>
int factorial(int n)
{
   int i,f=1;
   for(i=1;i<=n;i++)
   {
      f=f*i;
   }
   return(f);
}
void main()
{
  int n,k;

  clrscr();

  printf("\nenter the number for fectorial : ");
  scanf("%d",&n);

  k=factorial(n);

  printf("\nthe factorial of given number = %d",k);

  getch();
}











