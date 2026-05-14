# Map in C++

## Table of Contents

1. Introduction to Map
2. What is a Map?
3. Why Maps are Important
4. Characteristics of Maps
5. Header File for Map
6. Declaring Maps
7. Initializing Maps
8. Key-Value Pairs
9. Accessing Elements
10. Inserting Elements
11. Updating Elements
12. Removing Elements
13. Traversing Maps
14. Iterators in Maps
15. Finding Elements
16. Checking if a Key Exists
17. Map Size
18. Empty Maps
19. Clearing Maps
20. Ordered Nature of Maps
21. Internal Working of Maps
22. Time Complexity of Map Operations
23. map vs unordered_map
24. Using Custom Data Types
25. Nested Maps
26. Maps with Vectors
27. Maps with Pairs
28. Using at()
29. Using count()
30. Using erase()
31. Using insert()
32. Using emplace()
33. Using lower_bound() and upper_bound()
34. Custom Comparators
35. Multimap
36. Common Map Operations
37. Common Mistakes
38. Best Practices
39. Real-World Applications
40. Summary

---

# 1. Introduction to Map

`map` is an associative container in the C++ Standard Template Library (STL).

A map stores:
- Key-value pairs
- Unique keys
- Automatically sorted keys

Example:

```cpp
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> students;

    students[1] = "John";
    students[2] = "Alice";

    cout << students[1];

    return 0;
}
```

Output:

```text
John
```

---

# 2. What is a Map?

A map is a container that:
- Stores elements as key-value pairs
- Maintains sorted order by keys
- Allows fast searching

Syntax:

```cpp
map<keyType, valueType> mapName;
```

Example:

```cpp
map<int, string> students;
```

---

# 3. Why Maps are Important

Maps provide:
- Fast searching
- Fast insertion
- Fast deletion
- Automatic sorting

Used in:
- Databases
- Caches
- Dictionaries
- Indexing systems
- Configuration systems

---

# 4. Characteristics of Maps

Main characteristics:
- Keys are unique
- Elements are sorted by keys
- Implemented using balanced binary trees
- Access is logarithmic time

Example:

```cpp
map<int, string> data;
```

---

# 5. Header File for Map

Required header:

```cpp
#include <map>
```

---

# 6. Declaring Maps

Examples:

```cpp
map<int, string> students;

map<string, int> scores;

map<char, double> values;
```

---

# 7. Initializing Maps

Example:

```cpp
map<int, string> students =
{
    {1, "John"},
    {2, "Alice"},
    {3, "Bob"}
};
```

---

# 8. Key-Value Pairs

Each map element contains:
- Key
- Value

Example:

```text
1 -> John
2 -> Alice
3 -> Bob
```

---

# 9. Accessing Elements

Using `[]` operator:

```cpp
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> students;

    students[1] = "John";

    cout << students[1];

    return 0;
}
```

Output:

```text
John
```

---

# 10. Inserting Elements

Using `insert()`:

```cpp
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> students;

    students.insert({1, "John"});
    students.insert({2, "Alice"});

    cout << students[2];

    return 0;
}
```

Output:

```text
Alice
```

---

# 11. Updating Elements

Example:

```cpp
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> students;

    students[1] = "John";

    students[1] = "David";

    cout << students[1];

    return 0;
}
```

Output:

```text
David
```

---

# 12. Removing Elements

Using `erase()`:

```cpp
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> students =
    {
        {1, "John"},
        {2, "Alice"}
    };

    students.erase(1);

    cout << students.size();

    return 0;
}
```

Output:

```text
1
```

---

# 13. Traversing Maps

Using loops:

```cpp
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> students =
    {
        {1, "John"},
        {2, "Alice"},
        {3, "Bob"}
    };

    for (auto pair : students)
    {
        cout << pair.first << " ";
        cout << pair.second << endl;
    }

    return 0;
}
```

Output:

```text
1 John
2 Alice
3 Bob
```

---

# 14. Iterators in Maps

Example:

```cpp
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> students =
    {
        {1, "John"},
        {2, "Alice"}
    };

    map<int, string>::iterator it;

    for (it = students.begin(); it != students.end(); it++)
    {
        cout << it->first << " ";
        cout << it->second << endl;
    }

    return 0;
}
```

---

# 15. Finding Elements

Using `find()`:

```cpp
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> students =
    {
        {1, "John"},
        {2, "Alice"}
    };

    auto it = students.find(2);

    if (it != students.end())
    {
        cout << it->second;
    }

    return 0;
}
```

Output:

```text
Alice
```

---

# 16. Checking if a Key Exists

Using `count()`:

```cpp
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> students;

    students[1] = "John";

    if (students.count(1))
    {
        cout << "Key exists";
    }

    return 0;
}
```

Output:

```text
Key exists
```

---

# 17. Map Size

Using `.size()`:

```cpp
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> students =
    {
        {1, "John"},
        {2, "Alice"}
    };

    cout << students.size();

    return 0;
}
```

Output:

```text
2
```

---

# 18. Empty Maps

Using `.empty()`:

```cpp
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> students;

    if (students.empty())
    {
        cout << "Map is empty";
    }

    return 0;
}
```

---

# 19. Clearing Maps

Using `.clear()`:

```cpp
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> students =
    {
        {1, "John"},
        {2, "Alice"}
    };

    students.clear();

    cout << students.size();

    return 0;
}
```

Output:

```text
0
```

---

# 20. Ordered Nature of Maps

