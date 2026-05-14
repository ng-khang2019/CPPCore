# Vector in C++

## Table of Contents

1. Introduction to Vectors
2. What is a Vector?
3. Why Vectors are Important
4. Advantages of Vectors
5. Header File for Vector
6. Declaring Vectors
7. Initializing Vectors
8. Accessing Vector Elements
9. Updating Elements
10. Vector Size
11. Vector Capacity
12. Empty Vectors
13. Adding Elements with push_back()
14. Removing Elements with pop_back()
15. Traversing Vectors
16. Range-Based Loops
17. Using Iterators
18. begin() and end()
19. front() and back()
20. at() Function
21. clear() Function
22. insert() Function
23. erase() Function
24. resize() Function
25. swap() Function
26. assign() Function
27. Vector of Strings
28. Vector of Objects
29. 2D Vectors
30. Nested Vectors
31. Passing Vectors to Functions
32. Returning Vectors from Functions
33. Sorting Vectors
34. Searching in Vectors
35. Vector Memory Management
36. Dynamic Resizing
37. Emplace Functions
38. Difference Between Arrays and Vectors
39. Vector Time Complexity
40. Common Vector Operations
41. Common Mistakes
42. Best Practices
43. Real-World Applications
44. Summary

---

# 1. Introduction to Vectors

Vectors are dynamic arrays provided by the C++ Standard Template Library (STL).

Unlike normal arrays:
- Vectors can grow dynamically
- Vectors automatically manage memory
- Vectors provide many useful functions

Example:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {10, 20, 30};

    cout << numbers[0];

    return 0;
}
```

Output:

```text
10
```

---

# 2. What is a Vector?

A vector is:
- A dynamic container
- That stores elements in contiguous memory

Syntax:

```cpp
vector<dataType> vectorName;
```

Example:

```cpp
vector<int> numbers;
```

---

# 3. Why Vectors are Important

Vectors provide:
- Dynamic sizing
- Automatic memory management
- Fast access
- STL compatibility

Used in:
- Competitive programming
- Game development
- Databases
- Algorithms
- Software engineering

---

# 4. Advantages of Vectors

Advantages:
- Dynamic size
- Easy insertion and deletion
- Automatic memory handling
- Rich built-in functions
- Safer than arrays

---

# 5. Header File for Vector

Required header:

```cpp
#include <vector>
```

---

# 6. Declaring Vectors

Examples:

```cpp
vector<int> numbers;

vector<double> prices;

vector<char> letters;
```

---

# 7. Initializing Vectors

## Empty Vector

```cpp
vector<int> numbers;
```

## With Values

```cpp
vector<int> numbers = {1, 2, 3, 4};
```

## Fixed Size

```cpp
vector<int> values(5);
```

Creates 5 elements initialized to `0`.

## Fixed Size with Custom Value

```cpp
vector<int> values(5, 100);
```

Output:

```text
100 100 100 100 100
```

---

# 8. Accessing Vector Elements

Using indexes:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {10, 20, 30};

    cout << numbers[1];

    return 0;
}
```

Output:

```text
20
```

---

# 9. Updating Elements

Example:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {1, 2, 3};

    numbers[1] = 100;

    cout << numbers[1];

    return 0;
}
```

Output:

```text
100
```

---

# 10. Vector Size

Using `.size()`:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {1, 2, 3, 4};

    cout << numbers.size();

    return 0;
}
```

Output:

```text
4
```

---

# 11. Vector Capacity

Capacity represents:
- Allocated memory size

Example:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers;

    cout << numbers.capacity();

    return 0;
}
```

---

# 12. Empty Vectors

Using `.empty()`:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers;

    if (numbers.empty())
    {
        cout << "Vector is empty";
    }

    return 0;
}
```

---

# 13. Adding Elements with push_back()

Example:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers;

    numbers.push_back(10);
    numbers.push_back(20);

    cout << numbers[1];

    return 0;
}
```

Output:

```text
20
```

---

# 14. Removing Elements with pop_back()

Removes the last element.

Example:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {1, 2, 3};

    numbers.pop_back();

    cout << numbers.size();

    return 0;
}
```

Output:

```text
2
```

---

# 15. Traversing Vectors

Using loops:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {1, 2, 3, 4};

    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}
```

---

# 16. Range-Based Loops

Example:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {1, 2, 3};

    for (int value : numbers)
    {
        cout << value << endl;
    }

    return 0;
}
```

---

# 17. Using Iterators

Iterators behave like pointers.

Example:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {10, 20, 30};

    vector<int>::iterator it;

    for (it = numbers.begin(); it != numbers.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}
```

---

# 18. begin() and end()

- `begin()` → first element
- `end()` → position after last element

Example:

```cpp
vector<int> numbers = {1, 2, 3};

cout << *numbers.begin();
```

Output:

```text
1
```

---

# 19. front() and back()

Example:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {10, 20, 30};

    cout << numbers.front() << endl;
    cout << numbers.back() << endl;

    return 0;
}
```

Output:

```text
10
30
```

---

# 20. at() Function

Provides bounds checking.

Example:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {1, 2, 3};

    cout << numbers.at(1);

    return 0;
}
```

Output:

```text
2
```

---

# 21. clear() Function

Removes all elements.

Example:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {1, 2, 3};

    numbers.clear();

    cout << numbers.size();

    return 0;
}
```

Output:

```text
0
```

---

# 22. insert() Function

Inserts elements at specific positions.

Example:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {1, 3};

    numbers.insert(numbers.begin() + 1, 2);

    for (int value : numbers)
    {
        cout << value << " ";
    }

    return 0;
}
```

Output:

```text
1 2 3
```

---

# 23. erase() Function

Removes elements.

Example:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {1, 2, 3};

    numbers.erase(numbers.begin() + 1);

    for (int value : numbers)
    {
        cout << value << " ";
    }

    return 0;
}
```

