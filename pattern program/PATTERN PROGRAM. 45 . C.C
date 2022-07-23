#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,k,n=5;
   clrscr();
   for(i=n;i>=1;i--)
   {
     for(j=n-1;j>=i;j--)
     {
       printf(" ");
     }
     for(k=1;k<=i;k++)
     {
       printf("%c ",k+64);
     }
     printf("\n");
   }
   getch();
}

PROGRAM WITH ASCCI CODE :-

OUTPUT :- A B C D E
           A B C D
            A B C
             A B
              A