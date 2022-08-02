#include<constream.h>
void main()
{
	int *p1,*p2,add;
	p1=new int;
	p2=new int;
	clrscr();
	cout<<"\nenter the first number : ";
	cin>>*p1;
	cout<<"\nenter the second number : ";
	cin>>*p2;
	add = *p1 + *p2;
	cout<<"\nthe addition of two numbers is : "<<add;
	delete p1;
	delete p2;
	getch();
}
