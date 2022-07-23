#include<stdio.h>
#include<conio.h>
enum days{mon=1,tue=2,wed=3,thu=4,fri=5,sat=6,sun=7};
void main()
{
	enum days d;

	clrscr();

	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d",mon,tue,wed,thu,fri,sat,sun);

	getch();

}