# 01 - Hello world

Stuff I want to remember from the first program.

- Program always starts at main(). There's only one.
- main returns int. 0 = ok, anything else = something went wrong.
- #include <iostream> is what gives me std::cout.
- std::cout << "text" prints to the screen. << chains left to right.
- endl vs '\n':
  - '\n' just prints a newline.
  - endl prints a newline AND flushes the buffer, so it's a bit slower.
  - Use '\n' most of the time, especially inside loops.
- std:: is the standard library namespace. cout actually lives inside std.

## auto

- auto makes the compiler deduce the type from whatever I assign.
- auto year = 2026; -> year is an int.
- Doesn't matter much here, but it gets really handy later with long type names.

## Things that tripped me up

- cl isn't recognized in a normal command prompt. Have to use the
  "x64 Native Tools Command Prompt for VS 2022" (or run vcvars64.bat first).
- Forgot the #include once and cout was "undefined".
- void main() is wrong, main has to return int.

## The compile command

cl /std:c++20 /EHsc /W4 main.cpp

- cl         -> the MSVC compiler
- /std:c++20 -> use C++20
- /EHsc      -> exception handling. EH = exception handling,
                s = standard/synchronous, c = assume C functions don't throw
- /W4        -> warning level 4 (high)
