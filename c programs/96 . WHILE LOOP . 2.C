#include<stdio.h>
#include<conio.h>
union stdata
{
   int id;
   char name[10];
};
void main()
{
   union stdata st
   clrscr();
   printf("enter the student id : ");
   scanf("%d",&st.id);
   printf("\nenter the student name : ");
   scanf("%s",&st.name);

   printf("\nstudent id : %d",st.id);
   printf("\nstudent name : %s",st.name);

getch();
}