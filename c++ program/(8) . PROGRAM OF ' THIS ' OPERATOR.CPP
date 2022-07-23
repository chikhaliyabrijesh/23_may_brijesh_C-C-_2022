#include<constream.h>
class number
{
	private:

	int a;

	public:

	void getdata()
	{
		int a=100;
		this->a=a;
		cout<<"value of a = "<<a<<endl;
	}
};
void main()
{
	int a;
	clrscr();
	number n1;
	n1.getdata();
	getch();
}