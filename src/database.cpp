#include "database.h"

void Database::add(const Car &c) {
    this->_cars.push_back(c);
    this->_carCount++;
}

Car Database::getCar(unsigned int index) {
    // TODO: add exception if index doesn't exist
    return this->_cars.at(index);
}

int Database::getCarCount() const {
    return this->_carCount;
}
