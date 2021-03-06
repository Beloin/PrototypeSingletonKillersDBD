//
// Created by beloin on 14/03/2022.
//

#include <iostream>
#include "string"
#include "killer/Weapon.h"
#include "killer/KillerProto.h"
#include "killer/KillerHolder.h"

using namespace std;

void setup_default_killers(){
    auto *wp1 = new Weapon("Machete", "Silver", 1.0, 20);
    auto *wp2 = new Weapon("Big Hammer", "Silver and Bloody", 1.0, 20);

    auto *trapper = new KillerProto("Trapper", "Ugly chef's outfit", 5.2, wp1);
    auto *billy = new KillerProto("Hill Billy", "Farmers clothes", 5.4, wp2);

    KillerHolder *holder = KillerHolder::Instance();
    holder->addKiller(trapper);
    holder->addKiller(billy);
}

void configure_killer(int choice, KillerProto*killer){
    float if_n;
    string to_print = "Write your new value: ";
    string value;
    cout << to_print;
    getline(cin, value);
    switch (choice) {
        case 1:
            killer->setName(value);
            break;
        case 2:
            killer->setOutfit(value);
            break;
        case 3:
            killer->getWeapon()->setName(value);
            break;
        case 4:
            if_n = stof(value);
            killer->setSpeed(if_n);
            break;
        default:
            break;
    }
}

void configure_new_killer(){
    cout << "Create your Killer from a base Killer:\n";
    cout << "Available Killers:\n";
    KillerHolder *holder = KillerHolder::Instance();

    for (int i = 0; i < holder->get_current_size(); ++i) {
        cout << i << " - " << holder->getKiller(i)->getName() << "\n";
    }
    string choose;
    getline(cin, choose);
    int choice = stoi(choose);

    auto chosed_killer = holder->getKiller(choice)->clone();

    cout << chosed_killer->getName() <<" specs: \n";
    cout << chosed_killer->toString();
    cout << "\n";
    while (1){
        cout << "Choose what you want change:\n";
        cout << "1 - Name\n";
        cout << "2 - Outfit\n";
        cout << "3 - Weapon\n";
        cout << "4 - Speed\n";
        cout << "0 - Exit Killer edition.\n";

        cout << "Obs: For Weapon you can only give a new Name.\n";
        getline(cin, choose);
        choice = stoi(choose);

        if (choice == 0) break;
        configure_killer(choice, chosed_killer);
    }

    cout << "\nYour new Updated Killer:\n";
    cout << chosed_killer->toString();
}

int main(){
    setup_default_killers();
    configure_new_killer();
    return 0;
}