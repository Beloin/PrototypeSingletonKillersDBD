//
// Created by beloin on 14/03/2022.
//

#ifndef PROTO_SINGLETON_CPP_KILLERPROTO_H
#define PROTO_SINGLETON_CPP_KILLERPROTO_H


#include <string>
#include "IPrototype.h"
#include "Weapon.h"

using namespace std;

class KillerProto : public IPrototype {

public:
    KillerProto(const string &name, const string &outfit, float speed, Weapon *weapon);

public:
    KillerProto *clone() override;

private:
    string name;
    string outfit;
    float speed;
    Weapon *weapon;


public:
    const string &getName() const;

    void setName(const string &name);

    float getSpeed() const;

    void setSpeed(float speed);

    Weapon *getWeapon();

    void setWeapon(Weapon *weapon);

    const string &getOutfit() const;

    void setOutfit(const string &outfit);

    string toString();
};


#endif //PROTO_SINGLETON_CPP_KILLERPROTO_H
