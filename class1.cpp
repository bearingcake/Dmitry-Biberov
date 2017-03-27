#include <iostream>
using namespace std;

class date
{
private:
    int day, month, year;
public:
    void setDate()
    {
        cout << "Day:" << endl;
        cin >> day;
        cout << "Month:" << endl;
        cin >> month;
        cout << "Year:" << endl;
        cin >> year;
    };
    void getDate()
    {
        cout << "Date: " << day << "." << month << "." << year << endl;
    };
};
