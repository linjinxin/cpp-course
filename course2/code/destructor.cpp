#include <iostream>
#include <cstring>

using namespace std;

class Student
{
private:
    char* name;
    int born;
    bool male;

public:
    Student();
    Student(const char* s);
    Student(const char* s, int b, bool m);
    ~Student();

    void setName(const char* s);
    void printInfo();
};

Student::Student() : born(1990), male(false)
{
    name = new char[1024]{0};
    cout << "Constructor: Student()" << endl;
}

Student::Student(const char* s) : born(1990), male(false)
{
    name = new char[1024];
    setName(s);
    cout << "Constructor: Student(const char*)" << endl;
}

Student::Student(const char* s, int b, bool m) : born(b), male(m)
{
    name = new char[1024];
    setName(s);
    cout << "Constructor: Student(const char*, int, bool)" << endl;
}

Student::~Student()
{
    cout << "To destroy object " << name << endl;
    delete[] name;
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

int main()
{
    {
        Student stu;
        stu.printInfo();
    }

    Student li("Li");
    li.printInfo();

    Student yao = Student("Yao", 2000, false);
    yao.printInfo();

    Student* mei = new Student("Mei", 1994, true);
    mei->printInfo();
    delete mei;

    return 0;
}
