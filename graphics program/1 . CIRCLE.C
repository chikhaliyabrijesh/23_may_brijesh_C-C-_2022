#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main()
{
	int gd = DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	circle(300,250,200);
	getch();
	closegraph();
}