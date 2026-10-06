// 03 - auto & type deduction
//
// Build (from this folder):
//   cl /std:c++20 /EHsc /W4 main.cpp
//   main.exe
// or from repo root:  build 03-auto-type-deduction\main.cpp

#include <iostream>
#include <typeinfo>

int main()
{
    int        x  = 10;
    const int  cx = 20;
    const int& rx = cx;

    // RULE: plain `auto` COPIES the value and DROPS const and references.
    auto a = x;    // int        (copy of x)
    auto b = cx;   // int        (const dropped! b is a modifiable copy)
    auto c = rx;   // int        (const AND reference dropped! plain copy)

    // If you WANT a reference, ask for it with auto& :
    auto& d = x;   // int&       (d is another name for x)

    // If you want const + reference:
    const auto& e = x;  // const int&

    // Prove const was dropped: these are all allowed because a, b, c are plain int
    a += 1;
    b += 1;   // legal! b is int, not const int
    c += 1;

    d += 100; // changes x too, because d is a reference to x

    std::cout << "x=" << x << " a=" << a << " b=" << b
              << " c=" << c << " e=" << e << '\n';
    return 0;
}
