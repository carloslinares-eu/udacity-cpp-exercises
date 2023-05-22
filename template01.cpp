//
// Created by Carlos Linares on 22.05.2023.
//
#include <cassert>

template <typename Type> Type Product(Type a, Type b) {return a * b;}

int main() {
    assert(Product<int>(10, 2) == 20);
}