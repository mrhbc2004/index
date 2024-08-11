/*Destructor is a method in a class which destroys the constructors and frees the space for other objects*/
#include<iostream>
using namespace std;

/*Destructor doesn't take any arguments and doesn't return any value*/
int count=0;
class num{
    public:
    num(){
        count++;
        cout<<"This is the time when constructor is called for object number "<<count<<endl;
    }
    ~num(){
        cout<<"This is the time when destructor is called for object number"<<count<<endl;
        count--;
    }
};
int main(){
    cout<<"we are inside the main function"<<endl;
    cout<<"creating first object"<<endl;
    num n1;{
        cout<<"entering this block"<<endl;
        cout<<"creating two more objects"<<endl;
        num n2, n3;
        cout<<"exiting this block"<<endl;
    };
    //after executing all the statements in constructor of the class's object
    //destructor is called and the space used for constructor is destroyed 
    cout<<"Back to main"<<endl;
    return 0;
}