#include "database.h"
#include <iostream>

void Database::add(const Car &c)
{
    this->_cars.push_back(c);
    this->_carCount++;
}

Car Database::getCar(unsigned int index) const
{
    // TODO: add exception if index doesn't exist
    return this->_cars.at(index);
}

Car &Database::getCar(unsigned int index)
{
    return this->_cars.at(index);
}

int Database::getCarCount() const
{
    return this->_carCount;
}

void Database::removeCar(unsigned int index)
{
    this->_carCount--;
    this->_cars.erase(this->_cars.begin() + index);
}

std::string Database::getContent() const {
    std::string buffer;

    if(this->_carCount == 0)
        buffer += "Database is empty!\n";
    else
        for(auto car : _cars)
            buffer += car.getCarData();

    return buffer;
}

void Database::printDatabase() const
{
    std::cout << getContent();
}

std::string Database::getContentByBrand(const std::string& brand) const
{
    std::string buffer;
    for(auto car : _cars)
        if(car.getBrand() == brand)
            buffer += car.getCarData();

    if (buffer.empty())
        return ("No " + brand + " cars in database!");

    return buffer;
}

void Database::printDatabaseByBrand(const std::string& brand) const
{
    std::cout << getContentByBrand(brand);
}

std::string Database::getContentByModel(const std::string &model) const
{
    std::string buffer;
    for(auto car : _cars)
        if(car.getModel() == model)
            buffer += car.getCarData();

    if (buffer.empty())
        return ("No " + model + " cars in database!");

    return buffer;
}

void Database::printDatabaseByModel(const std::string& model) const
{
    std::cout << getContentByBrand(model);
}

std::string Database::getContentByColor(const std::string &color) const
{
    std::string buffer;
    for(auto car : _cars)
        if(car.getColor() == color)
            buffer += car.getCarData();

    if (buffer.empty())
        return ("No " + color + " cars in database!");

    return buffer;
}

void Database::printDatabaseByColor(const std::string &color) const
{
    std::cout << getContentByModel(color);
}

std::pair<Car, int> Database::getCarWithMaxPower() const  //TODO: implement check for empty database
{
    int power{};
    int count{};
    Car resultCar;

    for(auto& car : _cars)
    {
        if(car.getEnginePower() > power)
        {
            power = car.getEnginePower();
            resultCar = car;
            count = 1;
        }
        else if(car.getEnginePower() == power)
            count++;
    }

    std::pair<Car, int> result (resultCar,count);
    return result;
}

void Database::printCarWithMaxPower() const
{
    std::pair<Car, int> resultPair(getCarWithMaxPower());
    Car *resultCar;
    *resultCar = resultPair.first;

    if(resultPair.second > 1)
        std::cout << "Found " << resultPair.second << " cars with " << resultCar->getEnginePower() << " horsepower!" << std::endl;

    std::cout << resultCar->getCarData();
}

std::pair<Car, int> Database::getCarWithMinPower() const   //TODO: implement check for empty database
{
    int power{};
    int count{};
    Car resultCar;

    for(auto& car : _cars)
    {
        if(car.getEnginePower() < power || power == 0)
        {
            power = car.getEnginePower();
            resultCar = car;
            count = 1;
        }
        else if(car.getEnginePower() == power)
            count++;
    }

    std::pair<Car, int> result (resultCar,count);
    return result;
}

void Database::printCarWithMinPower() const
{
    std::pair<Car, int> resultPair(getCarWithMinPower());
    Car *resultCar;
    *resultCar = resultPair.first;

    if(resultPair.second > 1)
        std::cout << "Found " << resultPair.second << " cars with " << resultCar->getEnginePower() << " horsepower!" << std::endl;

    std::cout << resultCar->getCarData();
}

Car Database::operator[](unsigned int index) const { return this->getCar(index); }

Car& Database::operator[](unsigned int index) { return this->getCar(index); }
