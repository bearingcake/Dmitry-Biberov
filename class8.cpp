#include <iostream>

using namespace std

class Spell
{
private:
    int manacost, power, uppower, lesscost;
    char[20] name;
public:
    void setspell()
    {
        cin >> name >> power >> manacost;
    };
    void upgradespell(uppower, lesscost)
    {
        power = power + uppower;
        manacost = manacost - lesscost;
    };
};
