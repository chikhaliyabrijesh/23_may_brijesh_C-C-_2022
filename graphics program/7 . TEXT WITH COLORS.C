#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main()
{
	int gd = DETECT,gm,i,x=50,y=50,c;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	c=getmaxcolor();
	for(i=0;i<=c;i++)
	{
		setcolor(i);
		outtextxy(x,y,"brijesh chikhaliya");
		y=y+20;
	}
	getch();
	closegraph();
}