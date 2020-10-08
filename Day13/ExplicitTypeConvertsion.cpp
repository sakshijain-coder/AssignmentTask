#include<iostream>
using namespace std;
class Base
{
protected:
	int m_value;

public:
	Base(int value)
		: m_value(value)
	{
	}

	virtual ~Base() {}
};

class Derived : public Base
{
protected:
	std::string m_name;

public:
	Derived(int value, std::string name)
		: Base(value), m_name(name)
	{
	}

	const std::string& getName() const { return m_name; }
};

Base* getObject(bool bReturnDerived)
{
	if (bReturnDerived)
		return new Derived(1, "Apple");
	else
		return new Base(2);
}

int main() {
	/*int i1{ 10 };
	int i2{ 6 };
	float f((float)i1 / i2); //c-style casts
	*/

	/*char c{ 'a' };
	std::cout << c << ' ' << static_cast<int>(c) << '\n'; //static cast-a value of one type to a value of another type.
	cout << f<<endl;*/
	
	/*int i{ 65 };
	char ch = i;
	cout << ch<<endl;*/
	
/*	int i{ 48 };

	// explicit conversion from int to char
	char ch{ static_cast<char>(i) };*/
	
	/*int i{ 100 };
	i = i / 2.5;
	cout <<"i is"<< i;*/

	/*int i{ 100 };
	i = static_cast<int>(i / 2.5);*/


	/*Base* b = getObject(false);
	
	Derived* d = dynamic_cast<Derived*>(b); // use dynamic cast to convert Base pointer into Derived pointer
	if (d)
		std::cout << "The name of the Derived is: " << d->getName() << '\n';
	else
		std::cout << "null";

	delete b;*/
	/*const int x = 50;
	const int* y = &x;
	cout << "old value is" << *y << "\n";
	int* z = const_cast<int*>(y);
	*z = 100;
	cout << "new value is" << *y;*/


	int* p = new int(65);
	char* ch = reinterpret_cast<char*>(p);
	cout << *p << endl;
	cout << *ch << endl;
	cout << p << endl;
	cout << ch << endl;
	return 0;
}