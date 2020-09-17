//member initializer list
#include<iostream>

class Example
{
public:
    const int cval;
    int value1;
    int value2;
    int value3;
    
   Example(int v1, int v2, int v3) :cval{v1},value1{v1},value2{v2},value3{v3}
    {
       
    }
};
int main()
{
    Example obj(1,2,'A');
    std::cout << obj.value1<<std::endl;
    std::cout << obj.value2 << std::endl;
    std::cout << obj.value3 << std::endl;
    return 0;
}