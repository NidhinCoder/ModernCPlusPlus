// 01 - Hello world
// First program. Mostly here to get the structure right and make sure I can
// compile and run something.
//
// Build:
//   cl /std:c++20 /EHsc /W4 main.cpp
//   main.exe

#include <iostream>   // needed for std::cout

int main()
{
    // cout is the output stream. << pushes stuff into it.
    // endl adds a newline and flushes the buffer (slower than '\n').
    std::cout << "Hello, modern C++!" << std::endl;

    // auto = let the compiler figure out the type. 2026 is an int, so year is int.
    auto year = 2026;
    std::cout << "Starting my C++ journey in " << year << "." << '\n';

    return 0;   // 0 = program ran fine
}
