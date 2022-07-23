#include<stdio.h>
#include<conio.h>
int pointer(int *ptr)
{
      printf("\nthe address of the number is : %d",ptr);
      ptr++;
      ptr++;
      ptr--;
      printf("\nthe address of the number is : %d",ptr);
}

void main()
{
      int a;
      clrscr();
      printf("enter a number : ");
      scanf("%d",&a);
      pointer(&a);
      getch();
}
