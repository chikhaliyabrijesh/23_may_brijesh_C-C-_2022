#include<constream.h>
#include<fstream.h>
void main()
{
	char fdata[50];
	int i,no,ans;
	clrscr();
	ofstream out("c:/xampp/table.txt");
	cout<<"\nenter a number to print table: ";
	cin>>no;
	for(i=1;i<=10;i++)
	{
		ans=no*i;
		out<<no<<"*"<<i<<"="<<ans<<endl;
	}
	out.close();

	ifstream in("c:/xampp/table.txt");
	for(i=1;i<=10;i++)
	{
		in>>fdata;
		cout<<fdata<<endl;
	}
	in.close();
	getch();
}
