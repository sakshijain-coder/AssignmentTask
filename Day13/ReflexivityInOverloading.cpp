#include<iostream>
using namespace std;
class Number
{
	int i;
	public:
		Number(int ii=0):i(ii){}
		const Number operator+(const Number& n) const
		{
			return Number(i + n.i);
		}
		int getNumber()
		{
			return i;
		}
		friend const Number operator-(const Number&, const Number&);
};
const Number operator-(const Number& n1, const Number& n2)
{
	return Number(n1.i - n2.i);
}
int riomain()
{
	Number num1(30),num2(25);
	num1 + num2;
	num1 + 1;   // 1 will be convert into Number
	//! 1 + num1;  // 1st aggument not of type Number
	num1 - num2;
	num1 - 1; //2nd argu converted to  number
	Number numsub=100 - num1; //1st argu converted to number
	cout << numsub.getNumber();
	//100 - 20;
	//cout << (100-20).getNumber();
	return 0;
}