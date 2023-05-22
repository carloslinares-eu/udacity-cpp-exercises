//
// Created by Carlos Linares on 22.05.2023.
//
#include <cassert>

// TODO: Declare Vehicle as the base class
class Vehicle{
public:
    int wheels;
    int seats;
};

// TODO: Derive Car from Vehicle
class Car: public Vehicle{
public:
    Car(){
        wheels = 4;
    }
    bool trunk;
};

// TODO: Derive Sedan from Car
class Sedan: public Car{
public:
    Sedan(){
        seats = 4;
        trunk = true;
    }
};

// TODO: Update main to pass the tests
int main() {
    Sedan sedan;
    assert(sedan.trunk == true);
    assert(sedan.seats == 4);
    assert(sedan.wheels == 4);
}