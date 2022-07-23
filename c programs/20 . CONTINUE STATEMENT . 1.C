#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
for(i=1;i<=10;i++)
{
	if(i==7)
	continue;
	printf("%d\n",i);
}
getch();
}

OUTPUT :-

1
2
3
4
5
6
8
9
10