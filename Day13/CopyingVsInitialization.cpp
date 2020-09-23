#include<iostream>
class Fi
{

};
class Fee {
public:
	Fee(int){
		std::cout << "int ctor"<<std::endl;
	}
	Fee(const Fi&){
		std::cout << "copy ctor" << std::endl;
	}
};
class Fo
{
int i;
public:
	Fo(int x=0):i(x){}
	operator Fee() const {
		return Fee(i);
	}
};
int cvimain()
{
	Fo fo;
	Fi fi;
	Fee fee = fi;
	
	return 0;
}