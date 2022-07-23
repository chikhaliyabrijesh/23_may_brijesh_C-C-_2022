#include<constream.h>
void main()
{
	int no,i,ans;
	clrscr();
	cout<<"enter a number to print the table : ";
	cin>>no;
	i=1;
	do
	{
	    ans=no*i;
	    cout<<no<<" * "<<i<<" = "<<ans<<endl;
	    i++;
	}
	while(i<=10);
	getch();
}