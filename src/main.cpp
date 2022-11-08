#include <iostream>
#include "car.h"
#include "database.h"
#include <locale>

Car carCreator()
{
    std::string brand, model, generation, type, productionYear, color, engineCapacity, enginePower, fuelType, mileage, price;
    std::cout << "\n[Creating a car]\n";
    std::cout << "Brand: ";
    std::getline(std::cin, brand);
    std::cout << "Model: ";
    std::getline(std::cin, model);
    std::cout << "Generation: ";
    std::getline(std::cin, generation);
    std::cout << "Type: ";
    std::getline(std::cin, type);
    std::cout << "Production Year: ";
    std::getline(std::cin, productionYear);
    std::cout << "Color: ";
    std::getline(std::cin, color);
    std::cout << "Engine Capacity: ";
    std::getline(std::cin, engineCapacity);
    std::cout << "Engine Power: ";
    std::getline(std::cin, enginePower);
    std::cout << "Fuel type: ";
    getline(std::cin, fuelType);
    std::cout << "Mileage: ";
    std::getline(std::cin, mileage);
    std::cout << "Price: ";
    std::getline(std::cin, price);

    return {brand, model, generation, type, std::stoi(productionYear), color, std::stof(engineCapacity), std::stoi(enginePower), fuelType,
               std::stoi(mileage), std::stoi(price)};
}

int main()
{
/*    Car car{"Mitsubishi", "Lancer", "VIII", "Sedan", 2009, "Grey", 1.8, 143, "Petrol + LPG", 140000, 26000};
    car.printData();
    Database db;
    db.add(car);
    db.printDatabase();

    Car car2 = carCreator();
    car2.printData();*/
}
