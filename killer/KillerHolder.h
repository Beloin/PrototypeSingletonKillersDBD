//
// Created by beloin on 19/03/2022.
//

#ifndef PROTO_SINGLETON_CPP_KILLERHOLDER_H
#define PROTO_SINGLETON_CPP_KILLERHOLDER_H


#include "KillerProto.h"
#include "string"
using namespace std;

class KillerHolder {

private:
    int max_size = 0;
    KillerProto** pKillerProto{};
    int current_size = 0;
    static KillerHolder *_instance;

protected:
    KillerHolder() = default;

public:
    static KillerHolder * Instance();
    KillerProto* getKiller(int index);
    KillerProto* getKiller(string name);
    void addKiller(KillerProto *killer);
    int get_current_size() const {
        return current_size;
    }
};


#endif //PROTO_SINGLETON_CPP_KILLERHOLDER_H
