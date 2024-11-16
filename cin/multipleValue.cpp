#include <iostream>

using namespace std;

int main (){
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "The sum of" << num1 << "and" << num2 << "is"<< (num1 + num2) <<endl ;
    return 0;
}

// Note1: endl is an output stream and will not work with cin (character input)
/*Note2:  << concatenate :
            the string i.e. text written in ""  
            integer i.e. num1 and num2
            */ 