#ifndef CAR_DATABASE_DATABASE_H
#define CAR_DATABASE_DATABASE_H
#include "car.h"
#include <vector>

class Database {
public:
    void add(const Car & c);
    Car getCar(unsigned int index) const;
    Car& getCar(unsigned int index);
    void removeCar(unsigned int index);
    int getCarCount() const;
    std::string getContent() const;
    void printDatabase() const;
    std::string getContentByBrand(const std::string& brand) const;
    void printDatabaseByBrand(const std::string& brand) const;
    std::string getContentByModel(const std::string& model) const;
    void printDatabaseByModel(const std::string& model) const;
    std::string getContentByColor(const std::string& color) const;
    void printDatabaseByColor(const std::string& color) const;
    std::pair<Car, int> getCarWithMaxPower() const;
    void printCarWithMaxPower() const;
    std::pair<Car, int> getCarWithMinPower() const;
    void printCarWithMinPower() const;

    // TODO: more searching by more/less/within range of price/engine/production year/mileage

    // TODO: sorting by specific data

    Car operator[] (unsigned int index) const;
    Car & operator[] (unsigned int index);

private:
    int _carCount = 0;
    std::vector<Car> _cars;
};


#endif //CAR_DATABASE_DATABASE_H
