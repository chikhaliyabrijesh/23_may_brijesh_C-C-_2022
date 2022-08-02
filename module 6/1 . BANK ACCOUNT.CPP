#include<constream.h>
class bank
{
	public:

	char name[20];
	char acctype[20];
	int accno;
	int balance;

	void mambers()
	{
		cout<<"\nenter the name of depositor : ";
		cin>>name;
		cout<<"\nenter the type of account : ";
		cin>>acctype;
		cout<<"\nenter the account number : ";
		cin>>accno;
		cout<<"\nenter a balance amount in the account : ";
		cin>>balance;
	}
	void deposit()
	{
		int depbal;
		cout<<"\nenter the amount to deposit : ";
		cin>>depbal;
		balance = balance + depbal;
		cout<<"\nyour new balance : "<<balance;
	}
	void check()
	{
		int withbal;
		cout<<"\n\nenter amount to withdraw : ";
		cin>>withbal;
		balance = balance - withbal;
		cout<<"\nthe amount after withdrawal is : "<<balance;
		cout<<"\n........................................";
	}
	void display()
	{
		cout<<"\nthe name is : "<<name;
		cout<<"\nthe type of account is : "<<acctype;
		cout<<"\nthe account number is : "<<accno;
		cout<<"\nthe balance is : "<<balance;
	}
};
void main()
{

	clrscr();
	bank bk;
	bk.mambers();
	bk.deposit();
	bk.check();
	bk.display();
	getch();
}



