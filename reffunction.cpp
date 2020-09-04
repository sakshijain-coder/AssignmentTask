#include<iostream>
int varnum = 20;
int& X()
{
	return varnum;
}
int* f(int* p)
{
	(*p)++;
	return p;
}
int& g(int& p)
{
	p++;
	return p;
}
int& h()
{
	static int q=100;
	return q;
}
int main()
{
	int a = 0;
	/*f(&a);
	std::cout << a<<std::endl;
	f(a);
	std::cout << a;*/
	//std::cout << h();
	//g(1);//make g function like this -g(const int&) if we pass constant value.
	X() = 5;
	std::cout << varnum;
}