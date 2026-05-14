# Character Sequences in C++

## Table of Contents

1. Introduction to Character Sequences
2. What is a Character Sequence?
3. Character Data Type in C++
4. ASCII and Unicode
5. Character Arrays
6. Null Character
7. C-Style Strings
8. String Literals
9. Declaring Character Arrays
10. Initializing Character Arrays
11. Accessing Characters
12. Traversing Character Sequences
13. Input and Output with Character Arrays
14. Using cin with Character Arrays
15. Using getline()
16. Common String Functions
17. strlen()
18. strcpy()
19. strcat()
20. strcmp()
21. Character Manipulation Functions
22. toupper() and tolower()
23. Character Classification Functions
24. std::string in C++
25. Declaring std::string
26. Initializing std::string
27. String Input and Output
28. String Concatenation
29. String Length
30. Accessing Characters in std::string
31. String Traversal
32. String Comparison
33. String Searching
34. String Modification
35. String Insertion
36. String Erasing
37. String Replacement
38. String Conversion
39. String Streams
40. Escape Sequences
41. Raw String Literals
42. Character Sequences and Memory
43. C-Style Strings vs std::string
44. Advantages of std::string
45. Common Mistakes
46. Best Practices
47. Real-World Applications
48. Summary

---

# 1. Introduction to Character Sequences

Character sequences are collections of characters used to represent text.

Examples:
- Names
- Sentences
- Passwords
- File paths
- User input

C++ supports:
- Character arrays
- C-style strings
- `std::string`

---

# 2. What is a Character Sequence?

A character sequence is a sequence of characters stored in memory.

Example:

```text
H e l l o
```

Possible representations:
- Character array
- String literal
- `std::string`

---

# 3. Character Data Type in C++

The `char` data type stores a single character.

Example:

```cpp
char letter = 'A';
```

Character literals use single quotes.

Examples:

```cpp
char digit = '5';
char symbol = '#';
```

---

# 4. ASCII and Unicode

Characters are stored internally as numbers.

Example:

```cpp
char letter = 'A';
```

ASCII value of `'A'`:

```text
65
```

Example:

```cpp
#include <iostream>
using namespace std;

int main()
{
    char letter = 'A';

    cout << (int)letter << endl;

    return 0;
}
```

Output:

```text
65
```

Modern C++ also supports Unicode.

---

# 5. Character Arrays

A character array stores multiple characters.

Example:

```cpp
char word[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
```

---

# 6. Null Character

The null character marks the end of a C-style string.

Syntax:

```cpp
'\0'
```

Without the null terminator:
- String functions may behave incorrectly

Example:

```cpp
char text[] = "Hello";
```

Actual memory:

```text
H e l l o \0
```

---

# 7. C-Style Strings

C-style strings are character arrays ending with `'\0'`.

Example:

```cpp
char name[] = "John";
```

---

# 8. String Literals

String literals use double quotes.

Example:

```cpp
"Hello World"
```

Stored automatically with a null terminator.

---

# 9. Declaring Character Arrays

Syntax:

```cpp
char arrayName[size];
```

Example:

```cpp
char name[20];
```

---

# 10. Initializing Character Arrays

Example:

```cpp
char city[] = "Tokyo";
```

Equivalent to:

```cpp
char city[] = {'T', 'o', 'k', 'y', 'o', '\0'};
```

---

# 11. Accessing Characters

Characters are accessed using indexes.

Example:

```cpp
#include <iostream>
using namespace std;

int main()
{
    char word[] = "Hello";

    cout << word[1];

    return 0;
}
```

Output:

```text
e
```

---

# 12. Traversing Character Sequences

Example:

```cpp
#include <iostream>
using namespace std;

int main()
{
    char text[] = "Hello";

    for (int i = 0; text[i] != '\0'; i++)
    {
        cout << text[i] << endl;
    }

    return 0;
}
```

---

# 13. Input and Output with Character Arrays

Example:

```cpp
#include <iostream>
using namespace std;

int main()
{
    char name[20];

    cin >> name;

    cout << name << endl;

    return 0;
}
```

---

# 14. Using cin with Character Arrays

Problem:

```cpp
cin >> name;
```

Stops reading at spaces.

Input:

```text
John Doe
```

Stored:

```text
John
```

---

# 15. Using getline()

`getline()` reads entire lines.

Example:

```cpp
#include <iostream>
using namespace std;

int main()
{
    char sentence[100];

    cin.getline(sentence, 100);

    cout << sentence << endl;

    return 0;
}
```

---

# 16. Common String Functions

Common C-string functions:
- `strlen()`
- `strcpy()`
- `strcat()`
- `strcmp()`

Header file:

```cpp
#include <cstring>
```

---

# 17. strlen()

Returns string length.

Example:

```cpp
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char text[] = "Hello";

    cout << strlen(text);

    return 0;
}
```

Output:

```text
5
```

---

# 18. strcpy()

Copies one string into another.

Example:

```cpp
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char source[] = "Hello";
    char destination[20];

    strcpy(destination, source);

    cout << destination;

    return 0;
}
```

---

# 19. strcat()

Concatenates strings.

Example:

```cpp
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char first[20] = "Hello ";
    char second[] = "World";

    strcat(first, second);

    cout << first;

    return 0;
}
```

Output:

```text
Hello World
```

---

# 20. strcmp()

Compares strings.

Example:

```cpp
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char first[] = "Apple";
    char second[] = "Banana";

    cout << strcmp(first, second);

    return 0;
}
```

Possible results:
- `0` → equal
- Negative → first smaller
- Positive → first larger

---

# 21. Character Manipulation Functions

Header:

```cpp
#include <cctype>
```

Useful functions:
- `toupper()`
- `tolower()`
- `isdigit()`
- `isalpha()`

