#include "car.h"
#include <iostream>
#include <utility>

Car::Car(std::string brand, std::string model, std::string generation, std::string type, int productionYear,
         std::string color, float engineCapacity, int enginePower, std::string fuelType,int mileage, int price) {
    _brand = std::move(brand);
    _model = std::move(model);
    _generation = std::move(generation);
    _type = std::move(type);
    _productionYear = productionYear;
    _color = std::move(color);
    _engineCapacity = engineCapacity;
    _enginePower = enginePower;
    _fuelType = std::move(fuelType);
    _mileage = mileage;
    _price = price;
}

std::string Car::getCarData() const
{
    std::string buffer;
    buffer += ("\nBrand: " + _brand);
    buffer += ("\nModel: " + _model);
    if(!_generation.empty())
        buffer += ("\nGeneration: " + _generation);
    if(!_type.empty())
        buffer += ("\nType: " + _type);
    buffer += ("\nProduction Year: " + std::to_string(_productionYear));
    buffer += ("\nColor: " + _color);
    buffer += ("\nEngine Capacity: "  + std::to_string(_engineCapacity).substr(0, 3) +" L");
    buffer += ("\nEngine Power: " + std::to_string(_enginePower) + " HP");
    buffer += ("\nFuel Type: " + _fuelType);
    buffer += ("\nMileage: " + printWithCommas(_mileage) + " km");
    buffer += ("\nPrice: " + printWithCommas(_price) + " PLN");

    return buffer;
}

void Car::printData() const
{
    std::cout << getCarData();
}

std::string Car::printWithCommas(int n)
{
    std::string s;
    int count = 0;
    do
    {
        s.insert(0, 1, char('0' + n % 10));
        n /= 10;
        if (++count == 3 && n)
        {
            s.insert(0, 1, ',');
            count = 0;
        }
    } while (n);
    return s;
}

std::string Car::getBrand() const { return _brand; }

std::string Car::getModel() const { return _model; }

std::string Car::getColor() const { return _color; }

float Car::getEngineCapacity() const { return _engineCapacity; }

int Car::getPrice() const { return _price; }

int Car::getProductionYear() const { return _productionYear; }

int Car::getEnginePower() const { return _enginePower; }

int Car::getMileage() const { return _mileage; }

bool Car::operator==(const Car& obj) const
{
    return
            _brand == obj._brand
            && _model == obj._model
            && _generation == obj._generation
            && _type == obj._type
            && _productionYear == obj._productionYear
            && _color == obj._color
            && _engineCapacity == obj._engineCapacity
            &&_enginePower == obj._enginePower
            && _fuelType == obj._fuelType
            &&_mileage == obj._mileage
            && _price == obj._price;
}

std::ostream &operator<<(std::ostream &os, const Car& obj)
{
    os << obj.getCarData();
    return os;
}
