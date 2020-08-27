#include<iostream>
#include "myheader.h"
#include "myheader.h"  // i have added #pragma once in the header file that's why it will add only one time. if we don't add then this will give error!
int main()
{
	int a = 10;
	int b = 12;
	int sum = add(a, b);
	int m = mul(a, b);
	std::cout << sum << std::endl<<m;
	return 0;
}
