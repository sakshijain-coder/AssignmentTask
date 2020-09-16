#include<iostream>
class Pet {
	std::string pname;
public:
	Pet(const std::string& name) :pname(name) {}
	virtual std::string name() const { return pname; }
	virtual std::string description() const { return "This is "+ pname; }
	
};
class Dog :public Pet
{
	std::string favactivity;
public:
	Dog(const std::string& name,const std::string& activity):
		Pet(name),favactivity(activity){}
	virtual std::string description() const { return Pet::name() + " likes to " + favactivity; }

};
void describe(Pet p)
{
	std::cout << p.description();
}
int  slicemain()
{
	Pet p("Alfred");
	Dog d("Fluffy", "sleep");
	describe(p);
	describe(d);
	return 0;
}