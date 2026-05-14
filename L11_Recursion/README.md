# Recursion in C++

## Table of Contents

1. Introduction to Recursion
2. What is Recursion?
3. How Recursion Works
4. Structure of a Recursive Function
5. Base Case
6. Recursive Case
7. Call Stack
8. Simple Recursion Example
9. Recursive Factorial Program
10. Recursive Fibonacci Program
11. Direct Recursion
12. Indirect Recursion
13. Tail Recursion
14. Non-Tail Recursion
15. Head Recursion
16. Tree Recursion
17. Nested Recursion
18. Recursion vs Iteration
19. Advantages of Recursion
20. Disadvantages of Recursion
21. Stack Overflow
22. Recursive Memory Usage
23. Recursive Binary Search
24. Recursive Greatest Common Divisor
25. Recursive Power Function
26. Recursion with Arrays
27. Recursion with Strings
28. Recursive Backtracking
29. Recursive Functions in Classes
30. Memoization
31. Dynamic Programming and Recursion
32. Best Practices
33. Common Mistakes
34. Real-World Applications
35. Summary

---

# 1. Introduction to Recursion

Recursion is a programming technique where a function calls itself.

Recursion is commonly used for:
- Mathematical calculations
- Tree traversal
- Graph algorithms
- Divide and conquer algorithms
- Backtracking problems

Example:

```cpp
#include <iostream>
using namespace std;

void countdown(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << n << endl;

    countdown(n - 1);
}

int main()
{
    countdown(5);

    return 0;
}
```

Output:

```text
5
4
3
2
1
```

---

# 2. What is Recursion?

A recursive function repeatedly calls itself until a stopping condition is reached.

Every recursive function must contain:
- Base case
- Recursive case

Without a base case, recursion becomes infinite.

General structure:

```cpp
returnType functionName(parameters)
{
    if (baseCondition)
    {
        return value;
    }

    return functionName(smallerProblem);
}
```

---

# 3. How Recursion Works

When a recursive function is called:
1. The current function call is stored in memory
2. Another function call is created
3. The process repeats until the base case is reached
4. Function calls return one by one

Example flow:

```text
factorial(4)
factorial(3)
factorial(2)
factorial(1)
```

Then returns:

```text
1
2
6
24
```

---

# 4. Structure of a Recursive Function

A recursive function usually contains:
- Stopping condition
- Recursive call
- Smaller subproblem

Example:

```cpp
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n + sum(n - 1);
}
```

---

# 5. Base Case

The base case stops recursion.

Example:

```cpp
if (n == 0)
{
    return 0;
}
```

Without a base case:

```cpp
void infinite()
{
    infinite();
}
```

This causes infinite recursion.

---

# 6. Recursive Case

The recursive case reduces the problem size.

Example:

```cpp
return n * factorial(n - 1);
```

The function works on a smaller value each time.

---

# 7. Call Stack

Each recursive call is stored in the call stack.

Example:

```cpp
factorial(3)
```

Stack:

```text
factorial(3)
factorial(2)
factorial(1)
```

After the base case:
- Calls are removed one by one

---

# 8. Simple Recursion Example

Example:

```cpp
#include <iostream>
using namespace std;

void printNumbers(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << n << endl;

    printNumbers(n - 1);
}

int main()
{
    printNumbers(5);

    return 0;
}
```

---

# 9. Recursive Factorial Program

Factorial formula:

```text
n! = n × (n - 1)!
```

Example:

```cpp
#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0 || n == 1)
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

# 10. Recursive Fibonacci Program

Fibonacci sequence:

```text
0 1 1 2 3 5 8 ...
```

Example:

```cpp
#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    cout << fibonacci(6);

    return 0;
}
```

Output:

```text
8
```

---

# 11. Direct Recursion

A function directly calls itself.

Example:

```cpp
void test(int n)
{
    if (n == 0)
    {
        return;
    }

    test(n - 1);
}
```

---

# 12. Indirect Recursion

Functions call each other recursively.

Example:

```cpp
#include <iostream>
using namespace std;

void second(int n);

void first(int n)
{
    if (n <= 0)
    {
        return;
    }

    cout << n << endl;

    second(n - 1);
}

void second(int n)
{
    if (n <= 0)
    {
        return;
    }

    cout << n << endl;

    first(n - 1);
}

int main()
{
    first(5);

    return 0;
}
```

---

# 13. Tail Recursion

The recursive call is the last operation.

Example:

```cpp
int factorial(int n, int result = 1)
{
    if (n == 0)
    {
        return result;
    }

    return factorial(n - 1, n * result);
}
```

Advantages:
- More memory efficient
- Easier optimization

---

# 14. Non-Tail Recursion

The recursive call is not the final operation.

Example:

```cpp
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1);
}
```

Multiplication occurs after the recursive call returns.

---

# 15. Head Recursion

The recursive call happens before processing.

Example:

```cpp
#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 0)
    {
        return;
    }

    print(n - 1);

    cout << n << endl;
}

