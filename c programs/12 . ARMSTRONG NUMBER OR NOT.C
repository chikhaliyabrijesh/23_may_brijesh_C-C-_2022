#include<stdio.h>
#include<conio.h>
void main()
{
   int n,c,r,arm=0;
   clrscr();
   printf("enter a number : ");
   scanf("%d",&n);
   c=n;
   while(n>0)
   {
	r=n%10;
	arm=(r*r*r)+arm;
	n=n/10;
   }
   if(c==arm)
   {
	printf("\nthe number is an armstrong number.");
   }
   else
   {
	printf("\nthe number is not an armstrong number.");
   }
   getch();
}