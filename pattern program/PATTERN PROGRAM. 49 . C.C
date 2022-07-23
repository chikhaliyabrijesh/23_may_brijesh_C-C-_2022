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
	 printf("X ");
       }
       else
       {
	 printf("o ");
       }
     }
     printf("\n");
   }
   getch();
}

PROGRAM BY USING IF...ELSE...CONDITION :-

OUTPUT :-  X O O O X
           O X 0 X O
           O O X O O 
           O X O X O
           X O O O X

