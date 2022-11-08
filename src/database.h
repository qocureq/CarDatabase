#ifndef CAR_DATABASE_DATABASE_H
#define CAR_DATABASE_DATABASE_H
#include "car.h"
#include "vector"
class Database {
public:
    void add(const Car & c);
    Car getCar(unsigned int index) const;
    Car& getCar(unsigned int index);
    void removeCar(unsigned int index);
    int getCarCount() const;
    std::string getContent();
    void printDatabase() const;
    Car operator[] (unsigned int index) const;

    Car & operator[] (unsigned int index);

private:
    int _carCount = 0;
    std::vector<Car> _cars;
};


#endif //CAR_DATABASE_DATABASE_H
