#include <iostream>

using namespace std

class Character
{
private:
    unsigned int health, uphealth, attack, defence, mana, upmana, damage, spellcost, itemattack, itemdefence;
    char name[20];
public:
    void setcharacter()
    {
        cin >> name >> health >> attack >> defence;
    };
    void getcharacterdamage(damage)
    {
        health = health - damage;
    };
    void createspell(spellcost)
    {
        mana = mana - spellcost;
    };
    void characterlevelup (upheath, upmana)
    {
        health = health + uphealth;
        mana = mana + upmana;
    };
    void pickupitem(itemattack, itemdefence)
    {
        attack = attack + itemattack;
        defence = defence + itemdefence;
    };

};
