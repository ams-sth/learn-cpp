#include <iostream>

using namespace std;

void printHelloWorld()
{
    cout << "Hello World !" << endl;
}

int main()
{
    printHelloWorld();
    return 0;
}

// Note 1: std is a standard library that contains cout, endl etc.
// Note 2: If  using namespace std is not defined, cout and endl should have std:: as prefix.
