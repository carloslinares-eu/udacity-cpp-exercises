//
// Created by Carlos Linares on 22.05.2023.
//
#include <cassert>
#include <cmath>

constexpr float PI = 3.14159;

class VehicleModel{
public:
    virtual void Move(float velocity, float phi) = 0;
    float x = 0;
    float y = 0;
    float theta = 0;
};

class ParticleModel : public VehicleModel {
public:
    void Move(float velocity, float phi) override;
};



class BicycleModel : public ParticleModel{
public:
    void Move(float velocity, float phi) override;
private:
    float L = 1.3;
};

void ParticleModel::Move(float velocity, float phi)  {
    theta += phi;
    x += velocity * std::cos(theta);
    y += velocity * std::cos(theta);
}

void BicycleModel::Move(float velocity, float phi) {
    theta += velocity / L * std::tan(phi);
    x += velocity * std::cos(theta);
    y += velocity * std::cos(theta);
}

int main() {
    // Test function overriding
    ParticleModel particle;
    BicycleModel bicycle;
    particle.Move(10, PI / 9);
    bicycle.Move(10, PI / 9);
    assert(particle.x != bicycle.x);
    assert(particle.y != bicycle.y);
    assert(particle.theta != bicycle.theta);
}