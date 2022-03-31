#include <iostream>
#include <cstring>
#include "../include/student.h"

void Student::setName(const char* s)
{
    strncpy(name, s, sizeof(name));
}

void Student::setBorn(int b)
{
    born = b;
}

void Student::setMale(bool b)
{
    male = b;
}

void Student::printfInfo()
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Born in " << born << std::endl;
    std::cout << "Gender: " << (male ? "Male" : "Female") << std::endl;
}