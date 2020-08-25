#include<iostream>
double* type()
{
	double a=10;
	return &a;
}

int main()
{
	auto i = 1;
	auto y = 2.3f;
	auto ptr = &i;
	decltype(type()) x;
	std::cout << sizeof(i)<<std::endl;
	std::cout << typeid(x).name() << std::endl
			<< typeid(ptr).name() << std::endl;
	return 0;
}
