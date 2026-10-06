# 02 - const correctness

The trick: read the declaration RIGHT TO LEFT.

- const int* p   -> "p is a pointer to a const int"
  - DATA is const. Can't do *p = 5.
  - Pointer is free. Can do p = &other.
  - (read-only window, but I can slide it to look elsewhere)

- int* const p   -> "p is a const pointer to an int"
  - POINTER is const. Can't do p = &other.
  - Data is free. Can do *p = 5.
  - (window bolted in place, but I can write on what's behind it)

- const int* const p -> both locked. Can't change data, can't repoint.

Rule of thumb:
- const BEFORE the *  -> locks the data   (*p is read-only)
- const AFTER the *   -> locks the pointer (p can't move)

Why it matters: const correctness is everywhere in modern C++. Function params
marked const promise "I won't modify this", enforced at compile time. Comes back
with auto, references, and move semantics.
