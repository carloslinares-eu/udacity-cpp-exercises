//
// Created by Carlos Linares on 22.05.2023.
//
// Example solution for Rectangle and Square friend classes
#include <assert.h>


class Square{
    friend class Rectangle;
public:
    explicit Square(int input_side) : side(input_side){};
    // TODO: Add public constructor to Square, initialize side
private:
    int side;
};

class Rectangle{
    friend class Square;
public:
    explicit Rectangle (Square input_square): width(input_square.side), height(input_square.side), area(0){
        CalculateArea();
    };
    int get_area(){return area;}
private:
    int width;
    int height;
    int area;
    void CalculateArea(){
        area = width * height;
    };
};

// TODO: Define class Square as friend of Rectangle


// TODO: Update main() to pass the tests
int main()
{
    Square square(4);
    Rectangle rectangle(square);
    assert(rectangle.get_area() == 16);
}