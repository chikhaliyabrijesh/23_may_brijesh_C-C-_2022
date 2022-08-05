#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main()
{
	int gd = DETECT,gm,err;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	rectangle(50,50,400,400);
	getch();
	closegraph();
}