# 04 - const vs constexpr

Core difference = WHEN the value is known.

- const     = "I won't change this."  Value can come from RUNTIME.
- constexpr = "known at COMPILE time." Enforced - error if it can't be.

Every constexpr is also const. Not every const is constexpr.
constexpr = const + "compiler knows the value now".

## The separating example

    int n; std::cin >> n;        // runtime value

    const int     a = n;         // OK   (const just means read-only)
    constexpr int b = n;         // ERROR (constexpr needs compile-time value)

For a literal like `= 10`, const int and constexpr int behave the same
(the compiler can see the value). The difference only shows when the
initializer is NOT a compile-time constant.

## Where it matters

- Things that NEED a compile-time constant, e.g. array size:
    constexpr int d = 50;
    std::array<int, d> arr{};    // OK
    const int a = n;             // runtime value
    std::array<int, a> arr2{};   // ERROR - a is not a compile-time constant

## constexpr functions

    constexpr int square(int v) { return v * v; }

- Runs at COMPILE time if given compile-time inputs:
    std::array<int, square(4)> arr;   // size 16, computed at compile time
- Same function also works at runtime:
    std::cout << square(a);           // runtime

## Lock-in

constexpr = "must be known at compile time, else error".
const     = "won't change; value may come from runtime".
