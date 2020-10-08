#include<iostream>
class After {
	
public:
	int aval;
	After(int val) :aval(val) {}
	const After& operator,(const After& a)
	{
		std::cout << "after::operator,()\n";
		return *this;
	}
};
class Before {
public:
	const Before& operator,(const Before& b)
	{
		std::cout << "before::operator,()\n";
		return b;
	}
};
int main()
{
	After a{ 2 }, b{3};
	int i=(a, b).aval;
	std::cout << i;
	Before c;
	1, c;
}