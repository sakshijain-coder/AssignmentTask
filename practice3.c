#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define X 1
#define VAL 32
void f()
{
   static int i;

   ++i;
   printf("%d", i);
}
union abc {
    char a,b,c,d,e,f,g,h;
    int i;
}abc;
#define VAL 32
int main()
{

	//do capital letter

	/*	char arr[] = "sakshijain";
	    *(arr + 0) &= ~VAL;
	    *(arr + 6) &= ~VAL;
	    printf("%s", arr);
	 */

	 // an expression does not get evaluated inside sizeof operator

	  /*  int i = 5, j = 10, k = 15;

	    printf("%d ", sizeof(k /= i + j));
	    printf("%d", k);
	*/

	//float comparison

	/*
	 float f=0.7f;

		if(f==0.7f)
	  			printf("true");
	  		else
	  			printf("false");
	*/
	/*
		int a=300;
		double *p=(double *)&a;
		printf("%d",*(char*)p);
	*/

	//assign int var address into char * and do dereference
	/*
		unsigned int n = 1;
	   char *c = (char*)&n;
	   printf("%d",*c);
	   if (*c)
	       printf("true");
	   else
	       printf("false");

	   */

	//infinite loop bcz we has use continue
	/*int x=1;


	while(x<=5)
	{
			switch(x)
			{
			case X:
					printf("Hello1\n");
					break;

			case X+1:
					printf("hello2\n");
					continue;
			case X+2:
					printf("hello3\n");
					break;
			case X+4:
					printf("hello5\n");
					break;
			default:
				printf("\nu r in default");
			}
			x++;
	}*/

	// %is a modulus operator which takes same

		/*
			float r, x = 2;
			float y = 5;
				r = y%x;
			printf("%f\n", r);
		 */


	//size of union

	//printf( "%d", sizeof( abc ));

	//constant pointer and pointer to constant-

	/*
		int num=10,num2=15;
		int const *numptr = &num;
		int *const consptr = &num2;
		numptr=&num2;
		//numptr2=&num2;
		//*numptr=120;   //numptr is a pointer to constant which does not modify the value which it is pointing
		numptr2=&num2;
		ptr=&num2;
		printf("num=%d\n",*numptr);
		printf("num=%d\n",*numptr2);
	*/


	/*
	 struct { int x;} var = {5}, *p = &var;
	 printf("%d",p->x);
	  // printf("%d %d %d",var.x,p->x,(*p).x);
	  // printf("\n%d",strcmp("strcmp()","strcmp()"));
	*/
	//goto label-
	/*
		int i = 1;

	   Charminar:
	   printf("%d ",i++);
	   if(i==3) break;
	   if(i<=5) goto Charminar;
	 */

		/*
		int x = 1;
		   switch(x)
		   {
			  default: printf("Hello");
			  case 1: printf("hi"); break;
		   }
		 */


/*
	  int x = 65, *p = &x;

	   void *q=p;
	   char *r=q;
	   printf("%c",*r);

*/
/*
		register int x = 5;

	    int *p;
	    p=&x; //error
	    x++;
	    printf("%d",*p);
*/

	//signed int *p=(int*)malloc(sizeof(unsigned int));

   /*
    int const a = 5;
   int const b=10;
   const int * const ptr=&a; //const pointer of constant
   ptr=&b;  //can't reassign the const pointer
   printf("a=%d\n",a);
   printf("a=%d\n",*ptr);
   */
   return 0;
}
