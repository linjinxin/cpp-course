#include <iostream>
#include <cstring>

using namespace std;

class Student
{
private:
    char name[4];
    int born;
    bool male;

public:
    Student();
    Student(const char* s);
    Student(const char* s, int b, bool m);
    void setName(const char* s);
    void printInfo();
};

Student::Student() : born(1990), male(false)
{
    name[0] = 0;
    cout << "Constructor: Student()" << endl;
}

Student::Student(const char* s) : born(1990), male(false)
{
    setName(s);
    cout << "Constructor: Student(const char*)" << endl;
}

Student::Student(const char* s, int b, bool m) : born(b), male(m)
{
    setName(s);
    cout << "Constructor: Student(const char*, int, bool)" << endl;
}

void Student::setName(const char* s)
{
    strncpy(name, s, sizeof(name));
}

void Student::printInfo()
{
    cout << "Name: " << name << endl;
    cout << "Born in: " << born << endl;
    cout << "Gender: " << (male ? "Male" : "Female") << endl;
}

class Foo
{
private:
    int num;
public:
    Foo(int a) : num(a) {}
};

int main()
{
    Foo f;
    Student stu;
    stu.printInfo();

    Student li("Li");
    li.printInfo();

    Student yao = Student("Yao", 2000, false);
    yao.printInfo();

    Student* mei = new Student("Mei", 1994, true);
    mei->printInfo();
    delete mei;

    return 0;
}