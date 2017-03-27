#include <iostream>
using namespace std;

class PetShop
{
private:
    char kind[30], name[20], sex;
    int price, amount;
public:
    void setpet()
    {
        cout << "Kind: ";
        cin >> kind;
        cout << "Name: ";
        cin >> name;
        cout << "Sex: ";
        cin >> sex;
        cout << "Price: ";
        cin >> price;
        cout << "Amount: ";
        cin >> amount;
    };
    void getpet()
    {
        cout << "Kind: " << kind << endl << "Name: " << name << endl << "Sex: " << sex << endl << "Price: " << price << endl << "Amount: " << amount << endl;
    };

};
