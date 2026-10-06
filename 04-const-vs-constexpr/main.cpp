// 04 - const vs constexpr
//
// Build:  build 04-const-vs-constexpr\main.cpp
//   or:   cl /std:c++20 /EHsc /W4 main.cpp  &&  main.exe

#include <iostream>
#include <array>

// A constexpr function: CAN run at compile time if given compile-time inputs.
constexpr int square(int n) { return n * n; }

int main()
{
    // const = "I won't change this." Value can be decided at RUNTIME.
    int runtimeValue = 0;
    std::cout << "enter a number: ";
    std::cin >> runtimeValue;

    const int a = runtimeValue;   // OK: const, value known only at runtime
    // a = 5;                     // ERROR: a is const

    // constexpr = "known at COMPILE time." Must be a compile-time constant.
    constexpr int b = 10;         // OK: 10 is known at compile time
    // constexpr int c = runtimeValue;  // ERROR: runtimeValue isn't compile-time

    // Because b is constexpr, it can be used where the compiler NEEDS a
    // compile-time constant - e.g. the size of a built-in / std::array.
    std::array<int, b> arr{};     // OK: b is a compile-time constant
    std::cout << "array size = " << arr.size() << '\n';

    // constexpr function used at compile time (result baked into the program):
    constexpr int nine = square(3);     // computed at compile time
    std::array<int, square(4)> arr2{};  // size 16, computed at compile time

    // The same function also works at runtime:
    std::cout << "square(a) at runtime = " << square(a) << '\n';

    std::cout << "nine=" << nine << " arr2 size=" << arr2.size() << '\n';
    return 0;
}
