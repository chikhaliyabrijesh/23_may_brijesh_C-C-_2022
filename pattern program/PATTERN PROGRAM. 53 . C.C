#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,k,n=4;
   clrscr();
   for(i=1;i<=n;i++)
   {
     for(j=n-1;j>=i;j--)
     {
       printf(" ");
     }
     for(k=1;k<=i*2-1;k++)
     {
       printf("%d",i);
     }
     printf("\n");
   }
   getch();
}

OUTPUT :-     1
             222
            33333
           4444444