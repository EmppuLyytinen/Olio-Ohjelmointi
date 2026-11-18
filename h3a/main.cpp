#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{
    Chef kokki("Gordon Ramsay");

    kokki.makeSalad();
    kokki.makeSoup();

    std::cout << std::endl;

    ItalianChef italianCook("Anthony Bourdain");

    italianCook.makeSalad();
    italianCook.makeSoup();
    italianCook.makePasta();

    std::cout << italianCook.getName() << std::endl;

    return 0;
}
