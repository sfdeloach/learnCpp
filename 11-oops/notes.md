# Section 11: Introduction to OOPS

- Classes are composed of data and functions
- Data resides in either the stack or heap sections of memory
- Functions reside in the code section of memory
- Classes are blueprints from which objects are created
- Think of classes as the cookie cutter and objects as the cookies created from the cutter
- There is only one difference between a class and `struct` in C++: their default visibility
- All components in a class by default are private and must be explicitly set as public if needed
- All components in a `struct` by default are public and must be explicitly set as private if needed
- Unlike the C programming language, a `struct` in C++ may contain functions
- By programmer's convention, a `struct` may be used in place of a class for data-only objects

## Constructors

- A constructor is a special function that is called at the time the object is created
- Every class will have a default constructor whether it is explicitly defined or not
- Constructors can be overloaded
- There are three basic types of constructors: parameterized, non-parameterized, and copy

```c++
/*
 *  Non-parameterized
 */
Rectangle()
{
   ...
};

/*
 *  Parameterized, note that default values may be used to eliminate the need
 *  for a non-parameterized constructor
 */
Rectangle(int length = 1, int width = 1)
{
   ...
};

/*
 *  Copy constructor, note the parameter is passed by reference for efficiency.
 *  Also, take care to create deep copies when the referenced object contains
 *  pointers to data since a shallow copy of its value will point to data
 *  already pointed to by the original object.
 */
Rectangle(Rectangle &rect)
{
   ...
};
```

## Class Functions

Functions belonging to a class may be broadly classified as one of six types of functions:

- Constructors, called at creation
- Destructors, mostly used to free memory at the end of the object's life
- Mutators, aka "setters"
- Accessors, aka "getters"
- Facilitators
- Inquiry, usually provides a boolean return type

## Where A Function is Defined Matters

Functions defined within the class definition will by default become inline
functions, i.e. the function will be expanded in the current function from which
it is called. This is only advisable for very small and infrequently called
functions.

Functions defined outside of the class definition using scope resolution will
define the function in its own section of code memory.

Functions defined outside of the class definition may be forced to become inline
functions with the `inline` keyword:

```c++
class Rectangle
{
private:
   int length;
public:
   inline int getLength();
}

int Rectangle::getLength() { return this->length };
```

## `this` is a Pointer

The `this` keyword is a *pointer* to the current object, and thus when used, it
requires the arrow operator `->`, not the dot operator.
