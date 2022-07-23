#include<stdio.h>
#include<conio.h>
void main()
{
      int a,b,c,ch;

      clrscr();

      printf("enter two number :");
      scanf("%d%d",&a,&b);
      printf("\n1 = add");
      printf("\n2 = sub");
      printf("\n3 = mul");
      printf("\n4 = div");
      printf("\nselect option : ");
      scanf("%d",&ch);

      switch(ch)
      {
	     case 1 : c=a+b;
		      printf("add = %d",c);
		      break;


	     case 2 : c=a-b;
		      printf("sub = %d",c);
		      break;

	     case 3 : c=a*b;
		      printf("mul = %d",c);
		      break;

	     case 4 : c=a/b;
		      printf("div = %d",c);
		      break;

	     default: printf("invalid operation");
		      break;

       }
       getch();

}

OUTPUT :-

ENTER TWO NUMBERS : 10
2

1=ADD
2=SUB
3=MUL
4=DIV

SELECT OPTION : 1
ADD=12