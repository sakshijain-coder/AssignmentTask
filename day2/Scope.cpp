#include<iostream>

int x = 100;
int main()
{
	int x = 23;
	{
		int y = x;
		int x = 200;
		std::cout << y << std::endl;
		std::cout << x << std::endl;
	}
	std::cout << x << std::endl;
	std::cout << ::x << std::endl;
	return 0;
}
