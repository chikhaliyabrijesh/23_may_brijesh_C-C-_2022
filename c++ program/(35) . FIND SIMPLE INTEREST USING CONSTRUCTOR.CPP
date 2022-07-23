#include<constream.h>
class sinterest
{
	public:
	float p,r,t,si;
	sinterest(float p,float r,float t)
	{
		this->p=p;
		this->r=r;
		this->t=t;
	}
	void showdata()
	{
		si=(p*r*t)/100;
		cout<<"\nthe simple interest is : "<<si;
	}

};
void main()
{
	float p,r,t,si;
	clrscr();
	cout<<"\nenter the principle amount : ";
	cin>>p;
	cout<<"\nenter the rate : ";
	cin>>r;
	cout<<"\nenter the time in year : ";
	cin>>t;
	sinterest obj(p,t,r);
	obj.showdata();
	getch();
}

