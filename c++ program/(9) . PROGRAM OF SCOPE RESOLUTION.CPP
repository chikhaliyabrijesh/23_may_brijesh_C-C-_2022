#include<constream.h>
int a=10;
void main()
{
	int a = 20;
	clrscr();
	cout<<"the value of local variable is : "<<a;
	cout<<endl<<"the value of global variable is : "<<::a;
	getch();
}