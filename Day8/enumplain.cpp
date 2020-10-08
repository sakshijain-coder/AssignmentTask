#include<iostream>

enum color1{orange,pink,brown};
 
//enum color1 { red, yellow, black, white };			//throw error,  Defining color1 with same values

int plainmain(){
	
	enum color { red, yellow, black, white };
	
	// this will throw error 
	int red = 10;

	enum color c = yellow;
	
	int i = red;
	
	// it will return true as both have value 0 
   // which should not be the case actually 
	if(c == pink) {
		std::cout << i << std::endl;
	}
	
	return 0;
}
