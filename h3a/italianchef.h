#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef(std::string chefName);
    ~ItalianChef();

    std::string getName();
    void makePasta();
};

#endif
