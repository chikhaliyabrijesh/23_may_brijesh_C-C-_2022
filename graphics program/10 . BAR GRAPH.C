#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int gd = DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	setfillstyle(SOLID_FILL,RED);
	bar(100,50,150,150);
	setfillstyle(LINE_FILL,YELLOW);
	bar3d(200,50,250,150,11,2);
	getch();
	closegraph();
}