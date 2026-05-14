# Overriding and Templates in C++

## Table of Contents

1. Introduction
2. What is Function Overriding?
3. Why Function Overriding is Important
4. Rules of Function Overriding
5. Base Class and Derived Class
6. Virtual Functions
7. Example of Function Overriding
8. Runtime Polymorphism
9. Override Keyword
10. Final Keyword
11. Pure Virtual Functions
12. Abstract Classes
13. Dynamic Binding
14. Early Binding vs Late Binding
15. Function Hiding vs Overriding
16. Covariant Return Types
17. Destructor Overriding
18. Multiple Inheritance and Overriding
19. Best Practices for Overriding
20. Common Mistakes in Overriding
21. Introduction to Templates
22. What are Templates?
23. Why Templates are Important
24. Function Templates
25. Class Templates
26. Template Syntax
27. Template Type Parameters
28. Multiple Template Parameters
29. Non-Type Template Parameters
30. Default Template Parameters
31. Template Specialization
32. Function Template Specialization
33. Class Template Specialization
34. Partial Template Specialization
35. Variadic Templates
36. Template Instantiation
37. Inline Templates
38. Templates and STL
39. Advantages of Templates
40. Disadvantages of Templates
41. Best Practices for Templates
42. Common Mistakes in Templates
43. Real-World Applications
44. Summary

---

# 1. Introduction

Two important concepts in C++ are:
- Function overriding
- Templates

Function overriding is related to:
- Inheritance
- Polymorphism
- Object-Oriented Programming

Templates are related to:
- Generic programming
- Code reuse
- Flexibility

Both concepts are heavily used in professional C++ development.

---

# 2. What is Function Overriding?

Function overriding happens when:
- A derived class provides a new implementation
- For a function already defined in the base class

Example:

```cpp
#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal Sound" << endl;
    }
};

class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Dog Barks" << endl;
    }
};

int main()
{
    Dog d;

    d.sound();

    return 0;
}
```

Output:

```text
Dog Barks
```

---

# 3. Why Function Overriding is Important

Overriding provides:
- Runtime polymorphism
- Flexibility
- Extensibility
- Better code organization

Applications:
- Game engines
- GUI systems
- Frameworks
- APIs

---

# 4. Rules of Function Overriding

Requirements:
- Inheritance must exist
- Function names must match
- Parameters must match
- Return types should be compatible
- Base function should be virtual

---

# 5. Base Class and Derived Class

Example:

```cpp
class Base
{
};

class Derived : public Base
{
};
```

- `Base` → parent class
- `Derived` → child class

---

# 6. Virtual Functions

A virtual function allows overriding.

Syntax:

```cpp
virtual returnType functionName();
```

Example:

```cpp
virtual void display();
```

---

# 7. Example of Function Overriding

Example:

```cpp
#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing Shape" << endl;
    }
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing Circle" << endl;
    }
};

int main()
{
    Shape* ptr;

    Circle c;

    ptr = &c;

    ptr->draw();

    return 0;
}
```

Output:

```text
Drawing Circle
```

---

# 8. Runtime Polymorphism

Runtime polymorphism occurs when:
- The correct overridden function is selected during runtime

Example:

```cpp
Shape* ptr = &circleObject;
ptr->draw();
```

The program decides at runtime which `draw()` to call.

---

# 9. Override Keyword

The `override` keyword ensures proper overriding.

Example:

```cpp
class Base
{
public:
    virtual void show()
    {
    }
};

class Derived : public Base
{
public:
    void show() override
    {
    }
};
```

Advantages:
- Detects mistakes
- Improves readability

---

# 10. Final Keyword

The `final` keyword prevents further overriding.

Example:

```cpp
class Base
{
public:
    virtual void display() final
    {
    }
};
```

Derived classes cannot override `display()`.

---

# 11. Pure Virtual Functions

A pure virtual function has no implementation.

Syntax:

```cpp
virtual void show() = 0;
```

Example:

```cpp
class Animal
{
public:
    virtual void sound() = 0;
};
```

