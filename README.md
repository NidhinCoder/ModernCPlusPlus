# Modern C++ Journey

My journey learning **modern C++ (C++17 / C++20 / C++23)**, one topic at a time.
Each topic lives in its own numbered folder with runnable example code and notes
in my own words.

## How this repo is organized

```
.
├── 01-hello-world/
│   ├── main.cpp     # runnable example, heavily commented
│   └── notes.md     # what I learned, in my own words
├── 02-.../
└── ...
```

- **main.cpp** — a small, self-contained, commented program for the topic.
- **notes.md** — key ideas, gotchas, and things to remember.

## Building & running (Windows / MSVC)

I use the MSVC compiler that ships with Visual Studio 2022. The compiler
(`cl.exe`) isn't on the PATH by default, so I open a terminal and load the
developer environment first:

```powershell
# Load the x64 MSVC developer environment for this terminal session
cmd /k "`"C:\Program Files\Microsoft Visual Studio\2022\Professional\VC\Auxiliary\Build\vcvars64.bat`""
```

Then compile and run a topic (C++20 enabled):

```powershell
cd 01-hello-world
cl /std:c++20 /EHsc /W4 main.cpp
.\main.exe
```

Flag reference:
- `/std:c++20` — enable the C++20 standard
- `/EHsc` — standard C++ exception handling
- `/W4` — high warning level (catches more mistakes)

> Tip: alternatively open the **"x64 Native Tools Command Prompt for VS 2022"**
> from the Start menu, which has the environment already loaded.

## Progress tracker

| # | Topic | Status |
|---|-------|--------|
| 01 | Hello World & the structure of a program | ✅ Done |
| 02 | Variables, fundamental types & `auto` | ⬜ Planned |
| 03 | References & pointers | ⬜ Planned |
| 04 | `const`, `constexpr` & immutability | ⬜ Planned |
| 05 | Functions, overloading & default args | ⬜ Planned |
| 06 | Smart pointers (`unique_ptr`, `shared_ptr`) | ⬜ Planned |
| 07 | The STL containers (`vector`, `map`, ...) | ⬜ Planned |
| 08 | Iterators & range-based for | ⬜ Planned |
| 09 | Lambdas & `std::function` | ⬜ Planned |
| 10 | Move semantics & rvalue references | ⬜ Planned |
| 11 | Templates & generic programming | ⬜ Planned |
| 12 | Classes, RAII & the rule of five | ⬜ Planned |

_Legend: ✅ Done · 🚧 In progress · ⬜ Planned_

## About

Author: **NidhinCoder**
Goal: build a lasting, public record of my modern C++ knowledge as I learn it.
