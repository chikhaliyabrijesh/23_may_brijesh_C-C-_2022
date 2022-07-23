#include<stdio.h>
#include<conio.h>
#define pi 3.14
void main()
{
     int n,r,l,w,b,h;
     float area;

	clrscr();
	printf("menu of geomatrical shapes : ");
	printf("\n1.circle : ");
	printf("\n2.rectangle : ");
	printf("\n3.triangle : ");

	printf("\nenter the number of geomatrical shape : ");
	scanf("%d", &n);

	switch(n)
	{
		case 1 :
		printf("\nenter the radious of circle : ");
		scanf("%d",&r);
		area = 2*pi*r;
		printf("\narea of the circle = %f", area);
		break;

		case 2 :
		printf("\nenter the length of rectangle : ");
		scanf("%d",&l);
		printf("\nenter the width of rectangle : ");
		scanf("%d",&w);
		area = l*w;
		printf("\narea of the rectangle = %f",area);
		break;

		case 3 :
		printf("\nenter the base of triangle : ");
		scanf("%d",&b);
		printf("\nenter the height of triangle : ");
		scanf("%d",&h);
		area = 0.5*b*h;
		printf("\narea of the triangle = %f",area);
		break;

		default :
		printf("\nincorrect number.");
	}
getch();

}






