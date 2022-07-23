#include<constream.h>
void main()
{
	int no,square,cube,i;
	clrscr();
	cout<<"\nenter 1 to 5 number to print the square : ";
	cin>>no;
	cout<<"\n+----------------------+";
	cout<<"\n| no || square || cube |";
	cout<<"\n+----------------------+";
	for(i=1;i<=10;i++)
	{
	    square=i*i;
	    cube=i*i*i;
	    cout<<"\n"<<"  "<<i<<"       "<<square<<"         "<<cube<<endl;
	}
	getch();
}