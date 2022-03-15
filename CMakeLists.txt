cmake_minimum_required(VERSION 3.20)
project(proto_singleton_cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(proto_singleton_cpp
        main.cpp killer/IPrototype.h killer/KillerProto.cpp killer/KillerProto.h killer/Weapon.cpp killer/Weapon.h)
