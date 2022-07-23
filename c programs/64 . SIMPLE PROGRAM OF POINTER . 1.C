#include<stdio.h>
#include<conio.h>
void main()
{
      int a,*p;

      clrscr();

      printf("enter a number : ");
      scanf("%d",&a);

      p=&a;

      printf("\nthe address of the number is : %d",p);
      p++;
      p--;

      printf("\nthe address of the number is : %d",p);

      getch();
}
