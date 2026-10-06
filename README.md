# Modern C++

Notes and small programs I'm writing while learning modern C++ (C++17/20/23).
One folder per topic. Each folder has a short example I can compile and run, plus
a notes file where I write things down in my own words so I remember them later.

## Layout

```
01-hello-world/
  main.cpp
  notes.md
02-.../
```

- main.cpp: the example for that topic
- notes.md: what I figured out / want to remember

## Building on my machine (Windows + Visual Studio 2022)

The MSVC compiler `cl.exe` isn't on the PATH by default. Easiest fix is to open
the "x64 Native Tools Command Prompt for VS 2022" from the Start menu, which
already has everything set up.

Then:

```
cd 01-hello-world
cl /std:c++20 /EHsc /W4 main.cpp
main.exe
```

What the flags mean:
- /std:c++20 - use the C++20 standard
- /EHsc - standard C++ exception handling
- /W4 - high warning level so I catch more mistakes

## Progress

- [x] 01 - Hello world / structure of a program
- [ ] 02 - Variables, types & auto
- [ ] 03 - References & pointers
- [ ] 04 - const & constexpr
- [ ] 05 - Functions, overloading, default args
- [ ] 06 - Smart pointers (unique_ptr, shared_ptr)
- [ ] 07 - STL containers (vector, map, ...)
- [ ] 08 - Iterators & range-based for
- [ ] 09 - Lambdas
- [ ] 10 - Move semantics
- [ ] 11 - Templates
- [ ] 12 - Classes, RAII, rule of five
