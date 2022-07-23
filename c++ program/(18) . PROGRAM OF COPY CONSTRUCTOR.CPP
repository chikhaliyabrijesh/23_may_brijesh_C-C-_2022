#include<constream.h>
class demo
{
	private:
	int num1,num2;
	public:
	demo(int n1,int n2)
	{
		num1=n1;
		num2=n2;
	}
	demo(demo &n)
	{
	       num1=n.num1;
	       num2=n.num2;
	}
	void display()
	{
		cout<<"num1 = "<<num1<<endl;
		cout<<"num2 = "<<num2<<endl;
	}
};
void main()
{
	clrscr();
	demo obj1(10,20);
	demo obj2 = obj1;
	obj1.display();
	obj2.display();
	getch();
}