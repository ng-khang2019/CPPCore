# Name Visibility in C++

## Table of Contents

1. Introduction
2. What is Name Visibility?
3. Scope in C++
4. Local Scope
5. Global Scope
6. Block Scope
7. Function Scope
8. Class Scope
9. Namespace Scope
10. File Scope
11. Variable Shadowing
12. Scope Resolution Operator
13. Lifetime vs Visibility
14. Visibility in Nested Blocks
15. Visibility in Functions
16. Visibility in Loops
17. Visibility in Conditional Statements
18. Visibility of Function Parameters
19. Static Variables and Visibility
20. Namespaces and Visibility
21. Anonymous Namespaces
22. Using Directive
23. Using Declaration
24. Visibility in Classes
25. Public Members
26. Private Members
27. Protected Members
28. Visibility in Inheritance
29. Friend Functions and Visibility
30. Const Variables and Scope
31. Enum Visibility
32. Typedef and Using Visibility
33. Visibility of Variables in Header Files
34. Best Practices
35. Common Mistakes
36. Summary

---

# 1. Introduction

Name visibility in C++ refers to where a variable, function, class, or other identifier can be accessed within a program.

Understanding visibility is important because it helps:
- Prevent naming conflicts
- Improve code organization
- Increase security
- Reduce bugs
- Improve maintainability

Example:

```cpp
#include <iostream>
using namespace std;

int number = 100;

int main()
{
    cout << number << endl;

    return 0;
}
```

The variable `number` is visible inside `main()` because it is global.

---

# 2. What is Name Visibility?

Name visibility determines:
- Where a name can be used
- Where it can be accessed
- Where it exists in code

A name may refer to:
- Variables
- Functions
- Classes
- Objects
- Namespaces
- Enumerations

Example:

```cpp
int x = 10;

void test()
{
    cout << x;
}
```

`x` is visible inside `test()`.

---

# 3. Scope in C++

Scope defines the region of a program where a name is visible.

Main types:
- Local scope
- Global scope
- Block scope
- Function scope
- Class scope
- Namespace scope

---

# 4. Local Scope

A local variable is declared inside a function or block.

Example:

```cpp
#include <iostream>
using namespace std;

void show()
{
    int value = 50;

    cout << value << endl;
}

int main()
{
    show();

    return 0;
}
```

`value` exists only inside `show()`.

Trying to access it outside causes an error.

Wrong example:

```cpp
void test()
{
    int x = 10;
}

int main()
{
    cout << x;
}
```

---

# 5. Global Scope

A global variable is declared outside all functions.

Example:

```cpp
#include <iostream>
using namespace std;

int number = 100;

void display()
{
    cout << number << endl;
}

int main()
{
    display();

    return 0;
}
```

Global variables are visible throughout the file after declaration.

---

# 6. Block Scope

Variables declared inside braces `{}` belong to block scope.

Example:

```cpp
#include <iostream>
using namespace std;

int main()
{
    {
        int x = 20;

        cout << x << endl;
    }

    return 0;
}
```

`x` is visible only inside the block.

---

# 7. Function Scope

Labels used with `goto` have function scope.

Example:

```cpp
#include <iostream>
using namespace std;

int main()
{
start:
    cout << "Hello" << endl;

    return 0;
}
```

The label `start` is visible throughout the function.

---

# 8. Class Scope

Members inside a class belong to class scope.

Example:

```cpp
class Student
{
public:
    int age;

    void display()
    {
    }
};
```

`age` and `display()` are visible inside the class.

---

# 9. Namespace Scope

Names inside a namespace belong to namespace scope.

Example:

```cpp
#include <iostream>
using namespace std;

namespace Math
{
    int value = 100;
}

int main()
{
    cout << Math::value << endl;

    return 0;
}
```

---

# 10. File Scope

Names declared outside functions in a source file are visible from the declaration point to the end of the file.

Example:

```cpp
int globalValue = 10;
```

---

# 11. Variable Shadowing

A local variable can hide a global variable with the same name.

Example:

```cpp
#include <iostream>
using namespace std;

int number = 50;

int main()
{
    int number = 100;

    cout << number << endl;

    return 0;
}
```

Output:

```text
100
```

The local variable shadows the global variable.

---

# 12. Scope Resolution Operator

The scope resolution operator `::` accesses global names hidden by local names.

Example:

```cpp
#include <iostream>
using namespace std;

int number = 50;

int main()
{
    int number = 100;

    cout << number << endl;
    cout << ::number << endl;

    return 0;
}
```

Output:

```text
100
50
```

---

# 13. Lifetime vs Visibility

Visibility:
- Where a variable can be accessed

Lifetime:
- How long a variable exists in memory

Example:

```cpp
void test()
{
    int x = 10;
}
```

- `x` visibility → inside `test()`
- `x` lifetime → until function ends

---

# 14. Visibility in Nested Blocks

Inner blocks can access outer variables.

Example:

```cpp
#include <iostream>
using namespace std;

int main()
{
    int x = 10;

    {
        cout << x << endl;
    }

    return 0;
}
```

Outer blocks cannot access inner variables.

Wrong example:

```cpp
int main()
{
    {
        int y = 20;
    }

    cout << y;
}
```

---

# 15. Visibility in Functions

Variables declared inside a function are not visible outside.

Example:

```cpp
#include <iostream>
using namespace std;

void test()
{
    int value = 30;
}

int main()
{
    test();

    return 0;
}
```

