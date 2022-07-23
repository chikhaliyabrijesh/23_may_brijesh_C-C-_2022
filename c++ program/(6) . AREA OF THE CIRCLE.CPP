#include<constream.h>
#define pi 3.14
void main()
{
	int r;
	float area;
	clrscr();
	cout<<"enter a radious : ";
	cin>>r;
	area = 2*pi*r;
	cout<<"area ofthe circle is : "<<area;
	getch();
}