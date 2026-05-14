# Class in C++

## Table of Contents

1. Introduction to Classes
2. What is a Class?
3. Why Classes are Important
4. Object-Oriented Programming
5. Class Syntax
6. Creating Objects
7. Accessing Class Members
8. Member Variables
9. Member Functions
10. Access Specifiers
11. Public Members
12. Private Members
13. Protected Members
14. Constructors
15. Default Constructors
16. Parameterized Constructors
17. Constructor Overloading
18. Destructors
19. this Pointer
20. Getters and Setters
21. Encapsulation
22. Abstraction
23. Static Members
24. Static Functions
25. Constant Objects
26. Const Member Functions
27. Friend Functions
28. Friend Classes
29. Inline Member Functions
30. Nested Classes
31. Arrays of Objects
32. Pointers to Objects
33. Dynamic Object Allocation
34. Passing Objects to Functions
35. Returning Objects from Functions
36. Copy Constructor
37. Assignment Operator
38. Operator Overloading
39. Inheritance
40. Polymorphism
41. Virtual Functions
42. Pure Virtual Functions
43. Abstract Classes
44. Class vs Struct
45. Common Class Operations
46. Common Mistakes
47. Best Practices
48. Real-World Applications
49. Summary

---

# 1. Introduction to Classes

Classes are one of the most important features in C++.

A class allows programmers to:
- Create custom data types
- Combine data and functions
- Implement object-oriented programming (OOP)

Example:

```cpp
#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;
};

int main()
{
    Student s;

    s.name = "John";
    s.age = 20;

    cout << s.name << endl;
    cout << s.age << endl;

    return 0;
}
```

Output:

```text
John
20
```

---

# 2. What is a Class?

A class is a blueprint for creating objects.

A class contains:
- Variables (data members)
- Functions (member functions)

Example:

```cpp
class Car
{
public:
    string brand;
    int year;
};
```

---

# 3. Why Classes are Important

Classes provide:
- Better organization
- Data protection
- Code reusability
- Modular programming
- Easier maintenance

Used in:
- Game engines
- Banking systems
- Databases
- Operating systems
- Web applications

---

# 4. Object-Oriented Programming

Classes are the foundation of OOP.

Main OOP concepts:
- Encapsulation
- Inheritance
- Polymorphism
- Abstraction

---

# 5. Class Syntax

Syntax:

```cpp
class ClassName
{
accessSpecifier:
    dataMembers;

    memberFunctions;
};
```

Example:

```cpp
class Employee
{
public:
    string name;
    int salary;
};
```

---

# 6. Creating Objects

Objects are instances of a class.

Example:

```cpp
Employee e1;
```

Multiple objects:

```cpp
Employee e1, e2, e3;
```

---

# 7. Accessing Class Members

Using the dot operator (`.`):

Example:

```cpp
#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
};

int main()
{
    Person p;

    p.name = "Alice";
    p.age = 25;

    cout << p.name << endl;
    cout << p.age << endl;

    return 0;
}
```

---

# 8. Member Variables

Member variables store object data.

Example:

```cpp
class Student
{
public:
    string name;
    int age;
};
```

Here:
- `name`
- `age`

are member variables.

---

# 9. Member Functions

Member functions define object behavior.

Example:

```cpp
#include <iostream>
using namespace std;

class Rectangle
{
public:
    int width;
    int height;

    int area()
    {
        return width * height;
    }
};

int main()
{
    Rectangle r;

    r.width = 5;
    r.height = 4;

    cout << r.area();

    return 0;
}
```

Output:

```text
20
```

---

# 10. Access Specifiers

C++ provides:
- `public`
- `private`
- `protected`

They control accessibility.

---

# 11. Public Members

Public members can be accessed outside the class.

Example:

```cpp
class Test
{
public:
    int value;
};
```

---

# 12. Private Members

Private members cannot be accessed directly outside the class.

Example:

```cpp
class BankAccount
{
private:
    double balance;
};
```

---

# 13. Protected Members

Protected members:
- Accessible inside the class
- Accessible in derived classes

Example:

```cpp
class Animal
{
protected:
    int age;
};
```

---

# 14. Constructors

Constructors initialize objects automatically.

Rules:
- Same name as class
- No return type

Example:

```cpp
#include <iostream>
using namespace std;

class Student
{
public:
    string name;

    Student()
    {
        name = "Unknown";
    }
};

int main()
{
    Student s;

    cout << s.name;

    return 0;
}
```

