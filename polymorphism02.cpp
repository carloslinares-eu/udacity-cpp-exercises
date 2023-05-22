//
// Created by Carlos Linares on 22.05.2023.
//
#include <assert.h>

class Point{
public:
    Point(int input_x, int input_y) : x(input_x), y(input_y){};
    int x;
    int y;
};

Point operator+(Point input_point_01, Point input_point_02 ){
    int output_x = input_point_01.x + input_point_02.x;
    int output_y = input_point_01.y + input_point_02.y;
    return {output_x, output_y};
}

// TODO: Define + operator overload
// TODO: Declare attributes x and y

// Test in main()
int main() {
    Point p1(10, 5), p2(2, 4);
    Point p3 = p1 + p2; // An example call to "operator +";
    assert(p3.x == p1.x + p2.x);
    assert(p3.y == p1.y + p2.y);
}