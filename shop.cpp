#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop::setPrice(void)
{
    cout << "enter Id of your item:" << endl;
    cin >> itemId[counter];
    cout << "enter price of your item:" << endl;
    cin >> itemPrice[counter];
    counter++;
}
void Shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of the item with itemId" << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();
    int z;
    cout<<"Enter the number of Items:"<<endl;
    cin>>z;
    for (int i = 0; i < z; i++)
    {
        dukaan.setPrice();
        cout<<"****************"<<endl;
    }
    
    dukaan.displayPrice();

    return 0;
}