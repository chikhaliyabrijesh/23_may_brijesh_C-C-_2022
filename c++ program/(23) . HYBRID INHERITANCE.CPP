#include<constream.h>
class grand
{
	public:
	void adata()
	{
		cout<<"\nthis is grand class.";
	}
};
class parent1 : public grand
{
	public:
	void bdata()
	{
		cout<<"\nthis is parent class 1.";
	}
};
class parent2
{
	public:
	void cdata()
	{
		cout<<"\nthis is parent class 2.";
	}
};
class child : public parent1 , public parent2
{
	public:
	void ddata()
	{
		cout<<"\nthis is child class.";
	}
};
void main()
{
	clrscr();
	child c1;
	c1.adata();
	c1.bdata();
	c1.cdata();
	c1.ddata();
	getch();
}


