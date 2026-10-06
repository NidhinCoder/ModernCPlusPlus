# 01 — Hello World & program structure

## Key ideas

- Every C++ program has exactly one `main()` function — it's the entry point.
- `main` returns `int`: `0` means success, non-zero means an error occurred.
- `#include <iostream>` pulls in the standard I/O stream facilities.
- `std::cout` is the standard output stream; `<<` inserts values into it.
- `std::endl` vs `'\n'`:
  - `'\n'` just writes a newline.
  - `std::endl` writes a newline **and flushes** the output buffer.
  - Prefer `'\n'` in loops for performance; `std::endl` is fine for occasional use.
- `std::` is the **standard library namespace**. Writing `std::cout` makes it
  explicit where `cout` comes from.

## A touch of "modern"

- `auto` asks the compiler to deduce the variable's type from its initializer.
  - `auto year = 2026;` → `year` is an `int`.
  - Great for avoiding verbose type names later (iterators, templates, etc.).

## Build & run (MSVC)

```powershell
cl /std:c++20 /EHsc /W4 main.cpp
.\main.exe
```

## Gotchas I want to remember

- Forgetting `#include <iostream>` → `std::cout` is undefined.
- `main` must return `int` (don't use `void main()` — it's non-standard).
- `/EHsc` is needed so the standard library's exception handling works correctly.
