#include<iostream>
class Orange
{};
class Pear
{

};
class Apple {
public:
	operator Orange() const;
	operator Pear() const;
};
void eat(Orange)
{

}
void eat(Pear)
{

}
int tcmain() {
	Apple c;
	// eat(c); error:apple->Orange,apple->pear ?
	return 0;
}