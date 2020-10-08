#include<iostream>
class A {
public:
    int a;
    A() {

        std::cout << "construction of A"<<std::endl;
    }
    A(int num) {
        std::cout << "construction of A:" <<num<< std::endl;
    }
    void f1() { std::cout << "f1()"<<std::endl; }
   
};

class B : public virtual  A {
public:
    B() {
        std::cout << "construction of B" << std::endl;
    }
    B(int num):A(num) {
        std::cout << "construction of B:" <<num<< std::endl;
    }
    void f2() {
        std::cout << "f2()" << std::endl;
    }
};

class C : public virtual A {
public:
    C() {
        std::cout << "construction of C" << std::endl;
    }
    void f3()
    {
        std::cout << "f3()" << std::endl;
    }
    void f1()
    {
        std::cout << "B::f1()" << std::endl;
    }
};
class E : public virtual A {
public:
    E() {
        std::cout << "construction of E" << std::endl;
    }
    void f3()
    {
        std::cout << "f3()" << std::endl;
    }
    void f1()
    {
        std::cout << "B::f1()" << std::endl;
    }
};

class D : public C, public B,public E {
public:
    D(int str):A(str) {
        std::cout << "construction of D" << std::endl;
    }
    void f4()
    {
        std::cout << "f4()" << std::endl;
    }
   
};

int main()
{
    D d_object(1);                    // object creation of class D
    B b_object;
    C c_object;
   
    d_object.a = 10;
    std::cout << "value of a is:" << d_object.a;

   return 0;
}
