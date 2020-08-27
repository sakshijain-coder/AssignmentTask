#include<iostream>
#include "myheader.h"
#include "myheader.h"
int main()
{
	int a = 10;
	int b = 12;
	int sum = add(a, b);
	int m = mul(a, b);
	std::cout << sum << std::endl<<m;
	return 0;
}