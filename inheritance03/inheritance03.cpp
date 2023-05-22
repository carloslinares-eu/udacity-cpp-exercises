//
// Created by Carlos Linares on 22.05.2023.
//
#include <cassert>

constexpr float pi = 3.14159;

class LineSegment {
public:
    float length;
    explicit LineSegment(float input_length) : length(input_length){}
};

class Circle{
public:
    LineSegment Radius;
    float Area;
    explicit Circle(LineSegment input_radius);
private:
    void CalculateArea (){
        Area = pi * Radius.length * Radius.length;
    }
};

Circle::Circle(LineSegment input_radius) : Radius(input_radius), Area(0.0) {
    CalculateArea();
}

int main()
{
    LineSegment radius {3};
    Circle circle(radius);
    assert(int(circle.Area) == 28);
}