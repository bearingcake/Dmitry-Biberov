#include <iostream>
using namespace std;

class time
{
private:
    unsigned short int hours;
    unsigned short int minutes;
public:
    void error()
    {
        if (hours > 23 | minutes > 59)
        {
            cout << endl << "Error!" << endl << endl;
            timeset();
        };
    };
    void timeset()
    {
        cout << "Hours: ";
        cin >> hours;
        cout << "Minutes: ";
        cin >> minutes;

        error();
    };
    void timeget()
    {
        cout << "Time: " << hours << ":" << minutes << endl;
    };

};
