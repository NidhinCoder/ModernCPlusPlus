# 03 - auto & type deduction

One-liner:
  plain auto   -> makes a COPY, DROPS const and & (reference)
  auto&        -> keeps it a reference
  const auto&  -> read-only reference, no copy

## Examples

    int        x  = 10;
    const int  cx = 20;
    const int& rx = cx;

    auto a = x;    // int
    auto b = cx;   // int   <- const dropped (my own copy, so it's modifiable)
    auto c = rx;   // int   <- reference AND const dropped (plain copy)

    auto& d = x;        // int&        (alias to x; changing d changes x)
    const auto& e = x;  // const int&  (read-only alias, no copy)

## Why plain auto drops const/&

Mental model: plain auto = "give me my own modifiable copy".
A private copy doesn't need to stay read-only or stay an alias, so const and
& get stripped.

## Gotcha I got wrong first

- auto q = cv;  // q is int, NOT const int  -> so q = q+1 compiles
- A const reference (const int&) is read-only: can't assign through it.
  Both  auto& s = cv;  and  const auto& t = v;  are read-only.

## Practical use

- Loop without copying:   for (const auto& item : items)
  (plain `for (auto item : items)` copies every element - slow / often a bug)
- Same rules power template type deduction (Meyers Item 1 & 2).
