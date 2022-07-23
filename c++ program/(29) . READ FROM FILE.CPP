#include<constream.h>
#include<fstream.h>
void main()
{
	char fdata[50];
	int i;
	clrscr();
	ifstream in("c:/xampp/table.txt");
	for(i=1;i<=10;i++)
	{
		in>>fdata;
		cout<<fdata<<endl;
	}
	in.close();
	getch();
}