#include<iostream>
#include<cstring>
class Base
{
public:
	int size;
	char* str;
	Base(const char* str1)
	{
		size = strlen(str1);
		str = new char[size + 1];
	//	strcpy(str, str1);
		
		
	}
	
	
	~Base() {
		delete str;
	}
};
int main()
{
	Base base("anu");
	Base base1 = base; //shallow copy ..default copy constructor.. 
	std::cout << base.str << std::endl;
	std::cout << base1.str << std::endl;
}