//
// Created by beloin on 19/03/2022.
//

#include "KillerHolder.h"
#include "string"

KillerProto *KillerHolder::getKiller(int index) {
    if (index < current_size) return pKillerProto[index];
    return nullptr;
}

KillerProto *KillerHolder::getKiller(string name) {
    for (int i = 0; i < current_size; ++i) {
        if (pKillerProto[i]->getName() == name)
            return pKillerProto[i];
    }
    return nullptr;
}

void KillerHolder::addKiller(KillerProto *killer) {
    int new_size = current_size + 1;
    if (new_size > max_size) {
        KillerProto** temp = (KillerProto**) malloc(max_size * sizeof(KillerProto));
        for (int i = 0; i < current_size; ++i) {
            temp[i] = pKillerProto[i];
        }
        max_size += 2;
        pKillerProto = (KillerProto**) malloc(max_size * sizeof (KillerProto*));
        for (int i = 0; i < current_size; ++i) {
            pKillerProto[i] = temp[i];
        }
        free(temp);
    }
    pKillerProto[current_size] = killer;
    current_size++;
}