int main()
{
    print(5);

    return 0;
}
```

Output:

```text
1
2
3
4
5
```

---

# 16. Tree Recursion

A function makes multiple recursive calls.

Example:

```cpp
int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}
```

This forms a recursive tree structure.

---

# 17. Nested Recursion

The recursive call itself contains another recursive call.

Example:

```cpp
int recursive(int n)
{
    if (n > 100)
    {
        return n - 10;
    }

    return recursive(recursive(n + 11));
}
```

---

# 18. Recursion vs Iteration

## Recursion

Uses:
- Function calls
- Call stack

Example:

```cpp
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1);
}
```

## Iteration

Uses:
- Loops

Example:

```cpp
int factorial(int n)
{
    int result = 1;

    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }

    return result;
}
```

---

# 19. Advantages of Recursion

Advantages:
- Cleaner code
- Easier problem solving
- Natural for tree structures
- Useful for divide-and-conquer algorithms
- Simplifies complex problems

---

# 20. Disadvantages of Recursion

Disadvantages:
- Higher memory usage
- Slower due to function calls
- Risk of stack overflow
- Difficult debugging
- Inefficient for some problems

---

# 21. Stack Overflow

Too many recursive calls can exhaust memory.

Example:

```cpp
void infinite()
{
    infinite();
}
```

Possible result:

```text
Stack Overflow
```

---

# 22. Recursive Memory Usage

Each recursive call stores:
- Parameters
- Local variables
- Return address

Large recursion depth increases memory usage.

---

# 23. Recursive Binary Search

Example:

```cpp
#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int target)
{
    if (left > right)
    {
        return -1;
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == target)
    {
        return mid;
    }

    if (target < arr[mid])
    {
        return binarySearch(arr, left, mid - 1, target);
    }

    return binarySearch(arr, mid + 1, right, target);
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9};

    cout << binarySearch(arr, 0, 4, 7);

    return 0;
}
```

---

# 24. Recursive Greatest Common Divisor

Euclidean algorithm:

```cpp
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }

    return gcd(b, a % b);
}

int main()
{
    cout << gcd(48, 18);

    return 0;
}
```

Output:

```text
6
```

---

# 25. Recursive Power Function

Example:

```cpp
#include <iostream>
using namespace std;

int power(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }

    return base * power(base, exponent - 1);
}

int main()
{
    cout << power(2, 5);

    return 0;
}
```

Output:

```text
32
```

---

# 26. Recursion with Arrays

Example:

```cpp
#include <iostream>
using namespace std;

int arraySum(int arr[], int size)
{
    if (size == 0)
    {
        return 0;
    }

    return arr[size - 1] + arraySum(arr, size - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    cout << arraySum(arr, 5);

    return 0;
}
```

Output:

```text
15
```

---

# 27. Recursion with Strings

Example:

```cpp
#include <iostream>
using namespace std;

void reverse(string str)
{
    if (str.length() == 0)
    {
        return;
    }

    reverse(str.substr(1));

    cout << str[0];
}

int main()
{
    reverse("Hello");

    return 0;
}
```

Output:

```text
olleH
```

---

# 28. Recursive Backtracking

Backtracking uses recursion to explore possibilities.

Applications:
- Sudoku solver
- Maze solving
- N-Queens problem
- Permutations

Example idea:

```text
Try
Undo
Try another possibility
```

---

# 29. Recursive Functions in Classes

Example:

```cpp
#include <iostream>
using namespace std;

class Math
{
public:
    int factorial(int n)
    {
        if (n == 0)
        {
            return 1;
        }

        return n * factorial(n - 1);
    }
};

int main()
{
    Math m;

    cout << m.factorial(5);

    return 0;
}
```

---

# 30. Memoization

Memoization stores previous results to avoid repeated calculations.

Example:

```cpp
#include <iostream>
using namespace std;

int memo[100];

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }

    if (memo[n] != 0)
    {
        return memo[n];
    }

    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);

    return memo[n];
}

int main()
{
    cout << fibonacci(10);

    return 0;
}
```

---

# 31. Dynamic Programming and Recursion

Dynamic programming often combines:
- Recursion
- Memoization

Purpose:
- Reduce repeated calculations
- Improve performance

Common examples:
- Fibonacci
- Knapsack problem
- Longest common subsequence

---

# 32. Best Practices

Best practices for recursion:

- Always define a base case
- Reduce problem size each call
- Avoid unnecessary recursion
- Use memoization when needed
- Prefer iteration for simple loops
- Test edge cases carefully

Good example:

```cpp
int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}
```

---

# 33. Common Mistakes

## Missing Base Case

Wrong:

```cpp
void test()
{
    test();
}
```

---

## Incorrect Base Condition

Wrong:

```cpp
if (n == 1)
{
    return 1;
}
```

Problem:
- Does not handle `0`

---

## Infinite Recursion

Wrong:

```cpp
recursive(n + 1);
```

Problem:
- Problem size increases instead of decreasing

---

## Excessive Recursive Calls

Inefficient example:

```cpp
fibonacci(n - 1) + fibonacci(n - 2)
```

Problem:
- Repeated calculations

---

# 34. Real-World Applications

Recursion is used in:
- File system traversal
- Artificial intelligence
- Compiler design
- Tree and graph traversal
- Sorting algorithms
- Searching algorithms
- Backtracking problems

Examples:
- Quick Sort
- Merge Sort
- Depth First Search
- Binary Tree Traversal

---

# 35. Summary

Recursion is a powerful programming technique where functions call themselves.

Important concepts:
- Base case stops recursion
- Recursive case reduces problem size
- Call stack stores function calls
- Recursion simplifies many complex problems
- Excessive recursion may cause stack overflow
- Memoization improves recursive performance

