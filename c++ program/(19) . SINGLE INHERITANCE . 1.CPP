#include<constream.h>
class a
{
	public:
	void data()
	{
		cout<<"this is parent class.";
	}
};
class b : public a
{
	public:
	void info()
	{
		cout<<"\nthis is child class.";
	}
}b1;
void main()
{
	clrscr();
	b1.data();
	b1.info();
	getch();
}
