#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
for(i=1;i<=20;i++)
{
	if(i%5==0)
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
6
7
8
9
11
12
13
14
16
17
18
19