#pragma once
#include <string>


//Базовый класс
class Car
{
private:
    //счетчик объектов класса
    static int count_;

protected:
    //торговая_марка 
    std::string brand_;

    //число_цилиндров 
    int cylinder_;

    //мощность
    int power_;

public:
    //конструктор без параметров
    Car() : brand_("kalina"), cylinder_(8), power_(81)
    {
        // увеличиваем счетчик объектов
        ++count_;
    }

    //конструктор с параметрами
    Car(const std::string &brand, int cylinders, int power) : brand_(brand), cylinder_(cylinders), power_(power)
    {
        // увеличиваем счетчик объектов
        ++count_;
    }

    //конструктор копирования
    Car(const Car &car) : brand_(car.brand_), cylinder_(car.cylinder_), power_(car.power_)
    {
        // увеличиваем счетчик объектов
        ++count_;
    }

    // дружественная функция count
    friend int count(const Car& car);

    // методы для просмотра и установки полей данных (геттеры и сеттеры)

    const std::string &getBrand() const;

    void setBrand(const std::string &brand);

    int getCylinder() const;

    void setCylinder(int cylinder);

    int getPower() const;

    void setPower(int power);


    //деструктор
    ~Car()
    {
    }
};