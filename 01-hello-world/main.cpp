// 01 - Hello World
// -----------------------------------------------------------------------------
// The classic first program. Its real job here is to show the *structure* of a
// modern C++ program and give us something we can actually compile and run.
//
// Build (from this folder, in an MSVC developer terminal):
//     cl /std:c++20 /EHsc /W4 main.cpp
//     .\main.exe

// <iostream> gives us the standard input/output streams, e.g. std::cout.
#include <iostream>

// `main` is the program's entry point. Execution starts here.
// Returning `int` lets us report success (0) or failure (non-zero) to the OS.
int main()
{
    // std::cout is the standard output stream.
    // The << operator "inserts" values into the stream, left to right.
    // std::endl writes a newline AND flushes the buffer.
    std::cout << "Hello, modern C++!" << std::endl;

    // A tiny taste of "modern": `auto` lets the compiler deduce the type.
    // Here the literal 2026 is an int, so `year` is deduced as int.
    auto year = 2026;
    std::cout << "Starting my C++ journey in " << year << "." << '\n';

    // Returning 0 signals "the program finished successfully".
    return 0;
}
