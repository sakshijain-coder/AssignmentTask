#include<iostream>
int x = 29;

int main()
{

	std::cout << x << std::endl;
	int x = 23;
	std::cout << x << std::endl;
	{
		int x = 50;
		std::cout << x << std::endl;
	}

	return 0;
}
