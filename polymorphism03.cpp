//
// Created by Carlos Linares on 22.05.2023.
//
#include <cassert>
#include <cmath>

const float pi = 3.14159;

class Shape{
public:
    virtual float Area() = 0;
    virtual float Perimeter() = 0;
};

class Rectangle : public Shape{
public:
    Rectangle(float input_width, float input_height) : width(input_width), height(input_height) {};
    float Area() override{return width * height;}
    float Perimeter() override{return 2 * width + 2 * height;}
private:
    float width;
    float height;
};

class Circle : public Shape{
public:
    explicit Circle(float input_radius) : radius(input_radius){};
    float Area() override{return pi * float(pow(radius, 2));};
    float Perimeter() override{return 2 * pi * radius;};
private:
    float radius;
};


// Test in main()
int main() {
    double epsilon = 0.1; // useful for floating point equality

    // Test circle
    Circle circle(12.31);
    assert(abs(circle.Perimeter() - 77.35) < epsilon);
    assert(abs(circle.Area() - 476.06) < epsilon);

    // Test rectangle
    Rectangle rectangle(10, 6);
    assert(rectangle.Perimeter() == 32);
    assert(rectangle.Area() == 60);
}