---

# 22. toupper() and tolower()

Example:

```cpp
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char letter = 'a';

    cout << (char)toupper(letter) << endl;

    return 0;
}
```

Output:

```text
A
```

---

# 23. Character Classification Functions

Examples:

```cpp
isdigit('5')
isalpha('A')
isspace(' ')
```

Program:

```cpp
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    cout << isdigit('7');

    return 0;
}
```

Output:

```text
1
```

---

# 24. std::string in C++

`std::string` is a modern string class in C++.

Header:

```cpp
#include <string>
```

Advantages:
- Easier to use
- Safer
- Dynamic size

---

# 25. Declaring std::string

Example:

```cpp
string name;
```

---

# 26. Initializing std::string

Example:

```cpp
string city = "London";
```

---

# 27. String Input and Output

Example:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;

    getline(cin, name);

    cout << name << endl;

    return 0;
}
```

---

# 28. String Concatenation

Example:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string first = "Hello ";
    string second = "World";

    string result = first + second;

    cout << result;

    return 0;
}
```

Output:

```text
Hello World
```

---

# 29. String Length

Using `.length()`:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text = "Programming";

    cout << text.length();

    return 0;
}
```

Output:

```text
11
```

---

# 30. Accessing Characters in std::string

Example:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word = "Hello";

    cout << word[0];

    return 0;
}
```

Output:

```text
H
```

---

# 31. String Traversal

Example:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text = "Hello";

    for (char c : text)
    {
        cout << c << endl;
    }

    return 0;
}
```

---

# 32. String Comparison

Example:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string first = "Apple";
    string second = "Banana";

    if (first < second)
    {
        cout << "Apple comes first";
    }

    return 0;
}
```

---

# 33. String Searching

Using `.find()`:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text = "Hello World";

    cout << text.find("World");

    return 0;
}
```

Output:

```text
6
```

---

# 34. String Modification

Example:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text = "Hello";

    text[0] = 'Y';

    cout << text;

    return 0;
}
```

Output:

```text
Yello
```

---

# 35. String Insertion

Using `.insert()`:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text = "Hello";

    text.insert(5, " World");

    cout << text;

    return 0;
}
```

Output:

```text
Hello World
```

---

# 36. String Erasing

Using `.erase()`:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text = "Hello World";

    text.erase(5, 6);

    cout << text;

    return 0;
}
```

Output:

```text
Hello
```

---

# 37. String Replacement

Using `.replace()`:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text = "I like Java";

    text.replace(7, 4, "C++");

    cout << text;

    return 0;
}
```

Output:

```text
I like C++
```

---

# 38. String Conversion

Examples:

```cpp
stoi()
stod()
to_string()
```

Program:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string number = "123";

    int value = stoi(number);

    cout << value + 10;

    return 0;
}
```

Output:

```text
133
```

---

# 39. String Streams

Header:

```cpp
#include <sstream>
```

Example:

```cpp
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string data = "100 200";

    stringstream ss(data);

    int a, b;

    ss >> a >> b;

    cout << a + b;

    return 0;
}
```

Output:

```text
300
```

---

# 40. Escape Sequences

Common escape sequences:

```text
\n  New line
\t  Tab
\\  Backslash
\"  Double quote
\'  Single quote
```

Example:

```cpp
cout << "Hello\nWorld";
```

---

# 41. Raw String Literals

Raw strings ignore escape sequences.

Example:

```cpp
string text = R"(C:\Users\Admin)";
```

Without raw strings:

```cpp
"C:\\Users\\Admin"
```

---

# 42. Character Sequences and Memory

C-style strings:
- Stored as arrays
- Require null terminator

`std::string`:
- Dynamically managed
- Safer memory handling

---

# 43. C-Style Strings vs std::string

## C-Style Strings

Advantages:
- Faster in some cases
- Low-level control

Disadvantages:
- Unsafe
- Manual management
- Buffer overflow risks

## std::string

Advantages:
- Easier to use
- Safer
- Dynamic size

---

# 44. Advantages of std::string

Advantages:
- Automatic memory management
- Rich built-in functions
- Safer operations
- Better readability

---

# 45. Common Mistakes

## Missing Null Terminator

Wrong:

```cpp
char text[5] = {'H', 'e', 'l', 'l', 'o'};
```

---

## Buffer Overflow

Wrong:

```cpp
char name[5];

cin >> name;
```

Input larger than 4 characters may overflow.

---

## Using == with C-Strings

Wrong:

```cpp
char a[] = "Hello";
char b[] = "Hello";

if (a == b)
{
}
```

Correct:

```cpp
strcmp(a, b)
```

---

## Mixing getline() and cin

Problem:

```cpp
cin >> age;
getline(cin, name);
```

The newline remains in the buffer.

Solution:

```cpp
cin.ignore();
```

---

# 46. Best Practices

Best practices:
- Prefer `std::string`
- Use `getline()` for full lines
- Validate string input
- Avoid fixed-size buffers when possible
- Use library string functions
- Check bounds carefully

Good example:

```cpp
string name;
getline(cin, name);
```

---

# 47. Real-World Applications

Character sequences are used in:
- Text editors
- Password systems
- Search engines
- File handling
- Databases
- Compilers
- Web applications
- Chat applications

---

# 48. Summary

Character sequences represent text in C++.

Main approaches:
- Character arrays
- C-style strings
- `std::string`

Important concepts:
- Null terminator
- String functions
- Character manipulation
- String searching
- String modification
- Memory management

`std::string` is generally preferred because it:
- Is safer
- Is easier to use
- Supports dynamic sizing

Character sequences are essential for:
- Input/output
- Text processing
- File handling
- Software development
- Modern C++ programming