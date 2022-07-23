#include<constream.h>
class a
{
	public:
	void adata()
	{
		cout<<"this is base class 1.";
	}
};
class b
{
	public:
	void bdata()
	{
		cout<<"\nthis is base class 2.";
	}
};
class c : public a , public b
{
	public:
	void cdata()
	{
		cout<<"\nthis is derived class.";
	}
}c1;
void main()
{
	clrscr();
	c1.adata();
	c1.bdata();
	c1.cdata();
	getch();
}
