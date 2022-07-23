#include<constream.h>
class student
{
	private:

	int rollno;
	int age;
	char name[20];

	public:

	void getstudent()
	{
		cout<<"enter data of student : ";
		cin>>rollno>>age>>name;

	}
	void showstudent()
	{
		cout<<rollno<<endl;
		cout<<age<<endl;
		cout<<name<<endl;
	}
};
void main()
{
	clrscr();
	student st;
	st.getstudent();
	st.showstudent();
	getch();
}