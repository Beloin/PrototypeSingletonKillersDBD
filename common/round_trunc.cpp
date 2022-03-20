//
// Created by beloin on 19/03/2022.
//

#include <cmath>
#include "round_trunc.h"
#include "string"

std::string round_truncate(float a, int d){
    std::string value;
    double whole;
    double frac = modf(a, &whole);
    value += std::to_string( (int) whole);
    auto temp = std::to_string(frac);
    if ((temp.length() - 2) >= d) {
        if (d > 0) value += ".";
        for (int i = 2; i < d + 2; ++i) {
            value += temp[i];
        }
    }
    return value;
}