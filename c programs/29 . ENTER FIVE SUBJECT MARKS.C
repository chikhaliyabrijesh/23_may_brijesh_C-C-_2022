#include<stdio.h>
#include<conio.h>
void main()
{
     int g,m,e,s,h,total;
     float pr;

     clrscr();

     printf("enter the marks of 5 subjects : ");
     printf("\n...............................");

     printf("\nenter the marks of gujarati : ");
     scanf("%d",&g);
     printf("\nenter the marks of maths : ");
     scanf("%d",&m);
     printf("\nenter the marks of english : ");
     scanf("%d",&e);
     printf("\nenter the marks of science : ");
     scanf("%d",&s);
     printf("\nenter the marks of hindi : ");
     scanf("%d",&h);

     total=g+m+e+s+h;
     printf("\nthe total marks of 5 subject is :  %d",total);


     pr=total/5.0;
     printf("\nthe percentage is = %f %",pr);

     if(pr>75)
     {
	printf("\ndistinction");
     }

     else if(pr>60 && pr<=75)
     {
	printf("\nfirst class");
     }

     else if(pr>50 && pr<=60)
     {
	printf("\nsecond class");
     }

     else if(pr>35 && pr<=50)
     {
	printf("\npass class");
     }

     else
     {
	printf("\nfail");
     }

     getch();

}












