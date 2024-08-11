/* Default constructor is defining a empty constructor in side the class method*/
#include<iostream>
using namespace std;

class BankDeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;
    public: 
        BankDeposit(){} //This line should be there or else we can't create an empty object in the main part
        BankDeposit(int p,int y, int r){}
        BankDeposit(int p,int y, float r){}

};
int main(){

return 0;
}