#if !defined(CLASS_A) // <-- multiple inclusion guard
#define CLASS_A

class A {};

#endif

#if !defined(CLASS_A)
#define CLASS_A

class A {};

#endif

int main() {

}

/*
- Presence of multiple inclusion guard ensures that the type appears in
  translation unit single time.
- In today's age we use #pragma once in place of multiple inclusion gaurds.
*/
