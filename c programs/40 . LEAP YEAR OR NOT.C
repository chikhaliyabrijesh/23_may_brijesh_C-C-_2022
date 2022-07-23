#include<stdio.h>
#include<conio.h>
void main()
{
   long int year;
   clrscr();
   printf("enter the year : ");
   scanf("%ld",&year);

   if(year%4==0)
   {
       printf("the year is leap year");
   }
   else
   {
       printf("the year is not leap year");
   }
getch();

}
