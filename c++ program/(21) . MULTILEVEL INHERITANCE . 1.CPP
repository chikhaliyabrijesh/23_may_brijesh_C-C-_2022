#include<constream.h>
class grand
{
	public:
	int nh;
	grand()
	{
		cout<<"\nthe number of house is : ";
		cin>>nh;
	}
};
class parent : public grand
{
	public:
	int bal;
	parent()
	{
		cout<<"\ntotal bank balance is : ";
		cin>>bal;
	}
};
class child : public parent
{
	public:
	int nc;
	child(int nc)
	{
		cout<<"\nthe number of car is : ";
		this->nc=nc;
		cin>>nc;
	}
	child()
	{
		cout<<"\nthe number of house is : "<<nh;
		cout<<"\ntotal bank balance is : "<<bal;
		cout<<"\nthe number of car is : "<<nc;
	}
};
void main()
{
	clrscr();
	child c1(20);
	child c2;
	getch();
}