---

# 16. Visibility in Loops

Variables declared inside loops exist only inside the loop.

Example:

```cpp
#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout << i << endl;
    }

    return 0;
}
```

`i` is visible only inside the loop.

---

# 17. Visibility in Conditional Statements

Variables declared inside `if`, `else`, or `switch` blocks are local to those blocks.

Example:

```cpp
#include <iostream>
using namespace std;

int main()
{
    if (true)
    {
        int x = 100;

        cout << x << endl;
    }

    return 0;
}
```

---

# 18. Visibility of Function Parameters

Function parameters are local to the function.

Example:

```cpp
#include <iostream>
using namespace std;

void display(int number)
{
    cout << number << endl;
}

int main()
{
    display(50);

    return 0;
}
```

`number` exists only inside `display()`.

---

# 19. Static Variables and Visibility

Static variables inside functions retain values between calls but remain locally visible.

Example:

```cpp
#include <iostream>
using namespace std;

void counter()
{
    static int count = 0;

    count++;

    cout << count << endl;
}

int main()
{
    counter();
    counter();
    counter();

    return 0;
}
```

Output:

```text
1
2
3
```

---

# 20. Namespaces and Visibility

Namespaces help avoid naming conflicts.

Example:

```cpp
#include <iostream>
using namespace std;

namespace First
{
    int value = 10;
}

namespace Second
{
    int value = 20;
}

int main()
{
    cout << First::value << endl;
    cout << Second::value << endl;

    return 0;
}
```

---

# 21. Anonymous Namespaces

Anonymous namespaces restrict visibility to the current file.

Example:

```cpp
namespace
{
    int hiddenValue = 50;
}
```

`hiddenValue` cannot be accessed from other files.

---

# 22. Using Directive

The `using namespace` directive makes all names visible without qualification.

Example:

```cpp
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello" << endl;

    return 0;
}
```

---

# 23. Using Declaration

A using declaration imports specific names only.

Example:

```cpp
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    cout << "Hello" << endl;

    return 0;
}
```

---

# 24. Visibility in Classes

Class members follow access control rules.

Three access levels:
- public
- private
- protected

---

# 25. Public Members

Public members are accessible from outside the class.

Example:

```cpp
#include <iostream>
using namespace std;

class Car
{
public:
    int speed;
};

int main()
{
    Car c;

    c.speed = 100;

    cout << c.speed << endl;

    return 0;
}
```

---

# 26. Private Members

Private members are accessible only inside the class.

Example:

```cpp
class Student
{
private:
    int marks;
};
```

Accessing `marks` outside the class causes an error.

---

# 27. Protected Members

Protected members are accessible:
- Inside the class
- Inside derived classes

Example:

```cpp
class Base
{
protected:
    int value;
};
```

---

# 28. Visibility in Inheritance

Inheritance affects member visibility.

Example:

```cpp
class Base
{
public:
    int x;
};

class Derived : public Base
{
};
```

`x` remains public in `Derived`.

---

# 29. Friend Functions and Visibility

Friend functions can access private members.

Example:

```cpp
#include <iostream>
using namespace std;

class Test
{
private:
    int value = 50;

public:
    friend void show(Test obj);
};

void show(Test obj)
{
    cout << obj.value;
}

int main()
{
    Test t;

    show(t);

    return 0;
}
```

---

# 30. Const Variables and Scope

Const variables follow normal scope rules.

Example:

```cpp
void test()
{
    const int value = 100;
}
```

`value` is visible only inside `test()`.

---

# 31. Enum Visibility

Enumerators follow scope rules depending on enum type.

Example:

```cpp
enum Color
{
    RED,
    BLUE
};
```

Scoped enum example:

```cpp
enum class Status
{
    SUCCESS,
    FAILED
};
```

Access:

```cpp
Status::SUCCESS
```

---

# 32. Typedef and Using Visibility

Type aliases follow normal scope rules.

Example:

```cpp
typedef int Integer;
```

Modern C++:

```cpp
using Integer = int;
```

---

# 33. Visibility of Variables in Header Files

Global variables in header files may cause multiple definition problems.

Wrong example:

```cpp
// header.h
int number = 100;
```

Correct example:

```cpp
// header.h
extern int number;
```

Definition:

```cpp
// source.cpp
int number = 100;
```

---

# 34. Best Practices

Best practices for name visibility:

- Minimize global variables
- Keep scope as small as possible
- Use namespaces
- Avoid shadowing variables
- Use meaningful names
- Prefer local variables
- Use access modifiers properly

Good example:

```cpp
void calculate()
{
    int total = 0;
}
```

Bad example:

```cpp
int total;
```

---

# 35. Common Mistakes

## Accessing Local Variables Outside Scope

Wrong:

```cpp
void test()
{
    int x = 10;
}

int main()
{
    cout << x;
}
```

---

## Variable Shadowing Confusion

Wrong:

```cpp
int value = 50;

int main()
{
    int value = 100;
}
```

---

## Excessive Global Variables

Wrong:

```cpp
int a;
int b;
int c;
int d;
```

Reason:
- Makes debugging difficult
- Reduces maintainability

---

# 36. Summary

Name visibility controls where identifiers can be accessed in a C++ program.

Important concepts:
- Scope determines visibility
- Local variables are safer
- Global variables should be minimized
- Namespaces prevent conflicts
- Classes use access modifiers
- Variable shadowing can cause confusion
- Smaller scope improves maintainability
