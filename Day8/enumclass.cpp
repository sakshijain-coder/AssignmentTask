#include <iostream> 
using namespace std;

int main()
{

    enum class Color {
        Red,
        Green,
        Blue
    };
    enum class Color2 {
        Red,
        Black,
        White
    };
   

   
    // no error 
    int Green = 10;

   
    Color x = Color::Green;

   //comparison 
    if (x == Color::Red)
        cout << "It's Red\n";
    else
        cout << "It's not Red\n";

   

    

    cout << int(x);

    return 0;
}