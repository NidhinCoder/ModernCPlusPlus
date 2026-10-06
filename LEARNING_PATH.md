# Learning Path – Modern C++

Goal: go from solid classic-C++ basics to real modern-C++ expertise
(C++11/14/17/20). I already know traditional C++ (control flow, classes,
operator overloading, friend, namespaces, pointers). Diagnostic quiz: 7/10 —
gaps were const-with-pointers and the copy/double-free problem. So this path
focuses on modern features and shores up those two gaps early.

How I work each topic:
1. Learn the concept and the WHY.
2. Read the mapped book pages.
3. Write a small program, compile and run it myself.
4. Do the exercise; get it reviewed.
5. Write notes.md in my own words.
6. Commit and push.

## Books (used throughout, not after)

- **[Effective]** *Effective Modern C++* – Scott Meyers. The spine for modern
  topics (42 items). Covered thoroughly.
- **[Beginners]** *Modern C++ for Absolute Beginners* – Dmitrović. Gentler take
  when I want one. Used selectively.
- **[Complete]** *A Complete Guide to Programming in C++* – Kirch-Prinz (2002).
  Supplementary, deep fundamentals only. Ignore its pre-C++11 style.

---

## Phase 1 – Modern foundations

| # | Topic | Read |
|---|-------|------|
| 02 | const correctness (warm-up, fixes quiz gap) | Beginners ch.17 |
| 03 | auto & type deduction | Effective Item 1, 2, 5 |
| 04 | const vs constexpr | Effective Item 15 |
| 05 | references & value categories (lvalue/rvalue) | Effective (ref material) |

## Phase 2 – The heart of modern C++

| # | Topic | Read |
|---|-------|------|
| 06 | move semantics (std::move, move ctor) | Effective Item 23, 25, 29 |
| 07 | smart pointers: unique_ptr | Effective Item 18, 21; Beginners ch.35 |
| 08 | smart pointers: shared_ptr & weak_ptr | Effective Item 19, 20 |
| 09 | RAII & the Rule of 0/3/5 (fixes quiz gap) | Effective Item 17 |

## Phase 3 – Generic & functional modern C++

| # | Topic | Read |
|---|-------|------|
| 10 | lambdas & closures | Effective Item 31, 32, 33, 34 |
| 11 | templates (function & class) | Beginners ch.28; Effective Item 1 |
| 12 | variadic templates & perfect forwarding | Effective Item 24, 30 |
| 13 | concepts (C++20) | ref docs |

## Phase 4 – Modern standard library

| # | Topic | Read |
|---|-------|------|
| 14 | STL containers the modern way | Beginners ch.38 |
| 15 | algorithms & iterators | Complete "Iterators" |
| 16 | ranges & views (C++20) | ref docs |
| 17 | emplace vs insert, perf idioms | Effective Item 41, 42 |

## Phase 5 – Concurrency

| # | Topic | Read |
|---|-------|------|
| 18 | std::thread basics | Effective Item 37 |
| 19 | std::async & futures | Effective Item 35, 36, 39 |
| 20 | std::atomic & memory model | Effective Item 40 |

---

## Progress

- [x] 01 – Hello world (toolchain check)
- [x] 02 – const correctness
- [x] 03 – auto & type deduction
- [ ] 04 – const vs constexpr   <-- next
- [ ] 05 – references & value categories
- [ ] 06 – move semantics
- [ ] 07 – unique_ptr
- [ ] 08 – shared_ptr & weak_ptr
- [ ] 09 – RAII & rule of 0/3/5
- [ ] 10 – lambdas
- [ ] 11 – templates
- [ ] 12 – variadic templates & forwarding
- [ ] 13 – concepts (C++20)
- [ ] 14 – STL containers
- [ ] 15 – algorithms & iterators
- [ ] 16 – ranges & views (C++20)
- [ ] 17 – emplace & perf idioms
- [ ] 18 – std::thread
- [ ] 19 – std::async & futures
- [ ] 20 – std::atomic & memory model
