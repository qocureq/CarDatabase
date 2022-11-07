#include "car.h"

#include <utility>

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
    this->_brand = std::move(brand);
    this->_model = std::move(model);
    this->_type = std::move(type);
    this->_generation = std::move(generation);
    this->_productionYear = productionYear;
    this->_color = std::move(color);
    this->_engineCapacity = engineCapacity;
    this->_enginePower = enginePower;
    this->_fuel = std::move(fuel);
    this->_mileage = mileage;
    this->_price = price;
}
