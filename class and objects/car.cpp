#include <iostream>

using namespace std;

class Car {
    public: 
    //Attributes
    string color;

    //Methods
    void drive (){
        cout << "The color of car is " << color << endl;
    }
};

int main (){
    Car mycar;
    mycar.color= "red";
    mycar.drive();
    return 0;
}
