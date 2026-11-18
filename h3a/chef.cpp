#include <iostream>
#include "chef.h"
#include <string>
Chef::Chef(std::string chefName)
{
    name = chefName;
    std::cout << "chef " << name << " konstruktori" << std::endl;
}
Chef::~Chef()
{
    std::cout << "Chef " << name << " destruktori" << std::endl;
}
void Chef::makeSalad()
{
    std::cout << "Chef " << name << " makes salad" << std::endl;
}
void Chef::makeSoup()
{
    std::cout << "Chef " << name << " makes soup" << std::endl;
}
