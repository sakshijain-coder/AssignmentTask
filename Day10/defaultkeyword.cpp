#include<iostream>
class Person
{
public:
	int Id;
	std::string name;
	Person() = default;  //C++ 11 feature
	Person(int id, std::string name)
	{
		this->Id = id;
		this->name = name;
	}
};
int main()
{
	Person p;
}