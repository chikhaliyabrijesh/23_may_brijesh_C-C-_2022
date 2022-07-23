#include<constream.h>
class grand
{
	public:
	void adata()
	{
		cout<<"\nthis is grand class.";
	}
};
class parent1 : virtual public grand
{
	public:
	void bdata()
	{
		cout<<"\nthis is parent class 1.";
	}
};
class parent2 : virtual public grand
{
	public:
	void cdata()
	{
		cout<<"\nthis is parent class 2.";
	}
};
class child : virtual public parent1 ,virtual public parent2
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


