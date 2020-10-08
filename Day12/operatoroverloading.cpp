#include <iostream>
class Integer
{
private:
	long i;
	Integer* This()
	{
		return this;
	}

public:
	Integer(long ll = 0) :i(ll) {}

	//for unary operator-
	friend const Integer& operator+(const Integer& a);
	friend const Integer& operator-(const Integer& a);
	friend const Integer& operator~(const Integer& a);
	const int operator++() {return ++i;}
	const int operator++(int) {return i++;}
	int getInteger() const {return i;}
	//binary operator
	friend const Integer& operator+(const Integer& a, const Integer& b) {
		return Integer(a.i + b.i);
	}
	friend const Integer& operator-(const Integer& a, const Integer& b) {
		return Integer(a.i - b.i);
	}
	friend const Integer& operator*(const Integer& a, const Integer& b) {
		return Integer(a.i * b.i);
	}
};

const Integer& operator+(const Integer& a)
{
	std::cout << "+Integer\n";
	return a;
}
const Integer& operator-(const Integer& a)
{
	std::cout << "-Integer\n";
	return Integer(-a.i);
}
const Integer& operator~(const Integer& a)
{
	std::cout << "-Integer\n";
	return Integer(~a.i);
}


int main()
{
	Integer in{ 5 };
	//Integer in1=+in;
	//Integer in2=-in;
	//int i=in++;
	Integer in1{ 1 };
	Integer in2{ 2 };
	Integer insum = in1 + in2;
	std::cout << insum.getInteger() << std::endl;
	insum = in1 - in2;
	std::cout << insum.getInteger() << std::endl;
	insum = in1 * in2;
	std::cout << insum.getInteger() << std::endl;
	return 0;
}
