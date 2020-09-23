#include<iostream>
class Orange;
class Apple
{
public:
	operator Orange() const; ///convert apple to orange
};
class Orange
{
public:
	Orange(Apple); //convert apple to orange
};
void fruits(Orange){}
int tcamain()
{
	Apple a;
	
	//!fruits(a); //Ambigious Conversion
	return 0;
}