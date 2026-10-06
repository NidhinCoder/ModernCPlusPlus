# Learning Path – Modern C++

My roadmap from beginner to writing idiomatic modern C++. Built from the three
books I'm using. I work through it one folder at a time: each topic gets a small
program I compile and run, plus a notes file I write in my own words.

## The books and how I use them

- **[Beginners]** *Modern C++ for Absolute Beginners* – Slobodan Dmitrović.
  Main path. Modern (C++11–C++20) and well sequenced. Follow this chapter order.
- **[Complete]** *A Complete Guide to Programming in C++* – Kirch-Prinz & Prinz.
  Supplementary. Good for deeper fundamentals, but it's from 2002 so I ignore its
  dated style (pre-C++11). Use it to go deeper on operators, statements, classes.
- **[Effective]** *Effective Modern C++* – Scott Meyers.
  The finisher. 42 items of best practice. Tackle once the basics are solid;
  they turn "I know the syntax" into "I write it the modern way."

---

## Stage 1 – Foundations (get code running, understand types)

| # | Topic | Read |
|---|-------|------|
| 01 | Hello world & program structure (done) | Beginners ch.1–4 |
| 02 | Types & variables (int, double, bool, char) | Beginners ch.5 |
| 03 | Operators (arithmetic, comparison, logical) | Beginners ch.7 |
| 04 | Standard input (std::cin) | Beginners ch.8 |
| 05 | Statements & control flow (if, switch, loops) | Beginners ch.16 |

## Stage 2 – Memory & building blocks

| # | Topic | Read |
|---|-------|------|
| 06 | Arrays | Beginners ch.10 |
| 07 | Pointers | Beginners ch.11 |
| 08 | References | Beginners ch.12 |
| 09 | Strings (std::string) | Beginners ch.13 |
| 10 | Automatic type deduction (auto) | Beginners ch.14; Effective Item 2, 5 |
| 11 | Constants (const, constexpr) | Beginners ch.17; Effective Item 15 |

## Stage 3 – Functions & structure

| # | Topic | Read |
|---|-------|------|
| 12 | Functions, parameters, overloading | Beginners ch.19 |
| 13 | Scope & lifetime | Beginners ch.21 |
| 14 | Organizing code (headers / .cpp) | Beginners ch.31 |

## Stage 4 – Object-oriented C++

| # | Topic | Read |
|---|-------|------|
| 15 | Classes: members, constructors, encapsulation | Beginners ch.23 |
| 16 | Inheritance & polymorphism, virtual, override | Beginners ch.25; Effective Item 12 |
| 17 | static members | Beginners ch.27 |
| 18 | Enumerations (prefer scoped enums) | Beginners ch.29; Effective Item 10 |
| 19 | Conversions | Beginners ch.33 |

## Stage 5 – Modern resource management

| # | Topic | Read |
|---|-------|------|
| 20 | Exceptions (try/catch, RAII, noexcept) | Beginners ch.34; Effective Item 14 |
| 21 | Smart pointers: unique_ptr | Beginners ch.35; Effective Item 18, 21 |
| 22 | Smart pointers: shared_ptr & weak_ptr | Effective Item 19, 20 |
| 23 | Move semantics (std::move, rvalue refs) | Effective Item 23, 25, 29 |

## Stage 6 – Generic & standard library

| # | Topic | Read |
|---|-------|------|
| 24 | Templates (function & class templates) | Beginners ch.28; Effective Item 1 |
| 25 | STL containers (vector, map, set, ...) | Beginners ch.38 |
| 26 | Iterators & range-based for | Complete "Iterators" |
| 27 | Lambdas & std::function | Effective Item 31, 32, 34 |
| 28 | I/O streams in depth | Beginners ch.37 |

## Stage 7 – Expert polish (Effective Modern C++)

- Prefer nullptr to 0/NULL (Item 8)
- Prefer alias declarations to typedef (Item 9)
- Prefer deleted functions to private-undefined (Item 11)
- {} vs () initialization (Item 7)
- Special member function generation / rule of five (Item 17)
- Perfect forwarding, universal references (Item 24–30)
- Concurrency: std::thread, std::async, std::atomic (Item 35–40)
- emplace vs insert (Item 42)

---

## How I learn each topic

1. Understand the concept.
2. Read the mapped chapter(s).
3. Write a small program, compile and run it.
4. Do the exercises myself.
5. Write notes.md in my own words.
6. Commit and push.