Maps automatically sort keys.

Example:

```cpp
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> data;

    data[3] = "C";
    data[1] = "A";
    data[2] = "B";

    for (auto pair : data)
    {
        cout << pair.first << " ";
    }

    return 0;
}
```

Output:

```text
1 2 3
```

---

# 21. Internal Working of Maps

Maps are usually implemented using:
- Red-Black Trees

Properties:
- Self-balancing
- Sorted structure
- Logarithmic operations

---

# 22. Time Complexity of Map Operations

| Operation | Complexity |
|---|---|
| Insert | O(log n) |
| Delete | O(log n) |
| Search | O(log n) |
| Access | O(log n) |

---

# 23. map vs unordered_map

## map

- Sorted keys
- Tree-based
- O(log n)

## unordered_map

- Unsorted keys
- Hash table based
- Average O(1)

Example:

```cpp
unordered_map<int, string> data;
```

Header:

```cpp
#include <unordered_map>
```

---

# 24. Using Custom Data Types

Example:

```cpp
#include <iostream>
#include <map>
using namespace std;

class Student
{
public:
    string name;
};

int main()
{
    map<int, Student> students;

    Student s;
    s.name = "John";

    students[1] = s;

    cout << students[1].name;

    return 0;
}
```

---

# 25. Nested Maps

Maps can contain other maps.

Example:

```cpp
map<int, map<string, int>> data;
```

---

# 26. Maps with Vectors

Example:

```cpp
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    map<string, vector<int>> scores;

    scores["John"] = {90, 85, 88};

    for (int score : scores["John"])
    {
        cout << score << " ";
    }

    return 0;
}
```

---

# 27. Maps with Pairs

Example:

```cpp
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, pair<string, int>> students;

    students[1] = {"John", 20};

    cout << students[1].first << endl;
    cout << students[1].second << endl;

    return 0;
}
```

---

# 28. Using at()

`at()` provides safe access.

Example:

```cpp
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> students =
    {
        {1, "John"}
    };

    cout << students.at(1);

    return 0;
}
```

Output:

```text
John
```

---

# 29. Using count()

Returns:
- `1` if key exists
- `0` otherwise

Example:

```cpp
if (students.count(5))
{
    cout << "Exists";
}
```

---

# 30. Using erase()

Removing by key:

```cpp
students.erase(2);
```

Removing using iterator:

```cpp
students.erase(it);
```

---

# 31. Using insert()

Example:

```cpp
students.insert({1, "John"});
```

Insert does not overwrite existing keys.

---

# 32. Using emplace()

Constructs elements directly.

Example:

```cpp
students.emplace(1, "John");
```

Advantages:
- Faster
- Avoids unnecessary copying

---

# 33. Using lower_bound() and upper_bound()

## lower_bound()

Returns iterator to:
- First element not less than key

## upper_bound()

Returns iterator to:
- First element greater than key

Example:

```cpp
auto it = data.lower_bound(5);
```

---

# 34. Custom Comparators

Maps can use custom sorting.

Example:

```cpp
#include <iostream>
#include <map>
using namespace std;

class Descending
{
public:
    bool operator()(int a, int b)
    {
        return a > b;
    }
};

int main()
{
    map<int, string, Descending> data;

    data[1] = "A";
    data[3] = "C";
    data[2] = "B";

    for (auto pair : data)
    {
        cout << pair.first << " ";
    }

    return 0;
}
```

Output:

```text
3 2 1
```

---

# 35. Multimap

`multimap` allows duplicate keys.

Example:

```cpp
#include <iostream>
#include <map>
using namespace std;

int main()
{
    multimap<int, string> data;

    data.insert({1, "John"});
    data.insert({1, "Alice"});

    for (auto pair : data)
    {
        cout << pair.first << " ";
        cout << pair.second << endl;
    }

    return 0;
}
```

---

# 36. Common Map Operations

Common operations:
- Insert elements
- Update elements
- Remove elements
- Search elements
- Traverse data
- Count keys

---

# 37. Common Mistakes

## Using [] for Existence Check

Wrong:

```cpp
if (students[5] == "")
{
}
```

This creates a new element.

Better:

```cpp
students.count(5)
```

---

## Forgetting Ordered Nature

Maps sort keys automatically.

Input order is not preserved.

---

## Assuming Constant-Time Access

`map` access is:
- O(log n)

Not:
- O(1)

---

# 38. Best Practices

Best practices:
- Use `unordered_map` when ordering is unnecessary
- Use `at()` for safer access
- Prefer `emplace()` over `insert()` when possible
- Use meaningful key types
- Avoid unnecessary copying

Good example:

```cpp
map<int, string> students;
```

---

# 39. Real-World Applications

Maps are used in:
- Dictionaries
- Databases
- Search engines
- Caches
- Routing tables
- Symbol tables
- Frequency counters
- Configuration systems

Examples:
- Word frequency counting
- Student management systems
- Product catalogs
- User sessions

---

# 40. Summary

`map` is an STL associative container that:
- Stores key-value pairs
- Maintains sorted order
- Uses unique keys

Important functions:
- `insert()`
- `erase()`
- `find()`
- `count()`
- `at()`
- `clear()`

Important concepts:
- Iterators
- Ordered storage
- Red-Black Trees
- Logarithmic complexity

Related containers:
- `unordered_map`
- `multimap`

Maps are essential for:
- Data organization
- Fast searching
- Competitive programming
- Software engineering
- Modern C++ development