#include <stdio.h>
#include <string.h>

/*
struct Stu
{
    char name[4];
    int born;
    int male;
};

typedef struct Stu Stu;
*/

typedef struct Stu
{
    char name[4];
    int born;
    int male;
} Stu;

int main()
{
    // struct Stu stu;
    Stu stu; // if not typedef, this will compile error
    strcpy(stu.name, "li");
    printf("name: %s\n", stu.name);
    return 0;
}