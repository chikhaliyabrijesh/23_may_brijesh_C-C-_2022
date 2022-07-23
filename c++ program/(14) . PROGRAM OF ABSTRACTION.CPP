#include<constream.h>
class abstraction
{
	private:

	int a,b;

	public:

	void set(int x,int y)
	{
		a=x;
		b=y;
	}
	void display()
	{
		cout<<"a = "<<a<<endl;
		cout<<"b = "<<b<<endl;
	}
};
void main()
{
	clrscr();
	abstraction ab;
	ab.set(10,20);
	ab.display();
	getch();
}
