#include<constream.h>
class calculation
{
	public:
	int a,b,ans;
	void getdata()
	{
		cout<<"\nthe value of a = ";
		cin>>a;
		cout<<"\nthe value of b = ";
		cin>>b;
	}
};
class add : public calculation
{
	public:
	void addition()
	{
		ans=a+b;
		cout<<"\nthe addition = "<<ans;
		cout<<"\n......................";
	}
};
class sub : public calculation
{
	public:
	void subtraction()
	{
		ans=a-b;
		cout<<"\nthe subtraction = "<<ans;
		cout<<"\n......................";
	}
};
class mul : public calculation
{
	public:
	void multiplication()
	{
		ans=a*b;
		cout<<"\nthe multiplication = "<<ans;
	}
};
void main()
{
	clrscr();

	add ad;
	sub sb;
	mul ml;

	ad.getdata();
	ad.addition();

	sb.getdata();
	sb.subtraction();

	ml.getdata();
	ml.multiplication();

	getch();
}