Output:

```text
Unknown
```

---

# 15. Default Constructors

A constructor with no parameters.

Example:

```cpp
Student()
{
}
```

---

# 16. Parameterized Constructors

Example:

```cpp
#include <iostream>
using namespace std;

class Student
{
public:
    string name;

    Student(string n)
    {
        name = n;
    }
};

int main()
{
    Student s("John");

    cout << s.name;

    return 0;
}
```

Output:

```text
John
```

---

# 17. Constructor Overloading

Multiple constructors with different parameters.

Example:

```cpp
class Student
{
public:
    Student()
    {
    }

    Student(string name)
    {
    }
};
```

---

# 18. Destructors

Destructors clean up objects.

Syntax:

```cpp
~ClassName()
{
}
```

Example:

```cpp
class Test
{
public:
    ~Test()
    {
        cout << "Destroyed";
    }
};
```

---

# 19. this Pointer

`this` points to the current object.

Example:

```cpp
class Student
{
public:
    string name;

    void setName(string name)
    {
        this->name = name;
    }
};
```

---

# 20. Getters and Setters

Used to access private data safely.

Example:

```cpp
#include <iostream>
using namespace std;

class Student
{
private:
    int age;

public:
    void setAge(int a)
    {
        age = a;
    }

    int getAge()
    {
        return age;
    }
};

int main()
{
    Student s;

    s.setAge(20);

    cout << s.getAge();

    return 0;
}
```

Output:

```text
20
```

---

# 21. Encapsulation

Encapsulation means:
- Hiding internal data
- Providing controlled access

Usually achieved with:
- Private members
- Public getters/setters

---

# 22. Abstraction

Abstraction means:
- Hiding implementation details
- Showing only necessary features

Example:
- User uses a car without knowing engine internals

---

# 23. Static Members

Static members belong to the class, not objects.

Example:

```cpp
#include <iostream>
using namespace std;

class Test
{
public:
    static int count;
};

int Test::count = 0;

int main()
{
    cout << Test::count;

    return 0;
}
```

---

# 24. Static Functions

Static functions:
- Belong to the class
- Can access only static members

Example:

```cpp
class Test
{
public:
    static void show()
    {
        cout << "Static function";
    }
};
```

---

# 25. Constant Objects

Example:

```cpp
const Student s;
```

Constant objects:
- Cannot modify data members

---

# 26. Const Member Functions

Syntax:

```cpp
int getValue() const
{
}
```

Const functions:
- Cannot modify object data

---

# 27. Friend Functions

Friend functions can access private members.

Example:

```cpp
#include <iostream>
using namespace std;

class Test
{
private:
    int value = 10;

    friend void show(Test t);
};

void show(Test t)
{
    cout << t.value;
}

int main()
{
    Test t;

    show(t);

    return 0;
}
```

---

# 28. Friend Classes

Example:

```cpp
class A
{
    friend class B;
};
```

Class `B` can access private members of `A`.

---

# 29. Inline Member Functions

Functions defined inside the class are usually inline.

Example:

```cpp
class Test
{
public:
    void show()
    {
        cout << "Hello";
    }
};
```

---

# 30. Nested Classes

Classes inside other classes.

Example:

```cpp
class Outer
{
public:
    class Inner
    {
    public:
        void show()
        {
            cout << "Inner class";
        }
    };
};
```

---

# 31. Arrays of Objects

Example:

```cpp
#include <iostream>
using namespace std;

class Student
{
public:
    string name;
};

int main()
{
    Student students[2];

    students[0].name = "John";
    students[1].name = "Alice";

    cout << students[0].name << endl;
    cout << students[1].name << endl;

    return 0;
}
```

---

# 32. Pointers to Objects

Example:

```cpp
#include <iostream>
using namespace std;

class Student
{
public:
    string name;
};

int main()
{
    Student s;

    s.name = "John";

    Student* ptr = &s;

    cout << ptr->name;

    return 0;
}
```

Output:

```text
John
```

---

# 33. Dynamic Object Allocation

Using `new`:

```cpp
#include <iostream>
using namespace std;

class Car
{
public:
    string brand;
};

int main()
{
    Car* car = new Car;

    car->brand = "Toyota";

    cout << car->brand;

    delete car;

    return 0;
}
```

---

# 34. Passing Objects to Functions

Example:

