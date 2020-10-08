#include<iostream>
class Person
{
	std::string pname;
public:
	Person(const std::string& pername):pname(pername){}
	virtual std::string name() const { return pname; }
	virtual std::string  speak() const { return "speak"; }
};
class Student :public Person
{
	std::string sname;
public:
	Student(const std::string& stuname) :Person(stuname) {}
	virtual std::string sit() const {
		return Person::name() + "sits";
	}
	virtual std::string  speak() const {
		return Person::name() + "says 'hi'";

	}
};
void display(Person* p)
{
	
}
int addingvirmain()
{
	
	Person* p[] = { new Person("sakshi"),new Student("Anu") };
	std::cout << "p[0]->speak()=" << p[0]->speak() << std::endl;
	std::cout << "p[1]->speak()=" << p[1]->speak() << std::endl;
	std::cout << "p[1]->sit()=" << ((Student*)p[1])->sit() << std::endl; //cast into student then we can access sit function.
	return 0;
}