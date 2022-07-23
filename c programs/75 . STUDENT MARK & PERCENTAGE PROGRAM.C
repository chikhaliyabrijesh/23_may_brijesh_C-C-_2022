#include<stdio.h>
#include<conio.h>
void main()
{
   int g,m,e,s,h;
   int t;
   float p;
   clrscr();
   printf("enter the mark of gujarati = ");
   scanf("%d",&g);

   printf("\nenter the mark of maths = ");
   scanf("%d",&m);

   printf("\nenter the mark of english = ");
   scanf("%d",&e);

   printf("\nenter the mark of science = ");
   scanf("%d",&s);

   printf("\nenter the mark of hindi = ");
   scanf("%d",&h);

   t=g+m+e+s+h;
   printf("\nthe total of the marks of subjects = %ld",t);

   p=t/5;
   printf("\nthe percentage = %f",p);

   if(p>75)
   {
      printf("\ndistinction");
   }
   if(p>60 && p<=75)
   {
      printf("\nfirst class");
   }
   if(p>50 && p<=60)
   {
      printf("\nsecond class");
   }
   if(p>35 && p<=50)
   {
      printf("\npass class");
   }
   if(p<35)
   {
      printf("\nfail");
   }
getch();
}
















