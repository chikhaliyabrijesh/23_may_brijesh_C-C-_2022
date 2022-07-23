#include<stdio.h>
#include<conio.h>
void main()
{
   char i,j;
   clrscr();
   for(i='E';i>='A';i--)
   {
    for(j='E';j>='A';j--)
    {
      printf("%c ",i);
    }
    printf("\n");
   }
   getch();
}

OUTPUT :- E E E E E
          D D D D D
          C C C C C
          B B B B B
          A A A A A