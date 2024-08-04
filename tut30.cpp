// #include <iostream>
// using namespace std;

// class Complex
// {
//     int a, b;

// public:
//     Complex(int x, int y); // constructor declaration

//     void printNumber()
//     {
//         cout << "Your number is " << a << " + " << b << "i" << endl;
//     }
// };
// Complex::Complex(int x, int y) // this is a parameterized constructor as it takes 2 parameters
// {
//     a = x;
//     b = y;
// }
// int main()
// {
//     // Implicit call
//     Complex a(4, 6);
//     a.printNumber();

//     // Explicit call
//     Complex a1 = Complex(100, 800);
//     a1.printNumber();
//     return 0;
// }

#include <iostream>
#include <cmath>
using namespace std;
class Point
{
    int x, y;
    friend void distance(Point, Point);
    public:
    Point(int a, int b)
    {
        x = b;
        y = a;
    }
    void displayPoint(){
        cout<<"The point is ("<<x<<","<< y <<")"<<endl;
    }
    
};
void distance(Point p, Point q){
        int dist;
        int x_diff=(q.x-p.x);
        int y_diff=(q.y-p.y);

        dist= sqrt((pow(x_diff,2)+pow(y_diff,2)));
        cout<<dist<<endl;

    }

int main()
{
    Point p(1,1);
    Point r(3,4);
    Point s(5,7);
    p.displayPoint();
    Point q(2,9);
    q.displayPoint();
    distance(p,q);
    distance(p,p);
    distance(r,s);
    return 0;
}