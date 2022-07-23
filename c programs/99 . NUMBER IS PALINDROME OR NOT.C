#include<stdio.h>
#include<conio.h>
void main()
{
   int n,c,r,s=0;

   clrscr();

   printf("enter a number : ");
   scanf("%d",&n);
   c=n;
   while(n>0)
   {
      r=n%10;
      s=r+(s*10);
      n=n/10;
   }
   if(c==s)
   {
      printf("\nthe number is palindrome number ");
   }
   else
   {
      printf("\nthe number is not palindrome number ");
   }
   getch();
}