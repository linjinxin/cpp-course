#include <iostream>
#include <cstring>

struct Stu
{
    char name[4];
    int born;
    bool male;

    void setName(const char* s)
    {
        strncpy(name, s, sizeof(name));
    }
};

typedef struct Stu Student;

int main()
{
    Stu stu;
    // Student stu;
    // struct Stu stu;
    strncpy(stu.name, "Li", sizeof(stu.name));
    stu.setName("Lin");
    stu.born = 2000;
    stu.male = false;
    std::cout << stu.name << std::endl;
    std::cout << stu.born << std::endl;
    std::cout << (stu.male and "Male" or "Female") << std::endl;

    return 0;
}
