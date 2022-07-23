#include<stdio.h>
#include<conio.h>
void main()
{                       OUTPUT :-  * * * * *     
   int i,j,k;                       * * * *    
   int n=5;                          * * *     
   clrscr();                          * *      
                                       *     
   for(i=n;i>=1;i--)
   {
     for(j=n-1;j>=i;j--)
     {
	printf(" ");
     }
     for(k=1;k<=i;k++)
     {
	printf("* ");
     }
     printf("\n");
   }
getch();
}


