#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main()
{
	int gd = DETECT,gm,err;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	ellipse(200,200,0,360,100,50);
	getch();
	closegraph();
}