//
// Created by Carlos Linares on 22.05.2023.
//
#include <string>
#include <cassert>

class Animal {
public:
    double age = 10;
};

class Pet {
public:
    std::string name = "Max";
};

// Dog derives from *both* Animal and Pet
class Dog : public Animal, public Pet {
public:
    std::string breed;
};

class Cat : public Animal, public Pet {
public:
    std::string color = "black";
};

int main()
{
    Cat cat;
    assert(cat.color == "black");
    assert(cat.age == 10);
    assert(cat.name == "Max");
}