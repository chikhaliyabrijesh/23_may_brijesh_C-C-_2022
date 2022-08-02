#include<constream.h>
class account
{
	public:
	char name[20];
	char acctype[20];
	int accno;
	int balance;

	void getdata()
	{
		cout<<"\nenter the name of customer : ";
		cin>>name;
		cout<<"\nenter the type of account : ";
		cin>>acctype;
		cout<<"\nenter the account number : ";
		cin>>accno;
		cout<<"\nenter the balance in account : ";
		cin>>balance;
	}
};
class sav_acc : public account
{
	public:
	void deposit()
	{
		int depbal;
		cout<<"\nenter the amount to deposit : ";
		cin>>depbal;
		balance = balance + depbal;
		cout<<"\nthe new balance : "<<balance;
	}
	void intdeposit()
	{
		int interest;
		interest = balance * 3 / 100;
		cout<<"\n\nthe annual interest is : "<<interest;
		balance = balance + interest;
		cout<<"\n\nthe new balance is : "<<balance;
	}
	void withdrawal()
	{
		int withbal;
		cout<<"\n\nenter the amount to withdraw : ";
		cin>>withbal;
		balance = balance - withbal;
		cout<<"\nthe amount after withdrawal is : "<<balance;
	}
	void sercharge()
	{
		int ser_charge;
		if(balance < 1000)
		{
		   cout<<"\n\nservice charge impose : ";
		   cout<<"\n...........................................";
		   cout<<"\nenter the amount of service charge : ";
		   cin>>ser_charge;
		   balance = balance - ser_charge;
		   cout<<"\nthe balance after service charge is : "<<balance;
		}
		else
		{
		   cout<<"\n\nno service charge impose : ";
		}
		cout<<"\n----------------------------------------------";
	}
	void display()
	{
		cout<<"\nthe name of customer is      : "<<name;
		cout<<"\nthe type of account is       : "<<acctype;
		cout<<"\nthe saving account number is : "<<accno;
		cout<<"\nthe balance in account is    : "<<balance;
		cout<<"\n----------------------------------------------";
	}

};
class curr_acc : public account
{
	public:
	void deposit()
	{
		int depbal;
		cout<<"\nenter the amount to deposit : ";
		cin>>depbal;
		balance = balance + depbal;
		cout<<"\nyour new balance : "<<balance;
	}
	void withdrawal()
	{
		int withbal;
		cout<<"\n\nenter the amount to withdraw : ";
		cin>>withbal;
		balance = balance - withbal;
		cout<<"\nthe amount after withdrawal is : "<<balance;
	}
	void chqwithdraw()
	{
		char revnm[20];
		int amount;
		cout<<"\n\nenter the name of cheque receiver : ";
		cin>>revnm;
		cout<<"\nenter the amount to withdraw by cheque : ";
		cin>>amount;
		if(balance == 0)
		{
		   cout<<"\ntransaction cannot be done.";
		}
		else
		{
		   balance = balance - amount;
		   cout<<"\nthe amount after cheque withdrawal is : "<<balance;
		}
	}
	void imp_penalty()
	{
		int penalty;
		if(balance < 2000)
		{
		   cout<<"\n\nimpose the penalty : ";
		   cout<<"\n...........................................";
		   cout<<"\nenter the penalty : ";
		   cin>>penalty;
		   balance = balance - penalty;
		   cout<<"\nthe balance after penalty is : "<<balance;
		}
		else
		{
		   cout<<"\n\nno impose the penalty : ";
		}
		cout<<"\n----------------------------------------------";
	}
	void display()
	{
		cout<<"\nthe name of customer is       : "<<name;
		cout<<"\nthe type of account is        : "<<acctype;
		cout<<"\nthe current account number is : "<<accno;
		cout<<"\nthe balance in account is     : "<<balance;
		cout<<"\n----------------------------------------------";
	}
};
void main()
{
	int choice;
	clrscr();
	cout<<"\nenter the type of the account : ";
	cout<<"\n......................................";
	cout<<"\n1.saving account ";
	cout<<"\n2.current account ";
	cout<<"\n\nenter the choice : ";
	cin>>choice;

	switch(choice)
	{
		case 1 :

		sav_acc sa;
		sa.getdata();
		sa.deposit();
		sa.intdeposit();
		sa.withdrawal();
		sa.sercharge();
		sa.display();
		break;

		case 2 :

		curr_acc ca;
		ca.getdata();
		ca.deposit();
		ca.withdrawal();
		ca.chqwithdraw();
		ca.imp_penalty();
		ca.display();
		break;

		default :

		cout<<"\nincorrect choice.";

	}
	getch();
}






