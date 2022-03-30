#include <iostream>
#include <cstring>

class Student
{
private:
    char name[4];
    int born;
    bool male;

public:
    void setName(const char* s)
    {
        strncpy(name, s, sizeof(name));
    }
    void setBorn(int b)
    {
        born = b;
    }
    void setGender(bool isMale)
    {
        male = isMale;
    }
    const char* getName() { return name; }
    int getBorn() { return born; }
    bool isMale() { return male; }
    void printInfo()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Born in " << born << std::endl;
        std::cout << "Gender: " << (male ? "Male" : "Female") << std::endl;
    }
};

int main()
{
    Student yu;
    yu.setName("Yu");
    yu.setBorn(2000);
    yu.setGender(false);
    yu.printInfo();
    // yu.born = 1000; // compile error: can't access private attribute
    // std::cout << "It's name is " << yu.name << std::endl;
    std::cout << "It's name is " << yu.getName() << std::endl;

    return 0;
}
