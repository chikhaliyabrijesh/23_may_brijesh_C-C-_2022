#include<constream.h>
class base
{
	public:
	base(int a)
	{
		cout<<"\nvalue of a = "<<a;
	}
};
class derived : public base
{
	public:
	derived(int a,int x) : base(a)
	{

		cout<<"\nvalue of x = "<<x;
	}
};
void main()
{
	clrscr();
	derived d1(10,20);
	getch();
}

