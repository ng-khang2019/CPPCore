#include <iostream>
#include <cstring>  // For C-string functions
#include <cctype>   // For character manipulation
#include <string>   // For std::string
#include <sstream>  // For string streams

int main() {
    std::cout << "=== 1. C-Style Strings & Character Arrays ===" << std::endl;
    // 5. Character Arrays & 6. Null Character & 10. Initializing
    char word[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char city[] = "Tokyo"; // 8. String Literals automatically append '\0'

    std::cout << "Word: " << word << ", City: " << city << std::endl;

    // 11. Accessing Characters & 12. Traversing Character Sequences
    std::cout << "Traversing city: ";
    for (int i = 0; city[i] != '\0'; i++) {
        std::cout << city[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "\n--- C-String Functions (<cstring>) ---" << std::endl;
    char first[20] = "Apple";
    char second[] = "Banana";

    // 17. strlen()
    std::cout << "Length of 'Apple': " << strlen(first) << std::endl;

    // 20. strcmp()
    std::cout << "strcmp('Apple', 'Banana'): " << strcmp(first, second) << std::endl;

    // 19. strcat()
    char greeting[20] = "Hello ";
    char target[] = "World";
    strcat(greeting, target);
    std::cout << "strcat result: " << greeting << std::endl;

    // 18. strcpy()
    char destination[20];
    strcpy(destination, greeting);
    std::cout << "strcpy destination: " << destination << std::endl;

    std::cout << "\n--- Character Manipulation (<cctype>) ---" << std::endl;
    char lower = 'a';
    char numChar = '7';
    // 22. toupper() & tolower()
    std::cout << "toupper('a'): " << (char)toupper(lower) << std::endl;
    // 23. Character Classification Functions
    std::cout << "isdigit('7'): " << isdigit(numChar) << std::endl;
    std::cout << "isalpha('7'): " << isalpha(numChar) << std::endl;

    std::cout << "\n=== 2. std::string (Modern C++) ===" << std::endl;
    // 25. Declaring & 26. Initializing std::string
    std::string text1 = "Hello";
    std::string text2 = "C++";

    // 28. String Concatenation
    std::string combined = text1 + " " + text2;
    std::cout << "Concatenation: " << combined << std::endl;

    // 29. String Length
    std::cout << "Length: " << combined.length() << std::endl;

    // 31. String Traversal
    std::cout << "Traversal: ";
    for (char c : combined) {
        std::cout << c << "-";
    }
    std::cout << std::endl;

    // 33. String Searching
    size_t pos = combined.find("C++");
    if (pos != std::string::npos) {
        std::cout << "Found 'C++' at index: " << pos << std::endl;
    }

    std::cout << "\n--- std::string Modification ---" << std::endl;
    std::string sample = "Hello World";
    
    // 35. String Insertion
    sample.insert(5, " Beautiful");
    std::cout << "After insert: " << sample << std::endl;

    // 36. String Erasing
    sample.erase(5, 10); // Removes " Beautiful"
    std::cout << "After erase: " << sample << std::endl;

    // 37. String Replacement
    sample.replace(6, 5, "Universe");
    std::cout << "After replace: " << sample << std::endl;

    std::cout << "\n--- String Conversion ---" << std::endl;
    // 38. String Conversion
    std::string numStr = "456";
    int value = std::stoi(numStr);
    std::cout << "stoi('456') + 10 = " << value + 10 << std::endl;
    std::cout << "to_string(999): " << std::to_string(999) << std::endl;

    std::cout << "\n--- String Streams (<sstream>) ---" << std::endl;
    // 39. String Streams
    std::string data = "100 200 300";
    std::stringstream ss(data);
    int a, b, c;
    ss >> a >> b >> c;
    std::cout << "Extracted from stringstream: " << a << ", " << b << ", " << c << std::endl;

    std::cout << "\n--- Escape Sequences & Raw Strings ---" << std::endl;
    // 40. Escape Sequences & 41. Raw String Literals
    std::cout << "Normal string path: C:\\Users\\Admin\\Documents\n";
    std::string rawStr = R"(Raw string path: C:\Users\Admin\Documents)";
    std::cout << rawStr << std::endl;

    // Interactive Input/Output (13, 14, 15, 27) - Commented out for automated testing
    /*
    std::cout << "\n--- Input Examples (Uncomment to test) ---" << std::endl;
    char cName[50];
    std::cout << "Enter name (cin >> cName stops at space): ";
    std::cin >> cName;
    std::cin.ignore(); // 45. Common Mistakes: Mixing cin and getline

    std::string sName;
    std::cout << "Enter full name (getline for std::string): ";
    std::getline(std::cin, sName);
    std::cout << "You entered: " << sName << std::endl;
    */

    return 0;
}
