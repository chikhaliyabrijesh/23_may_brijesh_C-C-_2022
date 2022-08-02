#include<constream.h>
class swap
{
	private:
	int a,b;
	public:
	void getdata()
	{
		cout<<"\nenter the value of a & b : ";
		cin>>a>>b;
		cout<<"\n--------------------------------";
		cout<<"\nbefore swapping : \n";
		cout<<"\nvalue of a = "<<a;
		cout<<"\nvalue of b = "<<b;
		cout<<"\n--------------------------------";
	}
	void display()
	{
		cout<<"\nafter swapping : \n";
		cout<<"\nvalue of a = "<<a;
		cout<<"\nvalue of b = "<<b;
	}
	friend void swapno(swap &s);
};
void swapno(swap &s)
{
	int temp;
	temp = s.a;
	s.a = s.b;
	s.b = temp;
}
void main()
{
	clrscr();
	swap s;
	s.getdata();
	swapno(s);
	s.display();
	getch();
}