#include "car.h"
#include <iostream>
#include <string>
void Car::setBrand(std::string newBrand)
{
    brand = newBrand;
}
void Car::setModel(std::string newModel)
{
    model = newModel;
}
void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}
void Car::printData()
{
    std::cout << brand << std::endl;
    std::cout << model << std::endl;
    std::cout << yearModel << std::endl;
}
