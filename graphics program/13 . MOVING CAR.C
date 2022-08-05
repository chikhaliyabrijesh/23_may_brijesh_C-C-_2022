#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int gd = DETECT,gm;
	int i,j=0;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	getch();
	for(i=0;i<=420;i=i+10,j++)
	{
	   rectangle(50+i,275,150+i,400);
	   rectangle(150+i,350,200+i,400);
	   circle(75+i,410,10);
	   circle(175+i,410,10);
	   setcolor(j);
	   delay(100);
	   if(i==420)
	   {
	      break;
	   }
	   if(j==15)
	   {
	      j=2;
	   }
	   cleardevice();
	}
	getch();
	closegraph();
}