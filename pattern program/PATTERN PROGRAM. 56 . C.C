#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,k,n=4,z=1;
   clrscr();
   for(i=1;i<=n;i++)
   {
     for(j=n-1;j>=i;j--)
     {
       printf(" ");
     }
     for(k=z;k>=1;k--)
     {
       printf("%d",k);
     }
     z+=2;
     printf("\n");
   }
   getch();
}

OUTPUT :-    1
            321
           54321
          7654321