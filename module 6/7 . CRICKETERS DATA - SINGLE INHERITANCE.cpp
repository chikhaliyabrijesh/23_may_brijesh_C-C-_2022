#include<iostream>
using namespace std;
class cricketer
{
	public:
		int i;
		string name[10];
		
		int crickdata()
		{
			for(i=0;i<5;i++)
			{
				cout<<"\nenter the name of cricketer : ";
				cin>>name[i];
			}
		}
};
class batsman : public cricketer
{
	public:
		
		int i;
		int runs[5];
		int total;
		int avg;
	
		int bat_run()
		{
			for(i=0;i<5;i++)
			{
				cout<<"\nenterthe runs of batsman : ";
				cin>>runs[i];
			}
		}
		int display1()
		{
			for(i=0;i<5;i++)
			{
				cout<<"  "<<name[i]<<"\t\t"<<runs[i]<<endl;
			}
		}
		int tot_avg()
		{
			total=0;
			for(i=0;i<5;i++)
			{
				total = total + runs[i];
				avg = total / 5;
			}
		}
		int display2()
		{
			cout<<"\nthe total runs of batsman is : "<<total;
			cout<<"\nthe average runs of batsman is : "<<avg;
		}
};
int main()
{
	int i;
	batsman bt[5];
	bt[i].crickdata();
	bt[i].bat_run();
	cout<<"\nthe information of five batsman is as following : ";
	cout<<"\n+---------------------------------------------------------+";
	cout<<"\n    name       |     runs       ";
	cout<<"\n+---------------------------------------------------------+\n";
	bt[i].display1();
	bt[i].tot_avg();
	bt[i].display2();
}
