#include<iostream>
std::string getString()
{
	return "anu";
}
int main() {
	int i = 10;
	int& ptr = i;
	int&& p = 10;
	std::string&& str{ "sakshi" };
	std::string&& str1 = getString();  //rvalue reference
	std::string& str2 = getString();  //error,bcz this is lvalue reference
	std::cout << ptr<<std::endl<<str<<std::endl<<str1;
	const std::string& str3{ "vikrant" };    
	std::cout<<
}
