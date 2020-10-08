#include<iostream>
class Cargo
{
public:
	int i;
	Cargo& operator=(Cargo& b)
	{
		i = 10;
		b.i = 20;
		std::cout << "Inside cargo::operator=()" << std::endl;
		return b;
	}
};
class Truck
{
public:
	Cargo cargo;
	
};
int OperatorEqualsmain()
{
	Truck a, b;
	std::cout << (a = b).cargo.i;
	return 0;
}