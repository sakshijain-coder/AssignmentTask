#include<iostream>
int main()
{
	/*int num = 8;
	char* ptr = (char*)&num;
	std::cout << *ptr; //it will search corresponding character of this interger which is line feed.
	void *vptr = &num;
	//std::cout << *vptr; //error
	std::cout << *(int*)vptr;*/

	/* int cons_num = 10;
	 const int* ptr; //pointer to a constant ,it can point to anything but the thing it points to cannot be changed.
	 ptr = &cons_num;
	 //*ptr = 12;//error*/
	/*
	int num1 = 10;
	int num2 = 20;
	int* const ptr = &num1; //constant pointer 
	ptr = &num2; //error,we can't reassign.
	*/
	int num1 = 1;
	int num2 = 2;
	const int* const ptr = &num2;//constant pointer to a constant object.
	ptr = &num2;//error
	*ptr = 20;//error
}