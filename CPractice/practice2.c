#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#define SQUARE(X) X*X

struct temp
{
int a[10];
double d[5];
int a1;
char a2[5];
};
union uni
{
double d;
int i;
char c;
}u;

extern int num;
int main()
{



	printf("%d",num); //extern var

//address of array is increment by size of array that's why it will point to the next of the array and then we typecast into int* and do decreament it will point to the last element of the array;

/*
 	 int a[]={1,2,3,4,5,6};
	 int *aptr = a;
	 aptr++;
	int *ptr =(int*)&a+1;


	printf("%d\n",*aptr);
	printf("%d\n",*(ptr-1));
*/


//size of void pointer-

	/*
	 void *pVoid;
	 pVoid = (void*)0;
	 printf("%lu",sizeof(pVoid));
	 */

//suntraction of two pointer of same array gives the integer value which do separate them

/*
	int a[]={10,20,30,40};
	int *p1=&a[1];
	int *p2=&a[3];
	printf("%d",p2-p1);

    return 0;

*/

//sizeof 2d array

	 /*
	  * int (*p)[10][20];
	    printf("%d",  sizeof(*p));

	 */




/*
	// int *iip=10; // error-assign int to int *
	 int a=10;
	 double d=120.99;
	 double *dptr=(double*)&a;
	 int *iptr=(int *)dptr;
	 iptr=(int *)&d;
	 dptr=(double *)iptr;
	// printf("%lf",*dptr);
*/

//char pointer can point integer but it will read only 1 byte
	 	/*
	 	 int a=303;
	    char *j;
	    j = (char*)&a;
	    printf("%d\n", *j); //it will give integer value of 8 bits
	    return 0;
	 	 */

//typecasting of pointer
/*	float f=125.90f;
	 int d=120;
	 double *dptr=(double*)&d;
	 printf("%d",*dptr);
*/
// left shift operator
	    /*	char c=48;
	       int i, mask=01;
	       for(i=1; i<=5; i++)
	       {
	           printf("%c", c|mask);
	           mask = mask<<1;
	       }
	    */


//enter value in the array of structure then print-

/*
		struct emp
	    {
	        char name[20];
	        float sal;
	    };
	    struct emp e[10];
	    int i;
	    for(i=0; i<=1; i++)
	        scanf("%s %f", e[i].name, &e[i].sal);
	    for(i=0; i<=1; i++)
	    	        printf("%s %f", e[i].name, e[i].sal);*/

/*
	 if(2.92>f) //machine independent
	 	printf("true");
*/



//size of struct temp and union u

/*

	printf("size of struct= %d\n",sizeof(struct temp));
	 printf("size of union= %d\n",sizeof( u));
	 u.i=10;
	 printf("value of i in union:%d\n",u.i);
	 u.c='q';
	 printf("value of c in union:%c,%d,%lf\n",u.c,u.i,u.d);
	 u.d=2.0;
	 printf("value of c in union:%c,%d,%lf\n",u.c,u.i,u.d);

*/

	//return value of printf and scanf function

	/*
		int a1;
	 	 int num_of_char=printf("sakshi");
	 	int num=scanf("%d",&a1);
	 	printf("num_of_char=%d",a);
	 	printf("num=%d",num);

	*/


	 //how much char we have to print..

		/* int max=1;
	   char *s="sakshi";
	   printf("%.*s", max, s);
	 	   printf(":%10s:", s);
	  */


		//putchar and getchar
		/*
       int c;
       while ((c = getchar()) != EOF){
    	   putchar(tolower(c));
       }*/
 return 0;
 }
