#include <iostream>

using namespace std

class Item
{
private:
    unsigned int durability, attack, defence, damage, updurability, upattack, updefence;
    char name[20];
public:
    void setitem()
    {
        cin >> name >> durability >> attack >> defence;
    };
    void getitemdamage(damage)
    {
        durability = durability - damage;
    };
    void upgradeitem(updurability, upattack, updefence)
    {
        durability = durability + updurability;
        attack = attack + upattack;
        defence = defence + updefence;
    };
};
