#include<iostream>
using namespace std;

class Number{
    int a;
    public:
    Number(){
        a=0;
    }
    // When no copy constructor is found, Compiler supplies its own copy constructor
    Number(Number &obj){
        cout<<"Copy Constructor Called!!!"<<endl;
        a=obj.a;
    }
    Number(int num){
        a=num;
    }
    void display(){
        cout<<"The number in this object is "<< a <<endl;
    }

};

int main(){
    Number x,y,z(45),z2;
    x.display();
    y.display();
    z.display();
    Number z1(x);
    z1.display();

    z2=z; //copy cosntructor is not invoked here
    z2.display();
    Number z3= z; //here the copy constructor is invoked
    z3.display();
    /*When the objects are defined in advance and then assigned a value/object to it 
        then it will only hold the value and copy constructor is not invoked whereas 
        objects are defined and inline assgined a value/object then it invokes copy constructor*/

return 0;
}