//const-Any variable that should not be modifiable after initialization and
//whose initializer is known at compile - time should be declared as constexpr.
//constexpr-Any variable that should not be modifiable after initialization and 
//whose initializer is not known at compile - time should be declared as const.

#include<iostream>
constexpr double square(double x) {
	return x * x;
}
int constmain() {
	const int c_var = 10; //compile time constant
	int var = 10;
	const int varc = var; // runtime constant
	
	constexpr double max1 = 1.4 * square(c_var);
	const double copymax1 = max1;
	//constexpr double max1 = 1.4 * square(varc);
	const double max2 = 1.4 * square(var); //okay,evaluated at run time.
	std::cout << max1;
		return 0;
}
