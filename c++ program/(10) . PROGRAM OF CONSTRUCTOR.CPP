#include<constream.h>
class construct
{
	private:

	int a;

	public:

	construct(int a)
	{
		a=10;
		this->a=a;
		cout<<"value of a = "<<a<<endl;
	}
	construct()
	{
		cout<<"default constructor."<<endl;
	}
};
void main()
{

	clrscr();
	construct c1(10);
	construct c2;
	getch();
}





