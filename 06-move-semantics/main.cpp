// 06 - move semantics
//
// A tiny class that OWNS a heap buffer, so we can SEE when it copies
// (expensive) vs moves (cheap - just steals the pointer).
//
// Build:  build 06-move-semantics\main.cpp
//   or:   cl /std:c++20 /EHsc /W4 main.cpp && main.exe

#include <iostream>
#include <utility>   // std::move
#include <cstring>

class Buffer
{
    char*  data_;
    size_t size_;

public:
    // Normal constructor: allocates.
    explicit Buffer(size_t n) : data_(new char[n]), size_(n)
    {
        std::cout << "  ctor      (alloc " << n << " bytes)\n";
    }

    // Destructor: frees.
    ~Buffer()
    {
        delete[] data_;
    }

    // COPY constructor: deep copy - allocate new buffer, copy bytes. EXPENSIVE.
    Buffer(const Buffer& other) : data_(new char[other.size_]), size_(other.size_)
    {
        std::memcpy(data_, other.data_, size_);
        std::cout << "  COPY ctor  (deep copy " << size_ << " bytes)\n";
    }

    // MOVE constructor: STEAL the other's pointer, leave it empty. CHEAP.
    // Note the parameter is Buffer&&  -> it only binds to rvalues (temporaries).
    Buffer(Buffer&& other) noexcept : data_(other.data_), size_(other.size_)
    {
        other.data_ = nullptr;   // leave the source in a valid, empty state
        other.size_ = 0;
        std::cout << "  MOVE ctor  (stole the pointer, no copy)\n";
    }

    size_t size() const { return size_; }
};

Buffer makeBuffer() { return Buffer(100); }   // returns a temporary

int main()
{
    std::cout << "1) construct a:\n";
    Buffer a(1000);

    std::cout << "2) copy a into b (a is an lvalue -> COPY):\n";
    Buffer b = a;

    std::cout << "3) move a into c with std::move (cast a to rvalue -> MOVE):\n";
    Buffer c = std::move(a);
    std::cout << "   after move, a.size() = " << a.size() << " (emptied)\n";

    std::cout << "4) construct from a temporary (rvalue -> MOVE):\n";
    Buffer d = makeBuffer();

    std::cout << "done\n";
    return 0;
}
