#include <iostream>
#include <cstring>

class Student
{
private:
    char name[4];
    int born;
    bool male;

public:
    void setBorn(int b) { born = b; }
    void setGender(bool isMale) { male = isMale; }
    const char* getName() { return name; }
    int getBorn() { return born; }
    bool isMale() { return male; }

    void setName(const char* s);
    void printInfo();
};

inline void Student::setName(const char* s)
{
    strncpy(name, s, sizeof(name));
}

void Student::printInfo()
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Born in " << born << std::endl;
    std::cout << "Gender: " << (male ? "Male" : "Female") << std::endl;
}

int main()
{
    Student yu;
    yu.setName("Yu");
    yu.setBorn(2000);
    yu.setGender(false);
    yu.printInfo();

    return 0;
}
