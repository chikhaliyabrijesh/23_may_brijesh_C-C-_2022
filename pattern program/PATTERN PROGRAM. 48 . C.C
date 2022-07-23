#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,n=5;
   clrscr();
   for(i=1;i<=n;i++)
   {
     for(j=1;j<=n;j++)
     {
       if(i==j ||j==n-i+1)
       {
	 printf("*");
       }
       else
       {
	 printf(" ");
       }
     }
     printf("\n");
   }
   getch();
}

PROGRAM BY IF...ELSE...CONDITION :-

OUTPUT :- *   *
           * *
            *
           * *
          *   *             

             
