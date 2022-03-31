// #pragma once
#ifndef __STUDENT_H__
#define __STUDENT_H__
class Student
{
private:
    char name[4];
    int born;
    bool male;

public:
    const char* getName() { return name; }
    int getBorn() { return born; }
    bool isMale() { return male; }

    void setName(const char* s);
    void setBorn(int b);
    void setMale(bool b);
    void printfInfo();
};
#endif