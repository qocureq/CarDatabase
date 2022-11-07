#ifndef CAR_DATABASE_DATABASE_H
#define CAR_DATABASE_DATABASE_H
#include "car.h"
#include "vector"
class Database {
public:
    void add(const Car & c);
    Car getCar(unsigned int index);
    int getCarCount() const;
private:
    int _carCount;
    std::vector<Car> _cars;
};


#endif //CAR_DATABASE_DATABASE_H
