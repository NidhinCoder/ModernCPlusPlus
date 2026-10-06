# 05 - references & value categories (lvalue / rvalue)

## The two categories

- lvalue = has a LOCATION: a name/address, it persists. Can take &of it.
    int a = 5;   // a is an lvalue (even when on the right: b = a;)
- rvalue = a temporary, nameless, about to vanish. Can't take & of it.
    42, a + b, makeName()   // all rvalues

Letters originally meant Left/Right of '=', but that rule BREAKS (e.g. b = a;
has lvalue `a` on the right). Modern meaning: l = "locator value" (has a
location). Test: can I take &of it? yes -> lvalue, no -> rvalue.

## The two reference types

- T&   lvalue reference  -> binds LVALUES only (named things that live on)
- T&&  rvalue reference  -> binds RVALUES only (temporaries)

## Binding table (the core)

    int&        -> lvalues only
    int&&       -> rvalues only (temporaries)
    const int&  -> ANYTHING (also extends a temporary's lifetime)

Examples:
    int a = 5, b = 10;
    int&  r1 = a;          // OK   (a is lvalue)
    int&  r2 = a + b;      // ERROR (a+b is a temporary, T& rejects rvalues)
    int&& r3 = a + b;      // OK   (binds the temporary)
    int&& r4 = a;          // ERROR (a is lvalue, && rejects lvalues)
    const int& r5 = a + b; // OK   (const& binds everything)

## WHY T&& exists (the whole point)

A temporary is about to be destroyed anyway, so a function receiving a T&& is
allowed to STEAL its resources instead of copying. That's move semantics.
    const string&  -> someone owns it, must COPY to keep
    string&&       -> it's a temporary, can STEAL its buffer (cheap)

Mental picture:
    T&   = reference to someone's house (they live there, hands off)
    T&&  = reference to a house being demolished tomorrow (grab the furniture)

## Subtlety for next topic

Once an rvalue reference has a NAME, the name itself is an lvalue:
    int&& r = a + b;   // a+b is rvalue, but `r` has a name -> r is an lvalue
This is exactly why std::move exists: to turn a named thing back into "treat
me as a temporary".
