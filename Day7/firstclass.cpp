#include<iostream>
#include"myheader.h"
extern int i;   //static variable in another file...
static int a = 20;
static int sum(int a, int b){
	return a + b + 10;
}
class Base
{
  private:
    int a = 7;
    int b = 2;
    int c = 3;
  public:
     void print(){
      std::cout << "value of a:" <<a << std::endl ;
      }
};
int main(){

	Base b1;
	/*int* ptr = (int*)&b1;
	std::cout << *ptr << std::endl;
	std::cout << *(ptr+1);
	std::cout << "Base size is:";
	std::cout << sizeof(b1)<<std::endl;
	b1.print();
	std::cout << i<<std::endl<<a;*/
	std::cout <<add() << std::endl;
 	return 0;
}
