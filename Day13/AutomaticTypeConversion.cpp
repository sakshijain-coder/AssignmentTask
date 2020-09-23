#include<iostream>
class Orange;
class Apple {
	 operator Orange& ();
};
class Orange {

};
void fruits(Orange& e){
}
int main() {
	Apple apple;
	fruits(apple);
}