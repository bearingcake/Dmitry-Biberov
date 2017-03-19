#include <iostream>
using namespace std;

class BankAccount
{
private:
    char name[50];
    char number[20];
    int amount;
public:
    void setdata()
    {
        cout << "Name: ";
        cin >> name;
        cout << "Card Number: ";
        cin >> number;
        cout << "Amount of money: ";
        cin >> amount;
    };
    void getdata()
    {
        cout << "Name: " << name << endl;
        cout << "Card Number: " << number << endl;
        cout << "Amount of money: " << amount << endl;
    };
    void draw(int drawmoney)
    {
        amount = amount-drawmoney;
    };
    void put(int putmoney)
    {
        amount = amount+putmoney;
    };
};
