#include "car.h"

Car::Car() {
    this->_brand = nullptr;
    this->_model = nullptr;
    this->_type = nullptr;
    this->_generation = nullptr;
    this->_color = nullptr;
    this->_fuel = nullptr;
    this->_price = 0.0;
    this->_engineCapacity = 0.0;
    this->_productionYear = 0;
    this->_enginePower = 0;
}

Car::Car(std::string brand, std::string model, std::string type, std::string generation, int productionYear,
         std::string color, float engineCapacity, int enginePower, std::string fuel,int mileage, int price) {
    this->_brand = brand;
    this->_model = model;
    this->_type = type;
    this->_generation = generation;
    this->_productionYear = productionYear;
    this->_color = color;
    this->_engineCapacity = engineCapacity;
    this->_enginePower = enginePower;
    this->_fuel = fuel;
    this->_mileage = mileage;
    this->_price = price;
}
