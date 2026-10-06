# 06 - move semantics

## Constructors recap

- Constructor: runs when an object is created. Sets it up.
- COPY constructor:  Buffer(const Buffer& other)
    Builds a new object as an independent copy. Deep copy = allocate new
    buffer + copy bytes. EXPENSIVE. Needed so the two objects are independent
    (otherwise both free the same memory -> double free).
- MOVE constructor:  Buffer(Buffer&& other) noexcept
    Builds a new object by STEALING the source's resources (take the pointer,
    null out the source). CHEAP. Only valid because the source is a temporary
    about to die.

## Copy vs Move side by side

                 COPY ctor                 MOVE ctor
    takes        const Buffer&  (lvalue)    Buffer&&  (rvalue/temporary)
    does         new + memcpy               steal pointer, null source
    cost         expensive                  cheap
    source after unchanged                  emptied (nullptr)

## How the compiler chooses (value category from topic 05)

    Buffer a(1000);
    Buffer b = a;                // a is lvalue   -> COPY
    Buffer d = makeBuffer();     // temporary     -> MOVE (automatic)
    Buffer c = std::move(a);     // cast to rvalue-> MOVE (a left empty)

## std::move

- std::move(x) is just a CAST. It makes the EXPRESSION an rvalue.
- The variable x itself is still an lvalue (x has a name, &x works).
- std::move does NOT move by itself - the move ctor does the actual stealing
  when it consumes the rvalue.
- After moving from x, x is valid-but-empty. Don't rely on its old value.

## Gotchas

- Mark move operations `noexcept`. std::vector only uses your move ctor on
  reallocation if it's noexcept; otherwise it falls back to copying.
- std::move on a CONST object SILENTLY COPIES:
      const Buffer cy(500);
      Buffer t = std::move(cy);   // produces const Buffer&& -> can't bind to
                                  // Buffer&& (would modify a const), so the
                                  // const Buffer& COPY ctor wins. No error!
  => Don't make something const if you intend to move from it.

## Analogy

Copy = photocopy every page into a new folder (slow, two independent copies).
Move = someone leaving hands you their folder (instant); they walk away empty.
