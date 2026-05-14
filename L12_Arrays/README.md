# Arrays and 2D Arrays in C++

## Table of Contents

1. Introduction to Arrays
2. What is an Array?
3. Why Arrays are Important
4. Characteristics of Arrays
5. Array Declaration
6. Array Initialization
7. Accessing Array Elements
8. Updating Array Elements
9. Array Indexing
10. Array Size
11. Traversing Arrays
12. Input and Output with Arrays
13. Passing Arrays to Functions
14. Returning Arrays from Functions
15. Array Memory Representation
16. Arrays and Pointers
17. Dynamic Arrays
18. Common Array Operations
19. Searching in Arrays
20. Sorting Arrays
21. Advantages of Arrays
22. Disadvantages of Arrays
23. Common Mistakes with Arrays
24. Introduction to 2D Arrays
25. What is a 2D Array?
26. 2D Array Declaration
27. 2D Array Initialization
28. Accessing 2D Array Elements
29. Traversing 2D Arrays
30. Input and Output with 2D Arrays
31. Memory Representation of 2D Arrays
32. Passing 2D Arrays to Functions
33. Matrix Operations with 2D Arrays
34. Jagged Arrays
35. Dynamic 2D Arrays
36. Arrays vs Vectors
37. Best Practices
38. Real-World Applications
39. Summary

---

# 1. Introduction to Arrays

Arrays are one of the most fundamental data structures in C++.

Arrays allow programmers to:
- Store multiple values
- Organize data efficiently
- Access elements quickly
- Process collections of data

Example:

```cpp
#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};

    cout << numbers[0] << endl;

    return 0;
}
```

Output:

```text
10
```

---

# 2. What is an Array?

An array is a collection of elements:
- Of the same data type
- Stored in contiguous memory locations

Example:

```cpp
int numbers[5];
```

This creates an array of 5 integers.

---

# 3. Why Arrays are Important

Arrays are useful because they:
- Store large amounts of data
- Provide fast access using indexes
- Simplify repetitive operations
- Serve as the foundation for advanced data structures

Used in:
- Matrices
- Graphs
- Strings
- Databases
- Algorithms

---

# 4. Characteristics of Arrays

Main characteristics:
- Fixed size
- Same data type
- Continuous memory allocation
- Indexed access

Example:

```cpp
int arr[4] = {1, 2, 3, 4};
```

---

# 5. Array Declaration

Syntax:

```cpp
dataType arrayName[size];
```

Example:

```cpp
int numbers[5];
```

Other examples:

```cpp
double prices[10];
char letters[26];
```

---

# 6. Array Initialization

Example:

```cpp
int numbers[5] = {10, 20, 30, 40, 50};
```

Partial initialization:

```cpp
int values[5] = {1, 2};
```

Remaining elements become `0`.

Automatic size detection:

```cpp
int arr[] = {1, 2, 3, 4};
```

---

# 7. Accessing Array Elements

Array elements are accessed using indexes.

Example:

```cpp
#include <iostream>
using namespace std;

int main()
{
    int numbers[3] = {100, 200, 300};

    cout << numbers[1];

    return 0;
}
```

Output:

```text
200
```

---

# 8. Updating Array Elements

Example:

```cpp
#include <iostream>
using namespace std;

int main()
{
    int numbers[3] = {1, 2, 3};

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

# 9. Array Indexing

Array indexes start at `0`.

Example:

```text
Index:   0   1   2   3
Value:  10  20  30  40
```

Last index:

```text
size - 1
```

---

# 10. Array Size

Using `sizeof()`:

```cpp
int arr[5] = {1, 2, 3, 4, 5};

int size = sizeof(arr) / sizeof(arr[0]);
```

Explanation:
- `sizeof(arr)` → total bytes
- `sizeof(arr[0])` → size of one element

---

# 11. Traversing Arrays

Using loops:

```cpp
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
```

Output:

```text
1 2 3 4 5
```

Range-based loop:

```cpp
for (int value : arr)
{
    cout << value << endl;
}
```

---

# 12. Input and Output with Arrays

Example:

```cpp
#include <iostream>
using namespace std;

int main()
{
    int arr[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
```

---

# 13. Passing Arrays to Functions

Example:

```cpp
#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int numbers[5] = {1, 2, 3, 4, 5};

    printArray(numbers, 5);

    return 0;
}
```

---

# 14. Returning Arrays from Functions

Normal arrays cannot be returned directly.

Alternative approaches:
- Use pointers
- Use dynamic arrays
- Use vectors
- Use structures or classes

Example using dynamic memory:

```cpp
int* createArray()
{
    int* arr = new int[3];

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;

    return arr;
}
```

---

# 15. Array Memory Representation

Arrays are stored in contiguous memory.

Example:

```text
arr[0] arr[1] arr[2] arr[3]
```

Memory addresses increase sequentially.

---

# 16. Arrays and Pointers

Array names behave like pointers.

Example:

```cpp
#include <iostream>
using namespace std;

int main()
{
    int arr[3] = {10, 20, 30};

    cout << *arr << endl;
    cout << *(arr + 1) << endl;

    return 0;
}
```

Output:

```text
10
20
```

---

# 17. Dynamic Arrays

Dynamic arrays are created during runtime.

Example:

```cpp
#include <iostream>
using namespace std;

int main()
{
    int size;

    cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = i + 1;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}
```

---

# 18. Common Array Operations

Common operations:
- Traversal
- Searching
- Sorting
- Insertion
- Deletion
- Updating

---

# 19. Searching in Arrays

## Linear Search

Example:

```cpp
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    int target = 30;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == target)
        {
            cout << "Found at index " << i << endl;
        }
    }

    return 0;
}
```

## Binary Search

Requires sorted arrays.

---

# 20. Sorting Arrays

Example using bubble sort:

```cpp
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {5, 2, 4, 1, 3};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int value : arr)
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

