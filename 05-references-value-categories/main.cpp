// 05 - references & value categories (lvalue / rvalue)
//
// Build:  build 05-references-value-categories\main.cpp
//   or:   cl /std:c++20 /EHsc /W4 main.cpp && main.exe

#include <iostream>
#include <string>

// Overloading on reference type lets us SEE which category an argument is.
void probe(const std::string&  s) { std::cout << "lvalue ref  : " << s << '\n'; }
void probe(std::string&&       s) { std::cout << "rvalue ref  : " << s << '\n'; }

std::string makeName() { return "temp"; }   // returns a temporary (an rvalue)

int main()
{
    int x = 10;

    // lvalue  = has a name / an address you can take. It persists.
    int& lref = x;        // lvalue reference binds to the named object x
    lref = 20;            // writing through it changes x
    std::cout << "x = " << x << '\n';

    // rvalue  = a temporary with no name, about to disappear.
    // int& bad = 42;     // ERROR: can't bind non-const lvalue ref to a temporary
    int&& rref = 42;      // rvalue reference binds to the temporary 42
    rref = 99;            // rref itself names storage we can write to
    std::cout << "rref = " << rref << '\n';

    const int& cref = 42; // OK too: const lvalue ref can bind an rvalue
    std::cout << "cref = " << cref << '\n';

    // Watch which overload gets picked:
    std::string name = "nidhin";
    probe(name);          // name is an lvalue  -> const& overload
    probe(makeName());    // makeName() is a temporary (rvalue) -> && overload
    probe("literal");     // temporary string   -> && overload

    return 0;
}
