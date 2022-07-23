#include<stdio.h>
#include<conio.h>
union empdata
{
     int no,age;
     char name[20];

}emp[2];

void main()
{
     int i;
     clrscr();
     printf("enter the data of 3 employees : ");
     printf("\n...............................");
     for(i=0;i<2;i++)
     {
	 printf("\nenter the number of employee : ");
	 scanf("%d",&emp[i].no);
	 printf("\nenter the age of employee : ");
	 scanf("%d",&emp[i].age);
	 printf("\nenter the name of employee : ");
	 scanf("%s",&emp[i].name);
     }

     for(i=0;i<2;i++)
     {
	 printf("\nthe number of employee is : %d",emp[i].no);
	 printf("\nthe age of employee is : %d",emp[i].age);
	 printf("\nthe name of employee is : %s",emp[i].name);

     }

     getch();
}

























