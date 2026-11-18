#include "italianchef.h"
#include <iostream>
ItalianChef::ItalianChef(std::string chefName)
    : Chef(chefName)
{
    std::cout << "Italianchef " << name << " konstruktori" << std::endl;
}
ItalianChef::~ItalianChef()
{
    std::cout << "Italianchef " << name << " destruktori" << std::endl;
}
std::string ItalianChef::getName()
{
    return name;
}
void ItalianChef::makePasta()
{
    std::cout << "ItalianChef " << name << " makes pasta" << std::endl;
}