```cpp
void show(Student s)
{
}
```

Better approach:

```cpp
void show(const Student& s)
{
}
```

---

# 35. Returning Objects from Functions

Example:

```cpp
#include <iostream>
using namespace std;

class Point
{
public:
    int x;
    int y;
};

Point createPoint()
{
    Point p;

    p.x = 10;
    p.y = 20;

    return p;
}

int main()
{
    Point p = createPoint();

    cout << p.x << " " << p.y;

    return 0;
}
```

Output:

```text
10 20
```

---

# 36. Copy Constructor

Used when copying objects.

Syntax:

```cpp
ClassName(const ClassName& other)
{
}
```

Example:

```cpp
class Test
{
public:
    Test(const Test& other)
    {
    }
};
```

---

# 37. Assignment Operator

Used for object assignment.

Example:

```cpp
a = b;
```

Can be overloaded:

```cpp
ClassName& operator=(const ClassName& other)
{
}
```

---

# 38. Operator Overloading

Classes can overload operators.

Example:

```cpp
#include <iostream>
using namespace std;

class Number
{
public:
    int value;

    Number operator+(Number other)
    {
        Number result;

        result.value = value + other.value;

        return result;
    }
};

int main()
{
    Number a, b, c;

    a.value = 10;
    b.value = 20;

    c = a + b;

    cout << c.value;

    return 0;
}
```

Output:

```text
30
```

---

# 39. Inheritance

Inheritance allows one class to inherit from another.

Example:

```cpp
class Animal
{
public:
    void eat()
    {
        cout << "Eating";
    }
};

class Dog : public Animal
{
};
```

---

# 40. Polymorphism

Polymorphism means:
- One interface
- Multiple behaviors

Main types:
- Compile-time polymorphism
- Run-time polymorphism

---

# 41. Virtual Functions

Virtual functions enable run-time polymorphism.

Example:

```cpp
#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal sound";
    }
};

class Dog : public Animal
{
public:
    void sound() override
    {
        cout << "Bark";
    }
};

int main()
{
    Animal* a = new Dog;

    a->sound();

    delete a;

    return 0;
}
```

Output:

```text
Bark
```

---

# 42. Pure Virtual Functions

Syntax:

```cpp
virtual void show() = 0;
```

Pure virtual functions:
- Have no implementation
- Must be overridden

---

# 43. Abstract Classes

Classes containing pure virtual functions.

Example:

```cpp
class Shape
{
public:
    virtual void draw() = 0;
};
```

Abstract classes:
- Cannot create objects directly

---

# 44. Class vs Struct

## Class

Default access:
- Private

## Struct

Default access:
- Public

---

# 45. Common Class Operations

Common operations:
- Create objects
- Access members
- Call functions
- Use constructors
- Inherit classes
- Overload operators

---

# 46. Common Mistakes

## Forgetting Access Specifiers

Wrong:

```cpp
class Test
{
    int value;
};
```

`value` is private by default.

---

## Forgetting delete

Wrong:

```cpp
Car* car = new Car;
```

Memory leak if not deleted.

---

## Using Uninitialized Data

Wrong:

```cpp
Student s;

cout << s.age;
```

---

## Forgetting Virtual Destructor

Problem when deleting derived objects through base pointers.

Correct:

```cpp
virtual ~Animal()
{
}
```

---

# 47. Best Practices

Best practices:
- Keep data private
- Use constructors
- Use const correctness
- Pass objects by reference
- Use meaningful class names
- Follow OOP principles
- Avoid unnecessary dynamic allocation

Good example:

```cpp
class Student
{
private:
    string name;

public:
    void setName(string n)
    {
        name = n;
    }
};
```

---

# 48. Real-World Applications

Classes are used in:
- Game development
- Banking systems
- Operating systems
- Databases
- Web applications
- AI systems
- Embedded systems

Examples:
- User accounts
- Vehicles
- Network connections
- GUI components
- Database models

---

# 49. Summary

Classes are the foundation of object-oriented programming in C++.

A class:
- Combines data and functions
- Creates reusable components
- Improves organization and maintainability

Important concepts:
- Constructors
- Destructors
- Encapsulation
- Inheritance
- Polymorphism
- Abstraction

Important features:
- Access specifiers
- Member functions
- Static members
- Operator overloading
- Virtual functions

Classes are essential for:
- Software engineering
- Large-scale applications
- Modern C++ programming
- Object-oriented design
```