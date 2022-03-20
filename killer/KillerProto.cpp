//
// Created by beloin on 14/03/2022.
//

#include "KillerProto.h"
#include "iomanip"
#include "../common/round_trunc.h"

KillerProto *KillerProto::clone() {
    Weapon *wp_clone =  weapon->clone();
    return new KillerProto(name, outfit, speed, wp_clone);
}

const string &KillerProto::getName() const {
    return name;
}

void KillerProto::setName(const string &name) {
    KillerProto::name = name;
}

float KillerProto::getSpeed() const {
    return speed;
}

void KillerProto::setSpeed(float speed) {
    KillerProto::speed = speed;
}

Weapon *KillerProto::getWeapon() {
    return weapon;
}

void KillerProto::setWeapon(Weapon *weapon) {
    KillerProto::weapon = weapon;
}

const string &KillerProto::getOutfit() const {
    return outfit;
}

void KillerProto::setOutfit(const string &outfit) {
    KillerProto::outfit = outfit;
}

KillerProto::KillerProto(const string &name, const string &outfit, float speed, Weapon *weapon) : name(name),
                                                                                                        outfit(outfit),
                                                                                                        speed(speed),
                                                                                                        weapon(weapon) {}

string KillerProto::toString() {
    string value;
    value += " - Name: " + name + "\n";
    value += " - Outfit: " + outfit + "\n";
    value += " - Weapon:\n";
    value += "\t -> " + ("Name: " + weapon->getName()) + "\n";
    value += "\t -> " + ("Damage: " + to_string(weapon->getDamage())) + "\n";
    value += "\t -> " + ("Main Color: " + weapon->getMainColor()) + "\n";
    value += " - Speed: " + (round_truncate(speed, 2)) + "\n";
    return value;
}