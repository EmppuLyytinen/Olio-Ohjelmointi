#ifndef STUDENT_H
#define STUDENT_H
#include <string>

class Student
{
private:
    std::string name;
    int studentNumber;
    double average;

public:
    std::string getName();
    int getStudentNumber();
    double getAverage();

    void setName(std::string setNewName);
    void setStudentNumber(int setNewStudentNumber);
    void setAverage(double setNewAverage);

};



#endif // STUDENT_H
