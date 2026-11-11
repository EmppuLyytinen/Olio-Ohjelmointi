#include <iostream>
#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <string>
#include <memory>


using namespace std;

int main(){
    Car auto1;
    auto1.setBrand("Volvo");
    auto1.setModel("V60");
    auto1.setYearModel(2020);
    auto1.printData();

    Rectangle* rect = new Rectangle;

    rect->setWidth(8);
    rect->setHeight(5);

    std::cout << "Pinta-ala " << rect->getArea() << std::endl;
    std::cout << "Ymparysmitta " << rect->getCircum() << std::endl;

    std::unique_ptr<Student> opiskelijat[2];
    opiskelijat[0] = std::make_unique<Student>();
    opiskelijat[1] = std::make_unique<Student>();


    opiskelijat[0]->setName("Matti");
    opiskelijat[0]->setStudentNumber(1);
    opiskelijat[0]->setAverage(5.0);

    opiskelijat[1]->setName("Emppu");
    opiskelijat[1]->setStudentNumber(2);
    opiskelijat[1]->setAverage(4.9);


    for(int i = 0;i <= 1;i++)
    {
        std::cout << "Opiskelijan nimi:";
        std::cout << " " << opiskelijat[i]->getName() << std::endl;
        std::cout << "Opiskelijan numero: " << opiskelijat[i]->getStudentNumber() << std::endl;
        std::cout << "Opiskelijan keskiarvo: " << opiskelijat[i]->getAverage() << std::endl;
        std::cout << std::endl << std::endl;
    }





    delete rect;
    return 0;
}





