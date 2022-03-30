#include <iostream>

int main()
{
    /*
    // const pointer，pointer is variable, and it point to a constant

    const int* p1; 
    const int num = 10;
    p1 = &num;
    std::cout << *p1 << std::endl;
    int num2 = 20;
    p1 = &num2;
    std::cout << *p1 << std::endl;
    // *p1 = 30; //compile error, point to a constant, can't be modify

    // pointer const, point is constant, and it point to a variable

    // int* const p2; // compile error: constant must be init when declare
    // int* const p2 = &num; // compile error: invalid conversion from const int* to int*
    int* const p2 = &num2;
    std::cout << *p2 << std::endl;
    *p2 = 30;
    std::cout << *p2 << std::endl;
    // p2 = &num2; // compile error: p2 is read-only，it's a constant

    // const pointer const, point is constant, and it point to a constant

    const int* const p3 = &num2;
    std::cout << *p3 << std::endl;
    */

    // pointer array, it's array, and it's element is pointer
    int* pt;
    int* ptrs[3] = {pt};
    std::cout << sizeof(ptrs) << std::endl; // 24
    int num = 10;
    ptrs[2] = &num;
    std::cout << ptrs[1] << " " << ptrs[2] << std::endl; // 0 0xaddress
    std::cout << *(ptrs + 2) << " " << *(*(ptrs + 2)) << std::endl; // 0xaddress 10
    // std::cout << *(*(ptrs + 1)) << std::endl; // run error: Segmentation fault, ptrs[1] is null pointer

    int arr[] = {};
    int* pt1 = arr;
    std::cout << sizeof(arr) << " " << sizeof(pt1) << std::endl; // 0 8
    int arr2[] = {0, 1, 2};
    pt1 = arr2;
    std::cout << sizeof(arr2) << " " << sizeof(pt1) << std::endl; // 12 8

    return 0;
}