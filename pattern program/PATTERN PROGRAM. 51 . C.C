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
       if(i==1 || i==n || j==1 || j==n)
       {
	 printf("x ");
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

OUTPUT :- X X X X X
          X O O O X
          X O O O X
          X O O O X
          X X X X X