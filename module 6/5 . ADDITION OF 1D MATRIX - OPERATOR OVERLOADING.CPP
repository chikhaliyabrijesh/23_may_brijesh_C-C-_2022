#include<constream.h>
class matrix
{
	public:
	int mat[5];
	int i;

	void getmatrix()
	{
		cout<<"\nenter the 5 element of matrix : \n";
		for(i=0;i<5;i++)
		{
			cin>>mat[i];
		}
	}
	void showmatrix()
	{
		for(i=0;i<5;i++)
		{
			cout<<mat[i]<<"\n";
		}
	}
	void operator +(matrix j)
	{
		int add[5];
		for(i=0;i<5;i++)
		{
			add[i]=mat[i]+j.mat[i];
		}
		cout<<"\naddition of matrix is : \n";
		for(i=0;i<5;i++)
		{
			cout<<add[i]<<"\n";
		}
	}
};
void main()
{
	clrscr();
	matrix a,b;
	a.getmatrix();
	b.getmatrix();
	cout<<"\nthe first matrix is : \n";
	a.showmatrix();
	cout<<"\nthe second matrix is : \n";
	b.showmatrix();
	a+b;
	getch();
}



