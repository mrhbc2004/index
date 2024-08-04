#include <iostream>
using namespace std;

/*the static variable is made as class variable and it counts the number of objects that has been done through
and it goes on counting without any problem and it gets incremented no matter how much objects u create*/
class Employee
{
    int id;
    static int count; // by default it is started with zero
public:
    void setData(void)
    {
        cout << "Enter the id:" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The value of id is " << id << " this is employee number" << count << endl;
    }
    // static member functions
    static void getCount(void)
    {
        cout << "The value of count is :" << count << endl;
        // cout<<id; // throws and error 
    }
};
// count is the static data member of class Employee
int Employee::count; // default value is zero, if u want to make any value as default u shud do it here.
int main()
{
    Employee harisha, raghu, afnan; // all three objects share count variable
    harisha.setData();
    harisha.getData();
    Employee::getCount();

    raghu.setData();
    raghu.getData();
    Employee::getCount();
    afnan.setData();
    afnan.getData();
    Employee::getCount();

    return 0;
}