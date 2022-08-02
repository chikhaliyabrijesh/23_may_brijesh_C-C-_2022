#include<constream.h>
#include<string.h>
class concatstr
{
	public:
	char str1[25];
	char str2[25];

	void getstring()
	{
		cout<<"\nstring 1 is : ";
		cin>>str1;
		cout<<"\nstring 2 is : ";
		cin>>str2;
	}
	void operator++()
	{
		cout<<"\nconcat two string is : "<<strcat(str1,str2);
	}
};
void main()
{
	clrscr();
	concatstr str;
	str.getstring();
	++str;
	getch();
}
