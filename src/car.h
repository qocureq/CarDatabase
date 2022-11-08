#ifndef CAR_DATABASE_CAR_H
#define CAR_DATABASE_CAR_H
#include <string>

class Car {
public:
    Car(std::string brand, std::string model, std::string generation, std::string type, int productionYear,
        std::string color, float engineCapacity, int enginePower, std::string fuel,int mileage, int price);
    std::string getCarData();
    void printData();
private:
    std::string _brand;
    std::string _model;
    std::string _generation;
    std::string _type;
    std::string _color;
    std::string _fuelType;
    float _engineCapacity;
    int _price;
    int _productionYear;
    int _enginePower;
    int _mileage;
    static std::string printWithCommas(int n);
};


#endif //CAR_DATABASE_CAR_H
