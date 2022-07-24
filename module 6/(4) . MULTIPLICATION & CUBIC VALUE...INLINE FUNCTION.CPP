#include<constream.h>
class mul_cub
{
	public:
	inline int mul(int x)
	{
		return(x*x);
	}
	inline int cube(int y)
	{
		return(y*y*y);
	}
	void display(int x,int y)
	{
		cout<<"\nthe multiplication value is : "<<mul(x);
		cout<<"\nthe cubic value is : "<<cube(y);
	}

};
void main()
{

	clrscr();
	mul_cub mc;
	mc.display(6,5);
	getch();
}
