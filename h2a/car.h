#ifndef CAR_H
#define CAR_H
#include <string>

class Car
{
private:
    std::string brand;
    std::string model;
    int yearModel;

public:
    void setBrand(std::string newBrand);
    void setModel(std::string newModel);
    void setYearModel(int newYearModel);
    void printData();
};
#endif
