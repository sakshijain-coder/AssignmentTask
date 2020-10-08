#include<iostream>
void func(int n)
{
	if (n > 4)
		return;  //return statement
	std::cout << "square is" << n * n;
}
int lalmain(){
	
	int num = 10;
	int i = 1;
	/*while (i<=10)
	{
		
		std::cout << num << "*" << i << "=" << num * i << std::endl;
		i++;
	}*/
	/*while (num != i)
	{
		std::cout << "enter number";
		std::cin >> i;

	}
	std::cout << "you are right";*/
	/*for (i = 1; i <= 10; ++i)  //it came in c99 standard
		std::cout << i;
		*/
	
	/*for (int i = 1; num != i;)
	{
		std::cout << "enter number";
		std::cin >> i;
	}
	std::cout << "you are right";
	*/
	/*
	do
	{
		std::cout << "enter number";
		std::cin >> i;
	} while (num != i);
	std::cout << "you are right";
	*/
	//break statement -
/*	for (i = 0; i < 10; i++)
	{
		std::cout <<i;
		if(i>4)
		 break;
	}
	//continue statement-
	while (i != 10)
	{
		if (i < 4)
			continue;
		std::cout << i;
	}
*/
	//does'nt print anything if you pass number greater than 4
	/*while(num--)
		func(num);
	*/
	//switch case-
	
		std::cout << "enter number:";
		std::cin >> num;
		switch (num)
		{
			std::cout << "hello:"; //this statement  will not execute;
		case 10:
			std::cout << "you chose 10";
			break;
		case 20:
			std::cout << "you chose 20";
			break;
		case 30:
			std::cout << "you chose 30";
			break;
		default:
			std::cout << "you chose different number";
		}

		return 0;

}


