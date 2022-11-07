#ifndef CAR_DATABASE_CAR_H
#define CAR_DATABASE_CAR_H
#include <string>

class Car {
public:
    Car();
    Car(std::string brand, std::string model, std::string type, std::string generation, int productionYear,
        std::string color, float engineCapacity, int enginePower, std::string fuel,int mileage, int price);
private:
    std::string _brand;
    std::string _model;
    std::string _type;
    std::string _generation;
    std::string _color;
    std::string _fuel;
    float _engineCapacity;
    int _price;
    int _productionYear;
    int _enginePower;
    int _mileage;

};


#endif //CAR_DATABASE_CAR_H
