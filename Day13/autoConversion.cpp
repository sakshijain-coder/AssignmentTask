#include<iostream>
class One
{
public:
	One(){
		std::cout << "one ctor" << std::endl;
	}
};
class Two
{
public:
	Two(One&){
		std::cout << "one to two conversion two ctor" << std::endl;
	}
};
void Count(Two){
	std::cout << "COUNT" << std::endl;
}
int main()
{
	One one;
	Count(one);  //auto type conversion in two-compiler quietly calls Two constructoe which take one as a parameter.
	return 0;
}
