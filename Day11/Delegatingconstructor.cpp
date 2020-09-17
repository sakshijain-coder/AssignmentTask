#include<iostream>
//Delegating constructor
//If you have multiple constructors that have the same functionality, use delegating constructors to avoid duplicate code.
class BaseExample
{
public:
    BaseExample()
    {
        std::cout << "default\n";
    }
    BaseExample(int value)
    {
              std::cout << "parametric with\n" << value;
    }
};
class Foo
{
public:
    int a;
    int b;
    BaseExample be;
    Foo(int value)
    {
       
        a = value;
    }

    Foo() :Foo(45)//be(13)//,a{2}  //error
    {
        //be = BaseExample(11);
        //Foo(45);
        //Foo(45) ;it will create a temp var and does nothing with it.       
    }
};
int main()
{
    Foo f;
    std::cout << f.a;
    return 0;
}