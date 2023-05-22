//
// Created by Carlos Linares on 22.05.2023.
//

#include <iostream>
class Human{};
class Dog{};
class Zebra{};

void hello(){std::cout << "Hello World!";}
void hello(Human human){std::cout << "Hello Human!";}
void hello(Dog dog){std::cout << "Hello Dog!";}
void hello(Zebra zebra){ std::cout << "Hello Zebra!";}

int main(){
    hello();
    hello(Human());
    hello(Dog());
    hello(Zebra());
};