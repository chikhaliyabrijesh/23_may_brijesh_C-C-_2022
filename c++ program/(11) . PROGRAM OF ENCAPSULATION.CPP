#include<constream.h>
class rectangle
{
	private:

	int length;
	int width;

	public:

	rectangle(int len,int wid)
	{
		length=len;
		width=wid;
	}
	int getarea()
	{
		return length*width;
	}
};
void main()
{
	clrscr();
	rectangle rect(8,6);
	cout<<"area of rectangle = "<<rect.getarea();
	getch();
}
