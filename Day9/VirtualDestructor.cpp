#include<iostream>
class Base1
{
public:
	~Base1() { std::cout << "~base1()\n"; }
};
class Derived1 :public Base1 {
public:
	~Derived1(){ std::cout << "~Derived1()\n"; }
};
class Base2
{
public:
	virtual ~Base2() { std::cout << "~base2()\n"; }
};
class Derived2 :public Base2 {
public:
	~Derived2() { std::cout << "~Derived2()\n"; }
};
int main()
{
	Base1* bp = new Derived1();
	Base2* b2p = new Derived2();
	delete bp;
	delete b2p;
	return 0;
}