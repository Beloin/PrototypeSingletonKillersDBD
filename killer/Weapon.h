//
// Created by beloin on 14/03/2022.
//

#ifndef PROTO_SINGLETON_CPP_WEAPON_H
#define PROTO_SINGLETON_CPP_WEAPON_H


#include <string>
#include "IPrototype.h"
using namespace std;

class Weapon : IPrototype {

public:
    Weapon *clone() override;
    Weapon(const string &name, const string &mc, float dmm, int dm);

private:
    string name;
    string main_color;
    float damage_multiplier;
    int damage;


public:
    const string &getName() const;

    void setName(const string &name);

    const string &getMainColor() const;

    void setMainColor(const string &mainColor);

    float getDamageMultiplier() const;

    void setDamageMultiplier(float damageMultiplier);

    int getDamage() const;

    void setDamage(int damage);
};


#endif //PROTO_SINGLETON_CPP_WEAPON_H
