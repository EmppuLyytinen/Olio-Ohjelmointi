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
    Car(std::string a, std::string b, int c)
    {
        brand = a;
        model = b;
        yearModel = c;
    }
    void printData();
};



#endif // CAR_H
