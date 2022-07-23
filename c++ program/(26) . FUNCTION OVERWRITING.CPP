#include<constream.h>
class number1
{
	public:
	void add(int a = 10)
	{
		cout<<"\nvalue of a = "<<a;
	}
}n1;
class number2
{
	public:
	void add(int a = 100)
	{
		cout<<"\nvalue of a = "<<a;
	}

}n2;
void main()
{
	clrscr();
	n1.add();
	n2.add();
	getch();
}

