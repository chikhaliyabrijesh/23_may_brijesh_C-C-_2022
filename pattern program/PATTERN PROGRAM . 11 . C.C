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
      printf("%c ",j);
    }
    printf("\n");
   }
   getch();
}

OUTPUT :- E D C B A
          E D C B A
          E D C B A
          E D C B A
          E D C B A