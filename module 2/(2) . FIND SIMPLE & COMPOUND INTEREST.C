#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float p,r,t,a,si,ci;

	clrscr();

	printf("enter the principle amount : ");
	scanf("%f",&p);
	printf("enter the rate : ");
	scanf("%f",&r);
	printf("enter the time : ");
	scanf("%f",&t);

	si = (p * r * t)/100;
	printf("\nthe simple interest = %f",si);

	a = p * (pow((1+r/100),t));
	ci = a - p;
	printf("\nthe compound interest = %f",ci);

	getch();
}




















