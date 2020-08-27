#include<iostream>
using Pint= int*;
using dou = double;
using douptr = dou*;
int main()
{

	int num1 = 10;
	dou num2 = 4.2;
	douptr dptr = &num2;
	Pint num1ptr = &num1;
	
	std::cout << num2 << std::endl << *num1ptr << std::endl << *dptr<<std::endl;
	
	return 0;
}