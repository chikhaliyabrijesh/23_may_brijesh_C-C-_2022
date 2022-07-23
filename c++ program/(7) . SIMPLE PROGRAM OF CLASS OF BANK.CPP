#include<iostream.h>
#include<conio.h>
class bank
{
	public:
	char name[20];
	char acctype[20];
	int accno;
	float balamt;
}bnk;
void main()
{
	char name[20];
	char acctype[20];
	int accno;
	float balamt;

	clrscr();

	cout<<"enter the name of depositor : ";
	cin>>bnk.name;
	cout<<"\nenter the type of account : ";
	cin>>bnk.acctype;
	cout<<"\nenter the account number : ";
	cin>>bnk.accno;
	cout<<"\nenter the balance amount : ";
	cin>>bnk.balamt;

	cout<<".................................";

	cout<<"\nthe name of depositor is : "<<bnk.name;

	cout<<"\nthe type of account is : "<<bnk.acctype;

	cout<<"\nthe account number is : "<<bnk.accno;

	cout<<"\nthe balance amount is : "<<bnk.balamt;

	getch();
}





















