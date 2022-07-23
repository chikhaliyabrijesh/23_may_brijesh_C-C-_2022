#include<constream.h>
class a
{
	int a,b;
	public:
	void show()
	{
		cout<<"enter a values : ";
		cin>>a>>b;
		cout<<a<<endl;
		cout<<b<<endl;
	}
	void sum()
	{
		cout<<"enter values : ";
		cin>>a>>b;
		cout<<"sum = "<<a+b<<endl;
	}
};
void main()
{
	clrscr();
	a obj1;
	a obj2;
	obj1.show();
	obj2.sum();
	getch();
}
