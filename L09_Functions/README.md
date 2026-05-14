# Functions in C++

## Table of Contents

1. Introduction to Functions
2. Why Functions Are Important
3. Basic Syntax of a Function
4. Function Declaration
5. Function Definition
6. Function Calling
7. Return Type
8. Void Functions
9. Parameters and Arguments
10. Pass by Value
11. Pass by Reference
12. Pass by Pointer
13. Default Parameters
14. Function Overloading
15. Inline Functions
16. Recursive Functions
17. Function Prototypes
18. Scope of Variables
19. Local Variables
20. Global Variables
21. Static Variables in Functions
22. Constant Parameters
23. Returning Values
24. Returning References
25. Returning Pointers
26. Lambda Functions
27. Function Templates
28. Built-in Functions
29. Friend Functions
30. Member Functions
31. Constructor Functions
32. Destructor Functions
33. Best Practices
34. Common Mistakes
35. Summary

---

# 1. Introduction to Functions

A function is a reusable block of code that performs a specific task.

Functions help programmers:
- Organize code
- Reuse logic
- Improve readability
- Reduce duplication
- Simplify debugging

Example:

```cpp
#include <iostream>
using namespace std;

void greet()
{
    cout << "Hello World" << endl;
}

int main()
{
    greet();

    return 0;
}
```

Output:

```text
Hello World
```

---

# 2. Why Functions Are Important

Without functions, programs become large and difficult to maintain.

Functions provide:
- Modularity
- Code reusability
- Better testing
- Easier maintenance

Example without functions:

```cpp
cout << 5 + 10 << endl;
cout << 20 + 30 << endl;
cout << 7 + 9 << endl;
```

Example with functions:

```cpp
int add(int a, int b)
{
    return a + b;
}

cout << add(5, 10) << endl;
cout << add(20, 30) << endl;
cout << add(7, 9) << endl;
```

---

# 3. Basic Syntax of a Function

General syntax:

```cpp
returnType functionName(parameters)
{
    // code
}
```

Example:

```cpp
int square(int number)
{
    return number * number;
}
```

Components:
- `int` → return type
- `square` → function name
- `int number` → parameter
- `return` → sends value back

---

# 4. Function Declaration

A function declaration tells the compiler:
- Function name
- Return type
- Parameters

Syntax:

```cpp
returnType functionName(parameters);
```

Example:

```cpp
int add(int a, int b);
```

Declarations are usually placed before `main()`.

---

# 5. Function Definition

A function definition contains the actual implementation.

Example:

```cpp
int add(int a, int b)
{
    return a + b;
}
```

---

# 6. Function Calling

Calling a function means executing it.

Example:

```cpp
#include <iostream>
using namespace std;

void greet()
{
    cout << "Welcome" << endl;
}

int main()
{
    greet();

    return 0;
}
```

---

# 7. Return Type

The return type specifies what value a function sends back.

Example:

```cpp
int multiply(int a, int b)
{
    return a * b;
}
```

Possible return types:
- `int`
- `double`
- `char`
- `bool`
- `string`
- `void`

---

# 8. Void Functions

A `void` function does not return a value.

Example:

```cpp
void printMessage()
{
    cout << "Learning C++" << endl;
}
```

---

# 9. Parameters and Arguments

Parameters:
- Variables in function definition

Arguments:
- Actual values passed to the function

Example:

```cpp
void display(int age)
{
    cout << age << endl;
}

int main()
{
    display(25);

    return 0;
}
```

- `age` → parameter
- `25` → argument

---

# 10. Pass by Value

A copy of the variable is passed.

Changes inside the function do not affect the original variable.

Example:

```cpp
#include <iostream>
using namespace std;

void changeValue(int x)
{
    x = 100;
}

int main()
{
    int number = 50;

    changeValue(number);

    cout << number << endl;

    return 0;
}
```

Output:

```text
50
```

---

# 11. Pass by Reference

The actual variable is passed using `&`.

Changes affect the original variable.

Example:

```cpp
#include <iostream>
using namespace std;

void changeValue(int &x)
{
    x = 100;
}

int main()
{
    int number = 50;

    changeValue(number);

    cout << number << endl;

    return 0;
}
```

Output:

```text
100
```

---

# 12. Pass by Pointer

A memory address is passed.

Example:

```cpp
#include <iostream>
using namespace std;

void changeValue(int *x)
{
    *x = 200;
}

int main()
{
    int number = 50;

    changeValue(&number);

    cout << number << endl;

    return 0;
}
```

Output:

```text
200
```

---

# 13. Default Parameters

Default values can be assigned to parameters.

Example:

```cpp
#include <iostream>
using namespace std;

void greet(string name = "Guest")
{
    cout << "Hello " << name << endl;
}

int main()
{
    greet();
    greet("John");

    return 0;
}
```

Output:

```text
Hello Guest
Hello John
```

---

# 14. Function Overloading

Multiple functions can have the same name if parameters differ.

Example:

```cpp
#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

int main()
{
    cout << add(5, 3) << endl;
    cout << add(2.5, 1.5) << endl;

    return 0;
}
```

