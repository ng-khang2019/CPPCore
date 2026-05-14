# Pair in C++

## Table of Contents

1. Introduction to Pair
2. What is a Pair?
3. Why Pairs are Important
4. Characteristics of Pairs
5. Header File for Pair
6. Declaring Pairs
7. Initializing Pairs
8. Accessing Pair Elements
9. first and second Members
10. Modifying Pair Values
11. Creating Pairs with make_pair()
12. Nested Pairs
13. Arrays of Pairs
14. Vectors of Pairs
15. Pair with Different Data Types
16. Passing Pairs to Functions
17. Returning Pairs from Functions
18. Pair Comparison
19. Lexicographical Comparison
20. Swapping Pairs
21. Pair Assignment
22. Structured Bindings
23. Pair in STL Containers
24. Pair in Maps
25. Pair in Unordered Maps
26. Pair in Priority Queues
27. Sorting Pairs
28. Custom Sorting of Pairs
29. Pair with Tuples
30. Pair with Classes and Structs
31. Pair Utilities
32. Common Pair Operations
33. Common Mistakes
34. Best Practices
35. Real-World Applications
36. Summary

---

# 1. Introduction to Pair

A `pair` is a container in the C++ Standard Template Library (STL).

A pair stores:
- Two values
- Possibly different data types
- As a single object

Example:

```cpp
#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<int, string> student;

    student.first = 1;
    student.second = "John";

    cout << student.first << endl;
    cout << student.second << endl;

    return 0;
}
```

Output:

```text
1
John
```

---

# 2. What is a Pair?

A pair is a container that groups:
- Two values together

Syntax:

```cpp
pair<dataType1, dataType2> pairName;
```

Example:

```cpp
pair<int, string> student;
```

---

# 3. Why Pairs are Important

Pairs provide:
- Simple grouped storage
- Easy key-value representation
- Better code organization
- Convenient temporary data structures

Used in:
- Maps
- Graph algorithms
- Competitive programming
- STL containers
- Sorting operations

---

# 4. Characteristics of Pairs

Main characteristics:
- Stores exactly two values
- Values may have different types
- Supports comparison operators
- Lightweight container

Example:

```cpp
pair<int, double>
```

---

# 5. Header File for Pair

Required header:

```cpp
#include <utility>
```

Sometimes included automatically through:
- `<map>`
- `<vector>`

But best practice is:

```cpp
#include <utility>
```

---

# 6. Declaring Pairs

Examples:

```cpp
pair<int, int> point;

pair<string, int> student;

pair<int, double> data;
```

---

# 7. Initializing Pairs

Example:

```cpp
pair<int, string> student(1, "John");
```

Using braces:

```cpp
pair<int, string> student{1, "John"};
```

---

# 8. Accessing Pair Elements

Pairs use:
- `.first`
- `.second`

Example:

```cpp
#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<int, string> student(1, "Alice");

    cout << student.first << endl;
    cout << student.second << endl;

    return 0;
}
```

Output:

```text
1
Alice
```

---

# 9. first and second Members

A pair contains:
- `first`
- `second`

Example:

```cpp
pair<int, string> data;

data.first = 10;
data.second = "Hello";
```

---

# 10. Modifying Pair Values

Example:

```cpp
#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<int, string> student(1, "John");

    student.second = "Alice";

    cout << student.second;

    return 0;
}
```

Output:

```text
Alice
```

---

# 11. Creating Pairs with make_pair()

`make_pair()` automatically determines types.

Example:

```cpp
#include <iostream>
#include <utility>
using namespace std;

int main()
{
    auto student = make_pair(1, "John");

    cout << student.second;

    return 0;
}
```

Output:

```text
John
```

---

# 12. Nested Pairs

Pairs can contain other pairs.

Example:

```cpp
#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<int, pair<string, int>> data;

    data.first = 1;
    data.second.first = "John";
    data.second.second = 20;

    cout << data.second.first;

    return 0;
}
```

Output:

```text
John
```

---

# 13. Arrays of Pairs

Example:

```cpp
#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<int, string> students[2];

    students[0] = {1, "John"};
    students[1] = {2, "Alice"};

    cout << students[0].second << endl;
    cout << students[1].second << endl;

    return 0;
}
```

---

# 14. Vectors of Pairs

Example:

```cpp
#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main()
{
    vector<pair<int, string>> students;

    students.push_back({1, "John"});
    students.push_back({2, "Alice"});

    for (auto student : students)
    {
        cout << student.first << " ";
        cout << student.second << endl;
    }

    return 0;
}
```

---

# 15. Pair with Different Data Types

Example:

```cpp
pair<int, double> data;

pair<string, char> info;

pair<int, bool> result;
```

---

# 16. Passing Pairs to Functions

Example:

```cpp
#include <iostream>
#include <utility>
using namespace std;

void print(pair<int, string> student)
{
    cout << student.second;
}

int main()
{
    pair<int, string> s(1, "John");

    print(s);

    return 0;
}
```

Better approach:

```cpp
void print(const pair<int, string>& student)
```

---

# 17. Returning Pairs from Functions

Example:

```cpp
#include <iostream>
#include <utility>
using namespace std;

pair<int, int> getCoordinates()
{
    return {10, 20};
}

int main()
{
    pair<int, int> point = getCoordinates();

    cout << point.first << endl;
    cout << point.second << endl;

    return 0;
}
```

Output:

```text
10
20
```

