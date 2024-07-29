#include <src/car.h>
#include <src/lorry.h>
#include <iostream>

int count(const Car &car)
{
    return car.count_;
}

int main()
{
    Car subaru("Subaru Outback",6,245);

    std::cout << "Car: " << subaru.getBrand() << " power - " << subaru.getPower() << " cylinders - " << subaru.getCylinder() << std::endl;

    Lorry kamaz("Kamaz-740",8,440,14);

    std::cout << "Lorry: " << kamaz.getBrand() << " power - " << kamaz.getPower() << " cylinders - " << kamaz.getCylinder() << " carrying - " << kamaz.getCarrying() << std::endl;

    std::cout << "Number of cars - " << count(kamaz) << std::endl;

    return 0;
}