#include<stdio.h>
#define product(a,b) a*b
#define EVEN 0
#define ODD 1
int main(){


	printf("%d",printf("%d",printf("hello")));

	return 0;
		/*int x=3,y=4,z=2;
		//a = ( x > y ) ? (( x > z ) ? x : z) : (( y > z ) ? y : z )


		 //what will be output-
	    int x = 3;
	    if (x == 2); x = 0;
	    if (x == 3) x++;
	    else x += 2;
			printf("x=%d",x);

		//how many times hello will be print
		int i;
	    for ( ; i < 10 ; i++) // (ii)
			printf("hello");

		//is it right or not?

		for(i++;i<10;i=0)
			printf("%d",i);
		// what will be output
		for(printf("1st") ; printf("2nd") ; printf("3rd")) { break; }


		// output
		int j = 0;
		 for ( ; j < 10 ; )
		 {
		   if (j < 10)
		     printf("Geeks", j++);
		   else
		     continue;
		   printf("Quiz\n");
		 }

    	// output -this loop will not print anything bcz goto statement will reach on goto label and break this loop
		int i;
		  goto LOOP;
		  for (i = 0 ; i < 10 ; i++)
		  {
		     printf("GeeksQuizn");
		     LOOP:
		      break;
		  }

		//can we use float in switch case-it will produce error!
		float f=2.0f;
		int f1=2;
		switch(f)
		{
		case 2.0:printf("hello");
		break;
		case :printf("empty");

		}

	//output
	int i=0;
		for(i=0;i<10;i++)
		{
		if(i<5)
			continue;
		printf("%d",i);
		}


		//output-if we do not apply break statement in cases as condition met then it will not check condition.
		char check = 99;
	    switch (check)
		{

	    default: printf("GeeksQuiz");

	    case 'a' : printf("Geeks ");

	    case 'b' : printf("Quiz ");
	                    break;

	    }

		//it will produce runtime error- bcz number is divided by 0 in this loop.

		int i = 0;
		do {
		        no /= c;
		        printf ("no=%d", no);
		    } while(c--);

		 // output
	 	 int i = 0;
	    for (i=0; i<20; i++)
	    {
	      switch(i)
	      {
	        case 0:
	          i += 5;
	        case 1:
	          i += 2;
	        case 5:
	          i += 5;
	        default:
	          i += 4;
	          break;
	      }
	      printf("%d  ", i);
	    }
	    //output
		int i = 0;
		int i = 3;
	    switch(i)
	    {
	        printf("Outside ");
	        case 1: printf("Geeks");
	            break;
	        case 2: printf("Quiz");
	            break;
	        defau1t: printf("GeeksQuiz");
	        sakshi:printf("hlo");

	    }

		//printf return no of char which it do print
		if(printf(""))
			printf("true");
		else
			printf("false");



	    	printf("hello");
		   if (printf("0"))
		        i = 3;
		    else
		        i = 5;
		   printf("%d", i);
		   //printf("%d",printf("hello"));

		int i = 3;
        switch (i & 1)
        {
            case EVEN: printf("Even");
                    break;
            case ODD: printf("Odd");
                    break;
            default: printf("Default");
        }


    switch (i)
    {

    	case 0+1: printf("Geeksmine\n");

    	case 0+3: printf("Geeks\n");


        case 0+5: printf("Quiz\n");



        case 0+6: printf("Anu\n");
        default: printf("GeeksQuiz\n");

    }*/


/*

    int i = 0;
    switch (i)
    {
        case '0': printf("Geeks");
                break;
        case '1': printf("Quiz");
                break;
        default: printf("GeeksQuiz");
    }
    return 0;

*/

/*

		//	double *dp,atof(char*);
		//  char* p="hello";

		//char* args[]={"anu","enu","meenu"};

		//char arr[]="i m sakshi";
		//arr="my name is enu";  // we can't reassigned the array bcz array has constant address

		//char* ptrc="hello to all!";
		//printf("%c",*++ptrc);

		double dvar=4.20;
		void *ptr=&dvar; // void pointer can point any type but we can't derefrence it bcz it does not know how many bytes i have to read

		int * iptr=(int *)ptr; //typecase into int pointer if we will try to derefrence it.it will give the garbage value.

		printf("%d\n",*iptr);

		printf("%lf",*(double*)iptr);


		// we can't use expression in switch case condition:
		int a=1,b=1;
		switch(a)
		{
		case a*b:
		printf("yes");
		break;
		case 2:
		printf("no");
		break;
		default:
			printf("default");
		}

		//output-
		int x=0,y=10;
		if(x<y&&++y>10)
		{
		x++;
		}
		printf("%d %d",x,y);

			return 0;
		}*/

}
