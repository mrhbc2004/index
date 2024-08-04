// friend functions
#include <iostream>
using namespace std;

// forward declaration
class Complex;

class Calculator
{
public:
    int a, b;
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    // individually declaring friend functions
    //  friend int Calculator:: sumRealComplex(Complex, Complex);
    //  friend int Calculator:: sumCompComplex(Complex, Complex);

    // aliter: decalring entire class as friends
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
int Calculator::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    int res, comp;
    Complex o1, o2;
    o1.setNumber(100, 4);
    o1.printNumber();

    o2.setNumber(500, 7);
    o2.printNumber();

    Calculator calc;
    res = calc.sumRealComplex(o1, o2);
    comp = calc.sumCompComplex(o1, o2);

    cout << "sum of the real numbers is " << res << endl;
    cout << "sum of the complex numbers is " << comp << endl;

    return 0;
}