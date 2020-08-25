#include<iostream>
void mine(int a);
static int mul(int a, int b)
{
	mine(a);
	return a * b;
}
int main()
{

	//std::cout << mul(10, 20) << std::endl;
	return 0;
}
