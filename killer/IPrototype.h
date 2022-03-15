//
// Created by beloin on 14/03/2022.
//

#ifndef PROTO_SINGLETON_CPP_IPROTOTYPE_H
#define PROTO_SINGLETON_CPP_IPROTOTYPE_H


class IPrototype {
public:
    virtual IPrototype *clone() = 0;
};


#endif //PROTO_SINGLETON_CPP_IPROTOTYPE_H
