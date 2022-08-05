#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main()
{

	int gd = DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	outtext("raman");
	outtextxy(250,200,"brijesh");
	getch();
	closegraph();
}