#include<constream.h>
class a
{
	private:
	int a,b;
	public:
	a(int x,int y)
	{
		a=x;
		b=y;
	}
	void show()
	{
		cout<<"a = "<<a<<endl;
		cout<<"b = "<<b<<endl;
	}
};
void main()
{
	clrscr();
	a obj(10,20);
	obj.show();
	getch();
}