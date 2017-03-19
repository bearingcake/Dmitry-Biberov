#include <iostream>
using namespace std;

class Sum
{
private:
    int x,y;
public:
    void getxy()
    {
        cin>>x;
        cin>>y;
    }
    int sumxy()
    {
        return x+y;
    }
};
