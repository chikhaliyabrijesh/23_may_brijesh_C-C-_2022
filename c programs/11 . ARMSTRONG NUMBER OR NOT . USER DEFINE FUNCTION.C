#include<stdio.h>
#include<conio.h>
void armstrong(int n)
{
   int c,r,arm=0;
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

}
void main()
{
   int n;
   clrscr();
   printf("enter a number : ");
   scanf("%d",&n);
   armstrong(n);
   getch();
}