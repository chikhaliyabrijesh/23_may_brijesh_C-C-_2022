#include<constream.h>
#include<fstream.h>
void main()
{
	int no,i,ans;
	clrscr();
	ofstream out("c:/xampp/table.txt");
	cout<<"\nenter a number to print a table : ";
	cin>>no;
	for(i=1;i<=10;i++)
	{
		ans=no*i;
		out<<no<<"*"<<i<<"="<<ans<<endl;
	}
	out.close();
	getch();
}