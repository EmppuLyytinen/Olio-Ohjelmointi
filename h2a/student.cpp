#include "student.h"
#include <string>

std::string Student::getName()
{
    return name;
}
int Student::getStudentNumber()
{
    return studentNumber;
}
double Student::getAverage()
{
    return average;
}
void Student::setName(std::string setNewName)
{
    name = setNewName;
}
void Student::setStudentNumber(int setNewStudentNumber)
{
    studentNumber = setNewStudentNumber;
}
void Student::setAverage(double setNewAverage)
{
    average = setNewAverage;
}
