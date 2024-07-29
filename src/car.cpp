#include <src/car.h>


 int Car::count_ = 0;

const std::string &Car::getBrand() const
{
    return brand_;
}

void Car::setBrand(const std::string &name)
{
    brand_ = name;
}

int Car::getCylinder() const
{
    return cylinder_;
}

void Car::setCylinder(int cylinder)
{
    cylinder_ = cylinder;
}

int Car::getPower() const
{
    return power_;
}
void Car::setPower(int power)
{
    power_ = power;
}