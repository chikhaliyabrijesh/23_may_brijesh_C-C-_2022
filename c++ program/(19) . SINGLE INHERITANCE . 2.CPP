#include<constream.h>
class student
{
	public:
	int rollno;
	char name[20];
	void stdata()
	{
		cout<<"\nenter the rollno of student : ";
		cin>>rollno;
		cout<<"\nrnter the name of student : ";
		cin>>name;
	}
};
class studies : public student
{
	public:
	char course[20];
	int fee;
	void info()
	{
		cout<<"\nenter the course : ";
		cin>>course;
		cout<<"\nenter the fee of course : ";
		cin>>fee;
		cout<<"\n............................";
	}
	void print()
	{
		cout<<"\nrollno of student is : "<<rollno;
		cout<<"\nname of student is : "<<name;
		cout<<"\nthe course is : "<<course;
		cout<<"\nthe fee of course is : "<<fee;
	}
};
void main()
{
	clrscr();
	studies st;
	st.stdata();
	st.info();
	st.print();
	getch();
}