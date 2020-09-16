#include<iostream>
class Parent
{
public:
	 virtual void fun1() {
		std::cout << "Parent::fun1()" << std::endl;
	}
};
class Child:public Parent
{
public:
	void fun1() override //	C++ 11 Features
	{
		std::cout << "Child::fun1()" << std::endl;
	}
};
int overridemain() {
	Parent* p_ptr;
	p_ptr = new Child();
	p_ptr->fun1();
	return 0;
}