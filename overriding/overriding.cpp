//
// Created by Carlos Linares on 22.05.2023.
//
#include <cassert>
#include <string>

class Animal {
public:
    [[nodiscard]] virtual std::string Talk() const = 0;
};

class Dog : public Animal{
public:
    [[nodiscard]] std::string Talk() const override {return "Woof";}
};

int main() {
    Dog dog;
    assert(dog.Talk() == "Woof");
}