---

# 12. Abstract Classes

A class containing at least one pure virtual function is abstract.

Example:

```cpp
class Shape
{
public:
    virtual void draw() = 0;
};
```

Cannot create objects:

```cpp
Shape s;
```

This is invalid.

---

# 13. Dynamic Binding

Dynamic binding connects:
- Function call
- Correct overridden function

At runtime.

Example:

```cpp
Base* ptr = new Derived();
ptr->show();
```

---

# 14. Early Binding vs Late Binding

## Early Binding

Resolved during compile time.

Example:
- Normal functions

## Late Binding

Resolved during runtime.

Example:
- Virtual functions

---

# 15. Function Hiding vs Overriding

Function hiding occurs when:
- Function names match
- Parameters differ

Example:

```cpp
#include <iostream>
using namespace std;

class Base
{
public:
    void show(int x)
    {
        cout << x << endl;
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "Hidden" << endl;
    }
};
```

This is not overriding.

---

# 16. Covariant Return Types

Derived classes may return derived types.

Example:

```cpp
class Base
{
public:
    virtual Base* create()
    {
        return new Base();
    }
};

class Derived : public Base
{
public:
    Derived* create()
    {
        return new Derived();
    }
};
```

---

# 17. Destructor Overriding

Base class destructors should usually be virtual.

Example:

```cpp
class Base
{
public:
    virtual ~Base()
    {
    }
};
```

This ensures proper cleanup.

---

# 18. Multiple Inheritance and Overriding

Example:

```cpp
class A
{
public:
    virtual void show()
    {
    }
};

class B
{
public:
    virtual void show()
    {
    }
};

class C : public A, public B
{
public:
    void show()
    {
    }
};
```

Multiple inheritance may create ambiguity.

---

# 19. Best Practices for Overriding

Best practices:
- Use `override`
- Use virtual destructors
- Avoid unnecessary overriding
- Keep overridden behavior consistent
- Prefer abstract base classes when appropriate

---

# 20. Common Mistakes in Overriding

## Missing Virtual Keyword

Wrong:

```cpp
class Base
{
public:
    void show()
    {
    }
};
```

No runtime polymorphism occurs.

---

## Different Parameters

Wrong:

```cpp
void show(int x);
```

instead of:

```cpp
void show();
```

This becomes function hiding.

---

## Forgetting Virtual Destructor

Wrong:

```cpp
class Base
{
public:
    ~Base()
    {
    }
};
```

May cause memory leaks.

---

# 21. Introduction to Templates

Templates allow generic programming.

Templates enable:
- Reusable code
- Type-independent programming

Example:

```cpp
template <typename T>
T add(T a, T b)
{
    return a + b;
}
```

---

# 22. What are Templates?

Templates are blueprints for:
- Functions
- Classes

The compiler generates code automatically.

---

# 23. Why Templates are Important

Advantages:
- Reduce duplicate code
- Improve flexibility
- Increase maintainability
- Support generic programming

Used heavily in:
- STL
- Libraries
- Frameworks

---

# 24. Function Templates

Function templates create generic functions.

Example:

```cpp
#include <iostream>
using namespace std;

template <typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    cout << maximum(5, 9) << endl;
    cout << maximum(2.5, 7.8) << endl;

    return 0;
}
```

Output:

```text
9
7.8
```

---

# 25. Class Templates

Class templates create generic classes.

Example:

```cpp
#include <iostream>
using namespace std;

template <typename T>
class Box
{
private:
    T value;

public:
    void setValue(T v)
    {
        value = v;
    }

    T getValue()
    {
        return value;
    }
};

int main()
{
    Box<int> b;

    b.setValue(100);

    cout << b.getValue();

    return 0;
}
```

---

# 26. Template Syntax

General syntax:

```cpp
template <typename T>
```

or

```cpp
template <class T>
```

Both are equivalent.

---

# 27. Template Type Parameters

Example:

```cpp
template <typename T>
```

`T` represents a generic type.

---

# 28. Multiple Template Parameters

Example:

