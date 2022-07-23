#include<stdio.h>
#include<conio.h>
struct student
{
	int  id;
	char name[20];
};
void main()
{
    struct student st[3];
    int i;
    for(i=0;i<3;i++)
    {
	clrscr();
	printf("enter the student id : ");
	scanf("%d",&st[i].id);
	printf("\nenter the student name : ");
	scanf("%s",&st[i].name);
    }
    for(i=0;i<3;i++)
    {
	printf("\nstudent id : %d",st[i].id);
	printf("\nstudent name : %s",st[i].name);
    }
getch();
}