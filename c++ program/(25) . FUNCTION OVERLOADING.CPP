#include<constream.h>
class number
{
	public:
	void add(int a)
	{
		cout<<"\nthe number is : "<<a;
	}
	void add(int a,int b)
	{
		cout<<"\nvalue of a = "<<a;
		cout<<"\nvalue of b = "<<b;
	}
}a1;
void main()
{
	clrscr();
	a1.add(10);
	a1.add(20,30);
	getch();
}
