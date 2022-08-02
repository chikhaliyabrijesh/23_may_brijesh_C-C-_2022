#include<constream.h>
class person
{
	public:
	char name[20];
	int age;
	void pdata()
	{
		cout<<"\nenter a name of student : ";
		cin>>name;
		cout<<"\nenter the age of student : ";
		cin>>age;
	}
};
class student
{
	public:
	int s1,s2,s3,s4,s5,total;
	float per;
	void stdata()
	{
		cout<<"\nenter a marks of 5 subject : ";
		cin>>s1>>s2>>s3>>s4>>s5;
		total=s1+s2+s3+s4+s5;
		per=total/5.0;
	}
};
class teacher : public person , public student
{
	public:
	int salary;
	void tdata()
	{
		cout<<"\nenter the salary of teacher : ";
		cin>>salary;
		cout<<".......................................";
	}
	void showdata()
	{
		cout<<"\nthe name of student is   : "<<name;
		cout<<"\nthe age of student is    : "<<age<<" years";
		cout<<"\nthe total marks is       : "<<total;
		cout<<"\nthe percentage is        : "<<per<<" %";
		cout<<"\nthe salary of teacher is : "<<salary<<" Rs.";
	}
};
void main()
{
	clrscr();
	teacher t1;
	t1.pdata();
	t1.stdata();
	t1.tdata();
	t1.showdata();
	getch();
}




















