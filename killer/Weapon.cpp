//
// Created by beloin on 14/03/2022.
//

#include "Weapon.h"

Weapon *Weapon::clone() {
    return new Weapon(name, main_color, damage_multiplier, damage);
}

const string &Weapon::getName() const {
    return name;
}

void Weapon::setName(const string &name) {
    Weapon::name = name;
}

const string &Weapon::getMainColor() const {
    return main_color;
}

void Weapon::setMainColor(const string &mainColor) {
    main_color = mainColor;
}

float Weapon::getDamageMultiplier() const {
    return damage_multiplier;
}

void Weapon::setDamageMultiplier(float damageMultiplier) {
    damage_multiplier = damageMultiplier;
}

int Weapon::getDamage() const {
    return damage;
}

void Weapon::setDamage(int damage) {
    Weapon::damage = damage;
}

Weapon::Weapon(const string &name, const string &mc, float dmm, int dm) {
    this->name = name;
    this->main_color = mc;
    this->damage_multiplier = dmm;
    this->damage = dm;
}
