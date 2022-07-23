#include<stdio.h>
#include<conio.h>                                                 
void main()                                          OUTPUT :- *      *      *
{                                                               *     *     *
	int i,j,n=15;                                            *    *    * 
        clrscr();                                                 *   *   *
	for(i=1;i<=n;i++)                                          *  *  *
	{                                                           * * *                                                                                                          for(j=1;j<=n;j++)                                         ***                   
           {                                                   ***************      
	      if((i==8 || j==8) || (i==j || i+j==n+1))               ***         
                                                                    * * * 
	      {                                                    *  *  * 
		 printf("*");                                     *   *   *
	      }                                                  *    *    *
	      else                                              *     *     *
	      {                                                *      *      *
		 printf(" ");
	      }
	   }
	   printf("\n");
	}

	getch();
}