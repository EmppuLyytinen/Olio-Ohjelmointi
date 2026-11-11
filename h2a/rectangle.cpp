#include "rectangle.h"

void Rectangle::setWidth(double setNewWidth)
{
    width = setNewWidth;
}
void Rectangle::setHeight(double setNewHeight)
{
    height = setNewHeight;
}
double Rectangle::getArea()
{
    return width * height;
}
double Rectangle::getCircum()
{
    return (width + height)*2;
}
