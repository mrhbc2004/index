// #include <iostream>
// using namespace std;
// class Y;
// class X
// {
//     int data;

// public:
//     void setValue(int value)
//     {
//         data = value;
//     }
//     friend void add(X, Y);
// };
// class Y
// {
//     int num;

// public:
//     void setValue(int value)
//     {
//         num = value;
//     }
//     friend void add(X, Y);
// };
// void add(X o1, Y o2)
// {
//     cout << "summing data of X and Y objects gives me " << o1.data + o2.num;
// }

// int main()
// {
//     X a1;
//     a1.setValue(3);
//     Y b1; 
//     b1.setValue(5);
//     add(a1,b1);

//     return 0;
// }


#include<iostream>
using namespace std;
class c2;
class c1{
    int val;
    public:
    void inData(int a){
        val=a;
    }
    void display(){
        cout<< val <<endl;
    }
    friend void exchange(c1 &, c2 &);

};
class c2{
    int val2;
    public:
    void inData(int a){
        val2=a;
    }
    void display(){
        cout<< val2 <<endl;
    }
    friend void exchange(c1 &, c2 &);

};

void exchange(c1 &X, c2 &Y){
    int temp=X.val;
    X.val=Y.val2;
    Y.val2=temp;

}
int main(){
    c1 X;
    c2 Y;
    X.inData(66);
    cout<<"The value of X before swapping is ";
    X.display();
    Y.inData(55);
    cout<<"The value of Y before swapping is ";
    Y.display();
    exchange(X,Y);
    cout<<"The value of X after swapping is ";
    X.display();
    cout<<"The value of Y after swapping is ";
    Y.display();

return 0;
}