#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main()
{
	int gd = DETECT,gm,err;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	line(100,100,300,100);
	outtextxy(100,80,"brijesh chikhaliya");
	getch();
	closegraph();
}