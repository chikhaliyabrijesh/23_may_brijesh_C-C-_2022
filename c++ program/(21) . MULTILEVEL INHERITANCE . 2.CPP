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
class B : public A
{
	public:
	int y;
	void Bdata()
	{
		cout<<"\nenterthe value of y : ";
		cin>>y;
	}
};
class C : public B
{
	public:
	int z,ans;
	void Cdata()
	{
		cout<<"\nenter the value of z : ";
		cin>>z;
	}
	void multiplication()
	{
		ans = x * y * z;
		cout<<"\nthe multiplication of x , y & z is : "<<ans;
	}
};
void main()
{
	clrscr();
	C c1;
	c1.Adata();
	c1.Bdata();
	c1.Cdata();
	c1.multiplication();
	getch();
}