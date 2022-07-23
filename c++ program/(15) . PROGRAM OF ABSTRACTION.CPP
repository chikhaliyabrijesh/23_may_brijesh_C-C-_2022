#include<constream.h>
class abstraction
{
	private:
	int a,b;
	public:
	void data()
	{
		cout<<"enter two numbers : "<<endl;
		cin>>a>>b;
	}
	void show()
	{
		cout<<"the sum is : "<<a+b<<endl;
	}
};
void main()
{
	clrscr();
	abstraction ab;
	ab.data();
	ab.show();
	getch();
}
