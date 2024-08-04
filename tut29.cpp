/*Constructors */
// constructors is a special member function with same name of the class
// it is used to initialize the objects of its class
// it is automatically invoked whenever an object is created
#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(void); // constructor declaration
    /*while defining a constructor function then it doesn't matter for the return type of the*/
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
Complex::Complex(void)// this is a default constructor which takes no parameter
{
    a = 10;
    b = 1000000;
}
int main()
{
    Complex c;
    c.printNumber();
    return 0;
}

/*Characteristics of constructor:
1) it should be declared in the public section of the class
2) they are automatically invoked whenever the objects are created
3) they cannot return values and do not have return types
4) it can have dfault arguments
5) we cannot refer to thier addresses*/