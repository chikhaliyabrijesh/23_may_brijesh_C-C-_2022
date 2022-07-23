#include<stdio.h>
#include<conio.h>
int palindrome(int n)
{
	int r,rev=0,s;
	s=n;
	while(n != 0)
	{
	    r=n%10;
	    rev=rev*10+r;
	    n=n/10;
	}
	if(s==rev)
	{
	    printf("\nthe number is a palindrome number.");
	}
	else
	{
	    printf("\nthe number is not a palindrome number.");
	}
	return rev;

}
void main()
{
	int n;

	clrscr();

	printf("enter a number : ");
	scanf("%d",&n);

	palindrome(n);

	getch();
}
