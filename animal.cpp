//
// Created by Carlos Linares on 21.05.2023.
//
#include "string"

class Animal {
public:
    std::string color = "Red";
    std::string name = "Robert";
    int age = 10;
};

class Snake: protected Animal{
public:
    int length = 2;
    static void MakeSound() {
        printf("PSSSSS");
    }
};

class Cat: protected Animal{
    int height = 7;
public:
    static void MakeSound() {
        printf("Miau");
    }
};

int main() {
    Snake billy_the_snake;
    Cat robert_the_cat;

    robert_the_cat.MakeSound();

    return 0;
};
