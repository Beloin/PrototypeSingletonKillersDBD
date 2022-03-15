//
// Created by beloin on 14/03/2022.
//

#include "KillerProto.h"

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

const Weapon &KillerProto::getWeapon() const {
    return *weapon;
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
