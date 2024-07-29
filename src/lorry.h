#pragma once
#include <src/car.h>
#include <string>

// производный класс Lorry (грузовик)
class Lorry : public Car
{
protected:
    //грузоподъемность
    int carrying_;

public:
    //конструктор по умолчанию
    Lorry() : Car()
    {
    }

    //конструктор с параметрами
    Lorry(const std::string &brand, int cylinder, int power, int carrying) : Car(brand, cylinder, power), carrying_(carrying)
    {
    }

    Lorry(const Lorry &lorry): Car(lorry.brand_, lorry.cylinder_, lorry.power_), carrying_(lorry.carrying_)
    {
    }

    // геттеры и сеттеры

    int getCarrying() const;

    void setCarrying(int carrying);

    //деструктор
    ~Lorry()
    {
    }
};