```cpp
template <typename T, typename U>
```

Program:

```cpp
template <typename T, typename U>
class Pair
{
public:
    T first;
    U second;
};
```

---

# 29. Non-Type Template Parameters

Templates can use constants.

Example:

```cpp
template <int size>
class Array
{
private:
    int arr[size];
};
```

---

# 30. Default Template Parameters

Example:

```cpp
template <typename T = int>
class Test
{
};
```

If no type is provided:
- `int` is used

---

# 31. Template Specialization

Specialization customizes templates.

Example:

```cpp
template <typename T>
class Printer
{
public:
    void print()
    {
        cout << "Generic" << endl;
    }
};
```

---

# 32. Function Template Specialization

Example:

```cpp
#include <iostream>
using namespace std;

template <typename T>
void display(T value)
{
    cout << value << endl;
}

template <>
void display<char>(char value)
{
    cout << "Character: " << value << endl;
}

int main()
{
    display(10);
    display('A');

    return 0;
}
```

---

# 33. Class Template Specialization

Example:

```cpp
#include <iostream>
using namespace std;

template <typename T>
class Data
{
public:
    void show()
    {
        cout << "General Template" << endl;
    }
};

template <>
class Data<int>
{
public:
    void show()
    {
        cout << "Integer Specialization" << endl;
    }
};

int main()
{
    Data<double> d1;
    Data<int> d2;

    d1.show();
    d2.show();

    return 0;
}
```

---

# 34. Partial Template Specialization

Only some template parameters are specialized.

Example:

```cpp
template <typename T, typename U>
class Test
{
};

template <typename T>
class Test<T, int>
{
};
```

---

# 35. Variadic Templates

Variadic templates support variable numbers of arguments.

Example:

```cpp
#include <iostream>
using namespace std;

void print()
{
    cout << endl;
}

template <typename T, typename... Types>
void print(T first, Types... rest)
{
    cout << first << " ";

    print(rest...);
}

int main()
{
    print(1, 2.5, "Hello", 'A');

    return 0;
}
```

---

# 36. Template Instantiation

Instantiation occurs when:
- The compiler creates actual template code

Example:

```cpp
maximum<int>(5, 10);
maximum<double>(2.5, 7.5);
```

---

# 37. Inline Templates

Templates are often placed in header files.

Reason:
- Compiler needs full definition

---

# 38. Templates and STL

STL heavily uses templates.

Examples:
- `vector<int>`
- `list<string>`
- `map<int, string>`

Example:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {1, 2, 3};

    cout << numbers[0];

    return 0;
}
```

---

# 39. Advantages of Templates

Advantages:
- Code reuse
- Flexibility
- Type safety
- Cleaner code
- Generic programming support

---

# 40. Disadvantages of Templates

Disadvantages:
- Complex error messages
- Increased compilation time
- Code bloat
- Difficult debugging

---

# 41. Best Practices for Templates

Best practices:
- Keep templates simple
- Use meaningful type names
- Avoid unnecessary specialization
- Use STL when possible
- Place template definitions in headers

---

# 42. Common Mistakes in Templates

## Defining Templates in Source Files

Wrong:

```cpp
// test.cpp
template <typename T>
void show(T x)
{
}
```

May cause linker errors.

---

## Incorrect Specialization

Wrong:

```cpp
template <>
void show(int x)
{
}
```

Without matching template declaration.

---

## Excessive Complexity

Overly complicated templates reduce readability.

---

# 43. Real-World Applications

Overriding applications:
- Game engines
- GUI systems
- Frameworks
- Plugin systems

Template applications:
- STL containers
- Generic libraries
- Data structures
- Mathematical libraries

---

# 44. Summary

Function overriding enables:
- Runtime polymorphism
- Flexible object-oriented programming

Important concepts:
- Virtual functions
- Override keyword
- Abstract classes
- Dynamic binding

Templates enable:
- Generic programming
- Reusable code
- Type-independent functions and classes

Important template concepts:
- Function templates
- Class templates
- Specialization
- Variadic templates
