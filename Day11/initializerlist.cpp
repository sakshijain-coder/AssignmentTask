#include<iostream>
struct myclass {
	
	int a1{ 10 }; //non static member initialization
	int b1{ 20 };
	myclass() = default;
	myclass(int, int) {
		std::cout << "first constructor\n";
	}
	myclass(std::initializer_list<int>) {
		std::cout << " constructor with list\n";
	}
	
};
int main() {
	myclass f;//default constructor
	std::initializer_list<int> li = {};
	myclass f1{ li };// initializer list ctor
	myclass f2(12, 2); //parametric ctor
	return 0;
}