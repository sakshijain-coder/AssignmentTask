#include<iostream>
int main(){
	//if statement without else
	/*int num1 = 123;
	bool check = num1 == 123;
	if (check)
		std::cout <<"true";
	*/
	//if statement with else-
	/*
	int num;
	std::cout << "Enter a number:";
	std::cin >> num;
	if (num > 20)
		std::cout << "number is greater than 20";
	else
		if(num<20)
			if(num>10)
				std::cout << "number is less than 20 and number is greater than 10";
			else
				std::cout << "number is less than 20 and number is also less than 10";
		else
			std::cout << "number is equal to 20";
	*/
	
	char c = 65;
	bool flag = c == 'A';
	if (65 == c)
		std::cout << "true\n";
	if (c = 65,30)
		std::cout << "allowed\n"<<c;
	return 0;
}
