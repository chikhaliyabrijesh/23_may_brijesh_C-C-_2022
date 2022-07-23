#include<constream.h>
void main()
{
	int no,c,r,sum=0;
	clrscr();
	cout<<"enter a number : ";
	cin>>no;
	c=no;
	while(no > 0)
	{
	     r = no % 10;
	     sum = sum * 10 + r;
	     no = no / 10;
	}
	if(c==sum)
	{
	     cout<<"the number is a palindrome number.";
	}
	else
	{
	     cout<<"the number is not a palindrome number.";
	}
	getch();
}