---

# 15. Inline Functions

Inline functions reduce function call overhead.

Syntax:

```cpp
inline returnType functionName(parameters)
{
    // code
}
```

Example:

```cpp
inline int square(int x)
{
    return x * x;
}
```

---

# 16. Recursive Functions

A recursive function calls itself.

Example:

```cpp
#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int main()
{
    cout << factorial(5);

    return 0;
}
```

Output:

```text
120
```

---

# 17. Function Prototypes

A function prototype informs the compiler about the function before use.

Example:

```cpp
#include <iostream>
using namespace std;

int add(int, int);

int main()
{
    cout << add(5, 3);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}
```

---

# 18. Scope of Variables

Scope defines where variables can be accessed.

Types:
- Local scope
- Global scope

---

# 19. Local Variables

Declared inside a function.

Example:

```cpp
void test()
{
    int x = 10;
}
```

`x` exists only inside `test()`.

---

# 20. Global Variables

Declared outside all functions.

Example:

```cpp
#include <iostream>
using namespace std;

int number = 100;

void show()
{
    cout << number << endl;
}

int main()
{
    show();

    return 0;
}
```

---

# 21. Static Variables in Functions

Static variables retain values between function calls.

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

# 22. Constant Parameters

Prevent modification using `const`.

Example:

```cpp
void display(const int x)
{
    cout << x << endl;
}
```

---

# 23. Returning Values

Functions can return values.

Example:

```cpp
int maximum(int a, int b)
{
    if (a > b)
    {
        return a;
    }

    return b;
}
```

---

# 24. Returning References

Functions may return references.

Example:

```cpp
#include <iostream>
using namespace std;

int& getValue(int &x)
{
    return x;
}

int main()
{
    int number = 10;

    getValue(number) = 50;

    cout << number << endl;

    return 0;
}
```

Output:

```text
50
```

---

# 25. Returning Pointers

Functions may return pointers.

Example:

```cpp
#include <iostream>
using namespace std;

int* getPointer(int &x)
{
    return &x;
}

int main()
{
    int number = 100;

    int* ptr = getPointer(number);

    cout << *ptr << endl;

    return 0;
}
```

---

# 26. Lambda Functions

Lambda functions are anonymous functions.

Syntax:

```cpp
[capture](parameters) -> returnType
{
    // code
};
```

Example:

```cpp
#include <iostream>
using namespace std;

int main()
{
    auto add = [](int a, int b)
    {
        return a + b;
    };

    cout << add(5, 7);

    return 0;
}
```

---

# 27. Function Templates

Templates allow generic functions.

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

---

# 28. Built-in Functions

C++ provides many built-in functions.

Examples:
- `sqrt()`
- `pow()`
- `strlen()`
- `toupper()`

Example:

```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << sqrt(25);

    return 0;
}
```

---

# 29. Friend Functions

A friend function can access private members of a class.

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

# 30. Member Functions

Functions inside a class are called member functions.

Example:

```cpp
#include <iostream>
using namespace std;

class Car
{
public:
    void start()
    {
        cout << "Car Started" << endl;
    }
};

int main()
{
    Car c;

    c.start();

    return 0;
}
```

---

# 31. Constructor Functions

Constructors initialize objects.

Example:

```cpp
#include <iostream>
using namespace std;

class Student
{
public:
    Student()
    {
        cout << "Constructor Called" << endl;
    }
};

int main()
{
    Student s;

    return 0;
}
```

---

# 32. Destructor Functions

Destructors clean up resources.

Example:

```cpp
#include <iostream>
using namespace std;

class Student
{
public:
    ~Student()
    {
        cout << "Destructor Called" << endl;
    }
};

int main()
{
    Student s;

    return 0;
}
```

---

# 33. Best Practices

Best practices for writing functions:

- Use meaningful names
- Keep functions short
- Avoid duplicate code
- Use comments when necessary
- Prefer pass by reference for large objects
- Use `const` whenever possible
- Make functions perform one task only

Good example:

```cpp
double calculateArea(double radius)
{
    return 3.14159 * radius * radius;
}
```

Bad example:

```cpp
double x(double r)
{
    return 3.14159 * r * r;
}
```

---

# 34. Common Mistakes

## Forgetting Return Statement

Wrong:

```cpp
int add(int a, int b)
{
    a + b;
}
```

Correct:

```cpp
int add(int a, int b)
{
    return a + b;
}
```

---

## Returning Local Variable Address

Wrong:

```cpp
int* test()
{
    int x = 10;

    return &x;
}
```

Reason:
- Local variables are destroyed after the function ends.

---

## Infinite Recursion

Wrong:

```cpp
void loop()
{
    loop();
}
```

Reason:
- Missing base condition.

---

# 35. Summary

Functions are one of the most important concepts in C++.

Key points:
- Functions improve code organization
- Functions reduce repetition
- Parameters allow data transfer
- Return values send results back
- References and pointers allow direct modification
- Overloading and templates improve flexibility
- Lambda functions support modern C++ programming


