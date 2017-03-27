#include <iostream>
using namespace std;

class Library
{
private:
    char booktitle[40], readername[40];
    unsigned int bookid, counter;
public:
    void setbook()
    {
        cout << "Book title: ";
        cin >> booktitle;
        cout << "Book ID: ";
        cin >> bookid;
        couner = 0;
        readername = "none";
    };
    void getbook()
    {
        cout << "Book title: " << booktitle << endl << "Book ID: " << bookid << endl << "Read: " << counter << " times" << endl << "Last reader: " << readername << endl;
    };
    void read()
    {
        cout << "Reader: ";
        cin >> readername;
        counter = counter + 1;
    };

};
