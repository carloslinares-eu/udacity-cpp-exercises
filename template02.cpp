//
// Created by Carlos Linares on 22.05.2023.
//
#include <cassert>

template <typename parameter_type> parameter_type Max (parameter_type a, parameter_type b){
    return a > b ? a : b;
}

int main() {
    assert(Max(10, 50) == 50);
    assert(Max(5.7, 1.436246) == 5.7);
}