Output:

```text
1 3
```

---

# 24. resize() Function

Changes vector size.

Example:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {1, 2, 3};

    numbers.resize(5);

    cout << numbers.size();

    return 0;
}
```

Output:

```text
5
```

---

# 25. swap() Function

Swaps vector contents.

Example:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> first = {1, 2};
    vector<int> second = {3, 4};

    first.swap(second);

    for (int value : first)
    {
        cout << value << " ";
    }

    return 0;
}
```

Output:

```text
3 4
```

---

# 26. assign() Function

Assigns new values.

Example:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers;

    numbers.assign(3, 100);

    for (int value : numbers)
    {
        cout << value << " ";
    }

    return 0;
}
```

Output:

```text
100 100 100
```

---

# 27. Vector of Strings

Example:

```cpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> names = {"John", "Alice"};

    for (string name : names)
    {
        cout << name << endl;
    }

    return 0;
}
```

---

# 28. Vector of Objects

Example:

```cpp
#include <iostream>
#include <vector>
using namespace std;

class Student
{
public:
    string name;
};

int main()
{
    Student s1;
    s1.name = "John";

    vector<Student> students;

    students.push_back(s1);

    cout << students[0].name;

    return 0;
}
```

---

# 29. 2D Vectors

A vector can contain vectors.

Example:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> matrix =
    {
        {1, 2, 3},
        {4, 5, 6}
    };

    cout << matrix[1][2];

    return 0;
}
```

Output:

```text
6
```

---

# 30. Nested Vectors

Example traversal:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> matrix =
    {
        {1, 2},
        {3, 4}
    };

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
```

---

# 31. Passing Vectors to Functions

Example:

```cpp
#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> numbers)
{
    for (int value : numbers)
    {
        cout << value << " ";
    }
}

int main()
{
    vector<int> values = {1, 2, 3};

    printVector(values);

    return 0;
}
```

Better approach:

```cpp
void printVector(const vector<int>& numbers)
```

---

# 32. Returning Vectors from Functions

Example:

```cpp
#include <iostream>
#include <vector>
using namespace std;

vector<int> createVector()
{
    vector<int> values = {1, 2, 3};

    return values;
}

int main()
{
    vector<int> result = createVector();

    for (int value : result)
    {
        cout << value << " ";
    }

    return 0;
}
```

---

# 33. Sorting Vectors

Using `sort()`:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers = {5, 2, 4, 1, 3};

    sort(numbers.begin(), numbers.end());

    for (int value : numbers)
    {
        cout << value << " ";
    }

    return 0;
}
```

Output:

```text
1 2 3 4 5
```

---

# 34. Searching in Vectors

Using `find()`:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers = {10, 20, 30};

    auto it = find(numbers.begin(), numbers.end(), 20);

    if (it != numbers.end())
    {
        cout << "Found";
    }

    return 0;
}
```

---

# 35. Vector Memory Management

Vectors automatically:
- Allocate memory
- Resize memory
- Deallocate memory

Internally:
- Vectors may allocate extra capacity

---

# 36. Dynamic Resizing

When vectors exceed capacity:
1. New memory is allocated
2. Elements are copied
3. Old memory is released

---

# 37. Emplace Functions

`emplace_back()` constructs objects directly.

Example:

```cpp
numbers.emplace_back(100);
```

Advantages:
- Faster
- Avoids unnecessary copying

---

# 38. Difference Between Arrays and Vectors

## Arrays

- Fixed size
- Manual management
- Faster in some cases

## Vectors

- Dynamic size
- Automatic memory handling
- More flexible

---

# 39. Vector Time Complexity

Common complexities:

| Operation | Complexity |
|---|---|
| Access | O(1) |
| push_back() | O(1) average |
| pop_back() | O(1) |
| Insert middle | O(n) |
| Erase middle | O(n) |

---

# 40. Common Vector Operations

Common operations:
- Add elements
- Remove elements
- Traverse elements
- Search elements
- Sort elements
- Resize vectors

---

# 41. Common Mistakes

## Out-of-Bounds Access

Wrong:

```cpp
vector<int> numbers = {1, 2};

cout << numbers[10];
```

---

## Iterator Invalidation

Problem:

```cpp
vector<int> numbers;

auto it = numbers.begin();

numbers.push_back(10);
```

Some operations invalidate iterators.

---

## Unnecessary Copying

Wrong:

```cpp
void show(vector<int> numbers)
```

Better:

```cpp
void show(const vector<int>& numbers)
```

---

# 42. Best Practices

Best practices:
- Use vectors instead of dynamic arrays
- Pass vectors by reference
- Use `at()` when safety matters
- Use range-based loops
- Reserve capacity when possible
- Prefer STL algorithms

Good example:

```cpp
vector<int> values;

values.reserve(100);
```

---

# 43. Real-World Applications

Vectors are used in:
- Game development
- Scientific computing
- Machine learning
- Databases
- Graphics programming
- Competitive programming
- Web applications

Examples:
- Dynamic lists
- Matrices
- Graphs
- Buffers

---

# 44. Summary

Vectors are dynamic arrays in C++.

Important features:
- Dynamic resizing
- Automatic memory management
- Fast access
- STL compatibility

Key functions:
- `push_back()`
- `pop_back()`
- `insert()`
- `erase()`
- `size()`
- `clear()`

Vectors are preferred over arrays in modern C++ because they:
- Are safer
- Are easier to use
- Support dynamic memory management
- Integrate with STL algorithms

Vectors are essential for:
- Data structures
- Algorithms
- Competitive programming
- Software engineering
- Modern C++ development