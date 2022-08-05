
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int gd = DETECT,gm;
	int i,x,y;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	while(! kbhit())
	{
	for(i=1;i<=500;i++)
	{
	   x = rand()%getmaxx();
	   y = rand()%getmaxy();
	   putpixel(x,y,15);
	}
	delay(1000);
	cleardevice();
	}
	getch();
	closegraph();
}