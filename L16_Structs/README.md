# Struct in C++

## Table of Contents

1. Introduction to Struct
2. What is a Struct?
3. Why Structs are Important
4. Difference Between Variables and Structs
5. Declaring a Struct
6. Creating Struct Variables
7. Accessing Struct Members
8. Initializing Structs
9. Struct Memory Layout
10. Nested Structs
11. Arrays of Structs
12. Structs and Functions
13. Passing Structs to Functions
14. Returning Structs from Functions
15. Struct Pointers
16. Arrow Operator
17. Dynamic Struct Allocation
18. Structs and Constructors
19. Struct Member Functions
20. Struct vs Class
21. Default Access Modifier
22. Typedef with Struct
23. Anonymous Structs
24. Self-Referential Structs
25. Structs with Arrays
26. Structs with Strings
27. Structs with Vectors
28. Structs Inside Classes
29. Struct Alignment and Padding
30. Bit Fields in Structs
31. Copying Structs
32. Comparing Structs
33. Structs and File Handling
34. Structs in STL Containers
35. Common Struct Operations
36. Common Mistakes
37. Best Practices
38. Real-World Applications
39. Summary

---

# 1. Introduction to Struct

A `struct` is a user-defined data type in C++.

Structs allow programmers to:
- Group related data together
- Create custom data types
- Organize complex information

Example:

```cpp
#include <iostream>
using namespace std;

struct Student
{
    string name;
    int age;
};

int main()
{
    Student s1;

    s1.name = "John";
    s1.age = 20;

    cout << s1.name << endl;
    cout << s1.age << endl;

    return 0;
}
```

Output:

```text
John
20
```

---

# 2. What is a Struct?

A struct is a collection of variables grouped under one name.

These variables are called:
- Members
- Fields

Example:

```cpp
struct Car
{
    string brand;
    int year;
};
```

---

# 3. Why Structs are Important

Structs provide:
- Better data organization
- Easier data management
- Improved readability
- Reusable custom types

Used in:
- Databases
- Game development
- Operating systems
- Networking
- File systems

---

# 4. Difference Between Variables and Structs

## Normal Variables

Store single values.

Example:

```cpp
int age;
```

## Structs

Store multiple related values.

Example:

```cpp
struct Student
{
    string name;
    int age;
};
```

---

# 5. Declaring a Struct

Syntax:

```cpp
struct StructName
{
    dataType member1;
    dataType member2;
};
```

Example:

```cpp
struct Employee
{
    string name;
    int salary;
};
```

---

# 6. Creating Struct Variables

Example:

```cpp
Employee e1;
```

Multiple variables:

```cpp
Employee e1, e2, e3;
```

---

# 7. Accessing Struct Members

Using the dot operator (`.`):

Example:

```cpp
#include <iostream>
using namespace std;

struct Person
{
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

# 8. Initializing Structs

Example:

```cpp
#include <iostream>
using namespace std;

struct Book
{
    string title;
    int pages;
};

int main()
{
    Book b = {"C++ Guide", 500};

    cout << b.title << endl;
    cout << b.pages << endl;

    return 0;
}
```

---

# 9. Struct Memory Layout

Struct members are stored sequentially in memory.

Example:

```cpp
struct Data
{
    int x;
    int y;
};
```

Memory:

```text
x y
```

---

# 10. Nested Structs

Structs can contain other structs.

Example:

```cpp
#include <iostream>
using namespace std;

struct Address
{
    string city;
};

struct Student
{
    string name;
    Address address;
};

int main()
{
    Student s;

    s.name = "John";
    s.address.city = "Tokyo";

    cout << s.address.city;

    return 0;
}
```

Output:

```text
Tokyo
```

---

# 11. Arrays of Structs

Example:

```cpp
#include <iostream>
using namespace std;

struct Student
{
    string name;
    int age;
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

# 12. Structs and Functions

Structs can be used with functions.

Example:

```cpp
void printStudent(Student s)
{
    cout << s.name;
}
```

---

# 13. Passing Structs to Functions

Example:

```cpp
#include <iostream>
using namespace std;

struct Student
{
    string name;
};

void display(Student s)
{
    cout << s.name;
}

int main()
{
    Student s;

    s.name = "John";

    display(s);

    return 0;
}
```

Better approach:

```cpp
void display(const Student& s)
```

---

# 14. Returning Structs from Functions

Example:

```cpp
#include <iostream>
using namespace std;

struct Point
{
    int x;
    int y;
};

Point createPoint()
{
    Point p = {10, 20};

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

# 15. Struct Pointers

Example:

```cpp
#include <iostream>
using namespace std;

struct Student
{
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

# 16. Arrow Operator

The arrow operator (`->`) is used with pointers.

Equivalent forms:

```cpp
ptr->name
```

and

```cpp
(*ptr).name
```

---

# 17. Dynamic Struct Allocation

Using `new`:

```cpp
#include <iostream>
using namespace std;

struct Car
{
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

# 18. Structs and Constructors

Structs can have constructors.

Example:

```cpp
#include <iostream>
using namespace std;

struct Student
{
    string name;
    int age;

