#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int gd = DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	setfillstyle(3,3);
	setcolor(4);
	fillellipse(100,100,50,25);
	circle(200,200,50);
	floodfill(200,200,4);
	getch();
	closegraph();
}