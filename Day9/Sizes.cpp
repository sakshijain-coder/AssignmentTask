#include<iostream>
class Novirtual
{
	int a;
public:void x(){}
	  int i() { return 1; }
};
class Onevirtual {
	
public :
	virtual void x(){}
	int i() { return 1; }
};
class Twovirtual {
	
public:
	virtual void x() {}
	virtual int i() { return 1; }
};
int vmain()
{
	std::cout << "size of no virtual class:" << sizeof(Novirtual) << std::endl;
	std::cout << "size of one virtual class:" << sizeof(Onevirtual) << std::endl;
	std::cout << "size of two virtual class:" << sizeof(Twovirtual) << std::endl;
	return 0;
}