#include<iostream>
using namespace std;

int sum(int a,int b);
int main(){
    int a,b;
    cout<<"Enter values of a and b :"<<endl;
    cin>>a>>b;
    cout<<"The sum of "<<a<<"and "<<b<<" is "<<sum(a,b)<<endl;
    return 0;
}

int sum(int a, int b){
    int c=a+b;
    return c;
}