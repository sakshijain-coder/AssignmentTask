#include<iostream>
class One1
{
public:
	One1() {
		std::cout << "one ctor" << std::endl;
	}
};
class Two1
{
public:
	explicit Two1(One1&) {
		std::cout << "one to two conversion two ctor" << std::endl;
	}
};
void Count1(Two1) {
	std::cout << "COUNT" << std::endl;
}
int explicitmain()
{
	One1 one1;
	//! Count(one);  //No auto conversion allowed
	Count1(Two1(one1));  //Ok
	return 0;
}