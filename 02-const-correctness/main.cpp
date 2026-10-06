// 02 - const correctness
// Read the type RIGHT TO LEFT and it becomes easy.
//
// Build:
//   cl /std:c++20 /EHsc /W4 main.cpp
//   main.exe

#include <iostream>

int main()
{
    int a = 10;
    int b = 20;

    // Case 1: pointer to const int
    // Read right-to-left: "p1 is a pointer to a const int"
    // -> the DATA is const (can't change *p1), but p1 can point elsewhere.
    const int* p1 = &a;
    // *p1 = 99;      // ERROR if uncommented: can't change the data
    p1 = &b;          // OK: p1 can point at something else
    std::cout << "p1 points to " << *p1 << '\n';

    // Case 2: const pointer to int
    // Read right-to-left: "p2 is a const pointer to an int"
    // -> the POINTER is const (can't repoint), but the data can change.
    int* const p2 = &a;
    *p2 = 99;         // OK: can change the data
    // p2 = &b;       // ERROR if uncommented: can't repoint a const pointer
    std::cout << "a is now " << *p2 << '\n';

    // Case 3: const pointer to const int -> both locked.
    const int* const p3 = &b;
    std::cout << "p3 points to " << *p3 << '\n';
    // *p3 = 1;  p3 = &a;   // both ERRORS

    return 0;
}
