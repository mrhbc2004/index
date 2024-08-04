// #include<iostream>
// using namespace std;
// class Complex{
//     int a,b;
//     public:
//     Complex(int x, int y){
//         a= x;
//         b=y;
//     }
//     Complex (int x){
//         a=x;
//         b=0;
//     }// like this if we create more and more constructors then it will get overloaded and its called constructor overloading
    
//     void printNumber()
//     {
//         cout << "Your number is " << a << " + " << b << "i" << endl;
//     }
// };

// int main(){
// Complex c1(4,6);
// c1.printNumber();
// Complex c2(5);
// c2.printNumber();

// return 0;
// }

// constructors with default arguments 
#include<iostream>
using namespace std;

class Simple{
    int data1;
    int data2;
    public:
    Simple(int a, int b=9){
        data1=a;
        data2=b;
    }
    void print();
};
void Simple:: print(){
    cout<< "the values of data1 and data2 are :"<< data1<< "and "<<data2<<endl;
}
int main(){
Simple s(1,4);

s.print();
Simple t(1);

t.print();

return 0;
}