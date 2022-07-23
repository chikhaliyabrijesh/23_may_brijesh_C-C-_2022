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
       printf("%d ",k);
     }
     printf("\n");
   }
   getch();
}

OUTPUT :- 1 2 3 4 5
           1 2 3 4
            1 2 3
             1 2
              1