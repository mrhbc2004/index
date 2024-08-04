#include<iostream>
using namespace std;

class Employee
{
    private:
        int a,b,c;
    public:
        int d,e;
    void setData(int a1,int b1, int c1);
    void getData(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        cout<<"the value of d is "<<d<<endl;
        cout<<"the value of e is "<<e<<endl;
    }

};

void Employee :: setData(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main(){
    Employee hari;
    // hari.a=34; 
    hari.d=34;
    hari.e=36;
    hari.setData(1,2,4);
    hari.getData();
return 0;
}