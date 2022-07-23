#include<constream.h>
class base
{
	public:
	virtual void function()=0;
	void getdata()
	{
		cout<<"\nthis is base class";
	}
};
class derived : public base
{
	public:
	void function()
	{
		cout<<"\nthis is drived class";
	}
};
void main()
{
	clrscr();
	derived d1;
	d1.getdata();
	d1.function();
	getch();
}