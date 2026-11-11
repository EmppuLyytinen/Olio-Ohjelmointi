#include <iostream>
#include "car.h"
#include <vector>
using namespace std;

int main()
{

    std::vector<Car> carList;
    carList.emplace_back("Volvo","V60",2020);
    carList.emplace_back("Toyota","Corolla",2022);
    carList.emplace_back("BMW","320i",2019);

    carList[1].printData();
    std::cout << std::endl;


    for(int i = 0;i < 3;i++)
    {
        carList[i].printData();
        std::cout << std::endl;
    }
    return 0;
}
