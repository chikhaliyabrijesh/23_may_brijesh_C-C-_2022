#include<stdio.h>
#include<conio.h>
void main()
{
	int s1,s2,s3,s4,s5,total;
	float pr;
	clrscr();
	printf("\nenter the 5 subject marks : ");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	total=s1+s2+s3+s4+s5;
	printf("\nthe total marks is : %d",total);

	if(s1>33 && s2>33 && s3>33 && s4>33 && s5>33)
	{
	    pr = total/5.0;
	    printf("\nthe percentage is : %f %",pr);

	    if(pr>75)
	    {
		printf("\ndistinction");
	    }
	    else if(pr>60 && pr<=75)
	    {
		printf("\nfirst class");
	    }
	    else if(pr>50 && pr<=60)
	    {
		printf("\nsecond class");
	    }
	    else if(pr>35 && pr<=50)
	    {
		printf("\npass class");
	    }
	    else
	    {
		printf("\nfail");
	    }
	}
	else
	{
		printf("\nfail");
	}
	getch();
}