    Student(string n, int a)
    {
        name = n;
        age = a;
    }
};

int main()
{
    Student s("John", 20);

    cout << s.name;

    return 0;
}
```

---

# 19. Struct Member Functions

Structs can contain functions.

Example:

```cpp
#include <iostream>
using namespace std;

struct Rectangle
{
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

# 20. Struct vs Class

Main difference:

## Struct

Default access:
- Public

## Class

Default access:
- Private

Example:

```cpp
struct A
{
    int x;
};

class B
{
    int x;
};
```

---

# 21. Default Access Modifier

Struct members are public by default.

Example:

```cpp
struct Test
{
    int value;
};
```

Equivalent to:

```cpp
struct Test
{
public:
    int value;
};
```

---

# 22. Typedef with Struct

Example:

```cpp
#include <iostream>
using namespace std;

typedef struct
{
    int x;
    int y;
} Point;

int main()
{
    Point p;

    p.x = 10;

    cout << p.x;

    return 0;
}
```

Modern alternative:

```cpp
using Point = struct
{
    int x;
    int y;
};
```

---

# 23. Anonymous Structs

Structs without names.

Example:

```cpp
struct
{
    int x;
    int y;
} point;
```

---

# 24. Self-Referential Structs

Structs can contain pointers to themselves.

Example:

```cpp
struct Node
{
    int data;
    Node* next;
};
```

Used in:
- Linked lists
- Trees
- Graphs

---

# 25. Structs with Arrays

Example:

```cpp
#include <iostream>
using namespace std;

struct Student
{
    char name[20];
    int marks[3];
};

int main()
{
    Student s =
    {
        "John",
        {90, 85, 88}
    };

    cout << s.name;

    return 0;
}
```

---

# 26. Structs with Strings

Example:

```cpp
#include <iostream>
using namespace std;

struct Employee
{
    string name;
    string department;
};

int main()
{
    Employee e;

    e.name = "Alice";
    e.department = "HR";

    cout << e.department;

    return 0;
}
```

---

# 27. Structs with Vectors

Example:

```cpp
#include <iostream>
#include <vector>
using namespace std;

struct Student
{
    string name;
    vector<int> scores;
};

int main()
{
    Student s;

    s.name = "John";
    s.scores = {90, 85, 88};

    for (int score : s.scores)
    {
        cout << score << " ";
    }

    return 0;
}
```

---

# 28. Structs Inside Classes

Example:

```cpp
#include <iostream>
using namespace std;

class School
{
public:
    struct Student
    {
        string name;
    };
};

int main()
{
    School::Student s;

    s.name = "John";

    cout << s.name;

    return 0;
}
```

---

# 29. Struct Alignment and Padding

Compilers may add padding for memory alignment.

Example:

```cpp
struct Test
{
    char a;
    int b;
};
```

Possible memory:

```text
a padding padding padding b
```

Check size:

```cpp
sizeof(Test)
```

---

# 30. Bit Fields in Structs

Bit fields save memory.

Example:

```cpp
struct Flags
{
    unsigned int isVisible : 1;
    unsigned int isDeleted : 1;
};
```

---

# 31. Copying Structs

Structs support direct copying.

Example:

```cpp
#include <iostream>
using namespace std;

struct Point
{
    int x;
    int y;
};

int main()
{
    Point p1 = {10, 20};

    Point p2 = p1;

    cout << p2.x;

    return 0;
}
```

Output:

```text
10
```

---

# 32. Comparing Structs

C++ does not automatically compare structs.

Example:

```cpp
struct Point
{
    int x;
    int y;
};
```

Need custom comparison logic.

---

# 33. Structs and File Handling

Structs are commonly used in binary files.

Example:

```cpp
struct Student
{
    char name[50];
    int age;
};
```

Used for:
- Records
- Databases
- Serialization

---

# 34. Structs in STL Containers

Example:

```cpp
#include <iostream>
#include <vector>
using namespace std;

struct Student
{
    string name;
};

int main()
{
    vector<Student> students;

    students.push_back({"John"});
    students.push_back({"Alice"});

    for (Student s : students)
    {
        cout << s.name << endl;
    }

    return 0;
}
```

---

# 35. Common Struct Operations

Common operations:
- Create objects
- Access members
- Copy objects
- Pass to functions
- Store in containers
- Dynamically allocate memory

---

# 36. Common Mistakes

## Forgetting Semicolon

Wrong:

```cpp
struct Test
{
    int x;
}
```

Correct:

```cpp
struct Test
{
    int x;
};
```

---

## Using Uninitialized Members

Wrong:

```cpp
Student s;

cout << s.age;
```

---

## Incorrect Pointer Access

Wrong:

```cpp
ptr.name
```

Correct:

```cpp
ptr->name
```

---

# 37. Best Practices

Best practices:
- Use meaningful member names
- Initialize members properly
- Pass structs by reference
- Use constructors when appropriate
- Keep structs simple and focused

Good example:

```cpp
struct Student
{
    string name;
    int age;
};
```

---

# 38. Real-World Applications

Structs are used in:
- Databases
- Game development
- Networking
- Operating systems
- Graphics programming
- Embedded systems
- File systems

Examples:
- Student records
- Employee databases
- Game objects
- Network packets
- Sensor data

---

# 39. Summary

A `struct` is a user-defined data type that:
- Groups related data
- Organizes complex information
- Improves readability

Important concepts:
- Member variables
- Member functions
- Constructors
- Struct pointers
- Nested structs
- Dynamic allocation

Key operators:
- `.`
- `->`

Structs are commonly used for:
- Data modeling
- Record management
- Custom data types
- Software engineering
- System programming

Structs are fundamental in modern C++ programming and are heavily used in:
- STL containers
- Algorithms
- Game engines
- Operating systems
- Real-world software applications