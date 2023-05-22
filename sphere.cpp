//
// Created by Carlos Linares on 14.05.2023.
//
#include <cassert>
#include <stdexcept>
#include <cmath>

class Sphere {
public:
    explicit Sphere(float input_radius);

    [[nodiscard]] double get_volume() const;
    [[nodiscard]] float get_radius() const;

private:
    double volume;
    float radius;
    void calculate_volume();

};

Sphere::Sphere(float input_radius) : radius (input_radius), volume(0.0){
    if (radius <= 0) throw std::invalid_argument("Radius must be positive");
    calculate_volume();
}

void Sphere::calculate_volume()  {
    double sphere_volume_factor = 4.0/3.0;
    volume = sphere_volume_factor * std::numbers::pi * pow(radius, 3);
}

float Sphere::get_radius() const {return radius;}
double Sphere::get_volume() const {return volume;}

int main(){
    Sphere valid_sphere(5);
    assert(valid_sphere.get_radius() == 5);
    double expected_volume = 523.59;
    double error_in_volume = abs(valid_sphere.get_volume()  - expected_volume);
    assert(error_in_volume < 0.1);

    bool caught = false;
    try {
        Sphere invalid_sphere(-2);
    }
    catch (...) {
        caught = true;
    }
    assert(caught);
};