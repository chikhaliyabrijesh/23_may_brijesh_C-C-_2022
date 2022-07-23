#include<constream.h>
class A
{
	public:
	int x;
	void Adata()
	{
		cout<<"\nenter the value of x : ";
		cin>>x;
	}
};
class B
{
	public:
	int y;
	void Bdata()
	{
		cout<<"\nenterthe value of y : ";
		cin>>y;
	}
};
class C : public A , public B
{
	public:
	int ans;
	void addition()
	{
		ans=x+y;
		cout<<"\nthe addition of x & y is : "<<ans;
	}
};
void main()
{
	clrscr();
	C c1;
	c1.Adata();
	c1.Bdata();
	c1.addition();
	getch();
}