---

# 18. Pair Comparison

Pairs support comparison operators:
- `==`
- `!=`
- `<`
- `>`
- `<=`
- `>=`

Example:

```cpp
pair<int, int> a(1, 2);
pair<int, int> b(1, 3);

if (a < b)
{
    cout << "a is smaller";
}
```

---

# 19. Lexicographical Comparison

Pairs compare:
1. `first`
2. `second`

Example:

```cpp
pair<int, int> a(1, 5);
pair<int, int> b(2, 1);
```

Result:

```text
a < b
```

Because:
- `1 < 2`

---

# 20. Swapping Pairs

Using `swap()`:

Example:

```cpp
#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<int, string> a(1, "John");
    pair<int, string> b(2, "Alice");

    swap(a, b);

    cout << a.second;

    return 0;
}
```

Output:

```text
Alice
```

---

# 21. Pair Assignment

Example:

```cpp
pair<int, string> a;

a = {1, "John"};
```

Or:

```cpp
a = make_pair(1, "John");
```

---

# 22. Structured Bindings

Introduced in:
- C++17

Example:

```cpp
#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<int, string> student(1, "John");

    auto [id, name] = student;

    cout << id << endl;
    cout << name << endl;

    return 0;
}
```

Output:

```text
1
John
```

---

# 23. Pair in STL Containers

Example:

```cpp
vector<pair<int, int>> points;
```

Common combinations:
- `vector<pair<int, int>>`
- `set<pair<int, int>>`
- `queue<pair<int, int>>`

---

# 24. Pair in Maps

Maps internally store elements as pairs.

Example:

```cpp
map<int, string> students;
```

Each element:

```cpp
pair<const int, string>
```

Traversal example:

```cpp
for (auto item : students)
{
    cout << item.first << " ";
    cout << item.second << endl;
}
```

---

# 25. Pair in Unordered Maps

Example:

```cpp
unordered_map<int, string> students;
```

Internally uses pairs:
- Key-value pairs

---

# 26. Pair in Priority Queues

Example:

```cpp
#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int main()
{
    priority_queue<pair<int, int>> pq;

    pq.push({1, 10});
    pq.push({2, 20});

    cout << pq.top().first;

    return 0;
}
```

Output:

```text
2
```

---

# 27. Sorting Pairs

Pairs support automatic sorting.

Example:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<pair<int, string>> data =
    {
        {2, "Bob"},
        {1, "Alice"}
    };

    sort(data.begin(), data.end());

    for (auto item : data)
    {
        cout << item.first << " ";
        cout << item.second << endl;
    }

    return 0;
}
```

Output:

```text
1 Alice
2 Bob
```

---

# 28. Custom Sorting of Pairs

Example:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

int main()
{
    vector<pair<int, int>> data =
    {
        {1, 30},
        {2, 10},
        {3, 20}
    };

    sort(data.begin(), data.end(), compare);

    for (auto item : data)
    {
        cout << item.first << " ";
        cout << item.second << endl;
    }

    return 0;
}
```

Output:

```text
2 10
3 20
1 30
```

---

# 29. Pair with Tuples

A pair is similar to a tuple with 2 elements.

Example:

```cpp
pair<int, string>
```

Equivalent concept:

```cpp
tuple<int, string>
```

Difference:
- Pair stores exactly 2 values
- Tuple stores multiple values

---

# 30. Pair with Classes and Structs

Pairs can store custom types.

Example:

```cpp
#include <iostream>
#include <utility>
using namespace std;

struct Student
{
    string name;
};

int main()
{
    Student s;

    s.name = "John";

    pair<int, Student> data(1, s);

    cout << data.second.name;

    return 0;
}
```

---

# 31. Pair Utilities

Useful functions:
- `make_pair()`
- `swap()`

Useful features:
- Comparison operators
- Structured bindings

---

# 32. Common Pair Operations

Common operations:
- Create pairs
- Access values
- Modify values
- Compare pairs
- Sort pairs
- Store in containers

---

# 33. Common Mistakes

## Forgetting Header File

Wrong:

```cpp
#include <iostream>
```

Need:

```cpp
#include <utility>
```

---

## Confusing first and second

Wrong logic:

```cpp
student.first = "John";
```

If:
- `first` is integer type

---

## Using Wrong Data Types

Wrong:

```cpp
pair<int, int> data;

data.second = "Hello";
```

---

# 34. Best Practices

Best practices:
- Use meaningful ordering
- Use structured bindings in C++17
- Use pairs for simple grouped data
- Prefer structs/classes for complex data
- Pass pairs by reference when appropriate

Good example:

```cpp
auto [id, name] = student;
```

---

# 35. Real-World Applications

Pairs are used in:
- Graph algorithms
- Competitive programming
- Maps
- Sorting systems
- Coordinate systems
- Database records

Examples:
- Coordinates `(x, y)`
- Key-value storage
- Edges in graphs
- Ranking systems
- Search algorithms

---

# 36. Summary

A `pair` is an STL container that:
- Stores two values
- Supports different data types
- Provides lightweight grouped storage

Important members:
- `first`
- `second`

Important functions:
- `make_pair()`
- `swap()`

Important concepts:
- Lexicographical comparison
- Structured bindings
- Sorting pairs

Related containers:
- `tuple`
- `map`
- `vector`

Pairs are widely used in:
- STL programming
- Algorithms
- Competitive programming
- Modern C++ development