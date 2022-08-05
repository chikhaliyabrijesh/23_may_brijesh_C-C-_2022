#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main()
{
	int gd = DETECT,gm,err;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	ellipse(100,100,90,180,100,50);
	fillellipse(100,200,100,50);
	getch();
	closegraph();
}