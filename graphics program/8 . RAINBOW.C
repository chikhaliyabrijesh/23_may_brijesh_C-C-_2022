#include<stdio.h>
#include<graphics>
#include<conio.h>
#include<dos.h>
void main()
{
	int gd = DETECT,gm;
	int x,y,r;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	x=getmaxx()/2;
	y=getmaxy()/2;
	for(r=20;r<200;r++)
	{
	   delay(100);
	   setcolor(r/10);
	   arc(x,y,0,180,r);
	}
	getch();
	closegraph();
}
