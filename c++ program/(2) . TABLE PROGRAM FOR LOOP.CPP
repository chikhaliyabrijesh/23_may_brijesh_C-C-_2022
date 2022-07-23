#include<constream.h>
void main()
{
	int no,i,ans;
	clrscr();
	cout<<"enter a number to print the table : ";
	cin>>no;
	for(i=1;i<=10;i++)
	{
	    ans=no*i;
	    cout<<no<<" * "<<i<<" = "<<ans<<endl;

	}
	getch();
}