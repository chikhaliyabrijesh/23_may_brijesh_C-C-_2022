#include<constream.h>
class lecture
{
	public:
	   int lec_no;
	   char name[20];
	   char subject[20];
	   char course[20];

	   void inivalue()
	   {
		cout<<"\nenter the number of lecturer : ";
		cin>>lec_no;
		cout<<"\nenter the name of lecturer : ";
		cin>>name;
		cout<<"\nenter the name of subject : ";
		cin>>subject;
		cout<<"\nenter the name of course : ";
		cin>>course;
	   }
	   void display()
	   {
		cout<<"   "<<lec_no<<"\t\t"<<name<<"\t\t"<<subject<<"\t\t"<<course<<endl;

	   }
};
void main()
{
	int i,j;
	clrscr();
	lecture lec[5][1];
	for(i=0;i<5;i++)
	{
	   for(j=0;j<1;j++)
	   {
	      lec[i][j].inivalue();
	   }
	}
	cout<<"\nthe lecture information is : ";
	cout<<"\n--------------------------------------------------------";
	cout<<"\n  lecno    |    name    |    subjects    |    course";
	cout<<"\n--------------------------------------------------------\n";
	for(i=0;i<5;i++)
	{
	   for(j=0;j<1;j++)
	   {
	      lec[i][j].display();
	   }
	}
	getch();
}


