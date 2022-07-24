#include<constream.h>
class simpint
{
	public:
	simpint(float p,float r,float t,float si)
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
	simpint sint(p,t,r,si);
	getch();
}

