// Type your code here, or load an example.
#include<iostream>
class Base
{
public:
    virtual void printname()
    {
        std::cout << "Base"<<std::endl;
    }
  
};
class Derived :public Base
{
public:
    virtual void printname()
    {
        std::cout << "Derived"<<std::endl;
    }
   
};


int main()
{
   
    Base b;
    Derived d;
    Base* b1 = new Derived();
    b.printname();
    d.printname();
    b1->printname();
    return 0;
}