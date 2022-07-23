#include<stdio.h>
#include<conio.h>
void main()
{
float amt,rate,time,si;
clrscr();
printf("enter the amt:");
scanf("%f",&amt);
printf("enter the rate:");
scanf("%f",&rate);
printf("enter the time:");
scanf("%f",&time);
si=(amt*rate*time)/100;
printf("simple interest = %f",si);
getch();

}