# 21. Advantages of Arrays

Advantages:
- Fast element access
- Simple implementation
- Efficient memory usage
- Good cache performance

---

# 22. Disadvantages of Arrays

Disadvantages:
- Fixed size
- Expensive insertion/deletion
- Possible memory waste
- No automatic bounds checking

---

# 23. Common Mistakes with Arrays

## Out-of-Bounds Access

Wrong:

```cpp
int arr[5];

cout << arr[10];
```

---

## Uninitialized Arrays

Wrong:

```cpp
int arr[5];

cout << arr[0];
```

May contain garbage values.

---

## Forgetting Memory Deallocation

Wrong:

```cpp
int* arr = new int[10];
```

Without:

```cpp
delete[] arr;
```

---

# 24. Introduction to 2D Arrays

A 2D array is an array of arrays.

It represents:
- Tables
- Matrices
- Grids

Example:

```text
1 2 3
4 5 6
7 8 9
```

---

# 25. What is a 2D Array?

A 2D array stores data in:
- Rows
- Columns

Syntax:

```cpp
dataType arrayName[rows][columns];
```

Example:

```cpp
int matrix[3][3];
```

---

# 26. 2D Array Declaration

Example:

```cpp
int matrix[2][3];
```

Meaning:
- 2 rows
- 3 columns

---

# 27. 2D Array Initialization

Example:

```cpp
int matrix[2][3] =
{
    {1, 2, 3},
    {4, 5, 6}
};
```

---

# 28. Accessing 2D Array Elements

Syntax:

```cpp
array[row][column]
```

Example:

```cpp
#include <iostream>
using namespace std;

int main()
{
    int matrix[2][2] =
    {
        {10, 20},
        {30, 40}
    };

    cout << matrix[1][0];

    return 0;
}
```

Output:

```text
30
```

---

# 29. Traversing 2D Arrays

Using nested loops:

```cpp
#include <iostream>
using namespace std;

int main()
{
    int matrix[2][2] =
    {
        {1, 2},
        {3, 4}
    };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
```

Output:

```text
1 2
3 4
```

---

# 30. Input and Output with 2D Arrays

Example:

```cpp
#include <iostream>
using namespace std;

int main()
{
    int matrix[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
```

---

# 31. Memory Representation of 2D Arrays

2D arrays are stored row by row.

Example:

```text
1 2 3 4 5 6
```

This is called:
- Row-major order

---

# 32. Passing 2D Arrays to Functions

Example:

```cpp
#include <iostream>
using namespace std;

void printMatrix(int matrix[][2], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }
}

int main()
{
    int matrix[2][2] =
    {
        {1, 2},
        {3, 4}
    };

    printMatrix(matrix, 2);

    return 0;
}
```

---

# 33. Matrix Operations with 2D Arrays

## Matrix Addition

Example:

```cpp
#include <iostream>
using namespace std;

int main()
{
    int a[2][2] =
    {
        {1, 2},
        {3, 4}
    };

    int b[2][2] =
    {
        {5, 6},
        {7, 8}
    };

    int result[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << result[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
```

---

# 34. Jagged Arrays

Jagged arrays contain rows of different sizes.

Implemented using pointers.

Example concept:

```text
Row 1 -> 3 elements
Row 2 -> 5 elements
Row 3 -> 2 elements
```

---

# 35. Dynamic 2D Arrays

Example:

```cpp
#include <iostream>
using namespace std;

int main()
{
    int rows = 2;
    int cols = 3;

    int** matrix = new int*[rows];

    for (int i = 0; i < rows; i++)
    {
        matrix[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++)
    {
        delete[] matrix[i];
    }

    delete[] matrix;

    return 0;
}
```

---

# 36. Arrays vs Vectors

## Arrays

- Fixed size
- Faster
- Manual memory management

## Vectors

- Dynamic size
- Easier to use
- STL support

Example vector:

```cpp
#include <vector>

vector<int> numbers;
```

---

# 37. Best Practices

Best practices:
- Check array bounds
- Initialize arrays properly
- Use vectors for dynamic data
- Use meaningful names
- Avoid magic numbers
- Free dynamic memory

Good example:

```cpp
const int SIZE = 5;

int scores[SIZE];
```

---

# 38. Real-World Applications

Arrays and 2D arrays are used in:
- Image processing
- Game development
- Mathematical calculations
- Databases
- Graph algorithms
- Machine learning
- Scientific computing

2D arrays are commonly used for:
- Chess boards
- Matrices
- Maps
- Pixel grids

---

# 39. Summary

Arrays are collections of elements:
- Of the same type
- Stored in contiguous memory

Key concepts:
- Indexing starts at 0
- Arrays have fixed size
- Arrays support fast access
- Dynamic arrays use heap memory

2D arrays represent:
- Rows and columns
- Tables and matrices

Important concepts:
- Nested loops
- Row-major order
- Matrix operations
- Dynamic memory allocation

Arrays and 2D arrays are fundamental for:
- Data structures
- Algorithms
- Competitive programming
- Software development
- Computer science