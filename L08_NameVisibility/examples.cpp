#include <iostream>

// 5. Global Scope & 10. File Scope
int globalVar = 100;

// 21. Anonymous Namespaces
namespace {
    int fileScopeVar = 50; // Visible only within this file
}

// 9. Namespace Scope & 20. Namespaces and Visibility
namespace Math {
    int value = 42;
}

// 8. Class Scope & 24. Visibility in Classes
class ExampleClass {
// 26. Private Members
private:
    int privateVar = 10;

// 27. Protected Members
protected:
    int protectedVar = 20;

// 25. Public Members
public:
    int publicVar = 30;

    void display() {
        // Class scope visibility
        std::cout << "Inside ExampleClass::display(), privateVar: " << privateVar << std::endl;
    }

    // 29. Friend Functions and Visibility
    friend void friendFunction(ExampleClass& obj);
};

void friendFunction(ExampleClass& obj) {
    // Can access private members of ExampleClass
    std::cout << "Inside friendFunction, privateVar: " << obj.privateVar << std::endl;
}

// 18. Visibility of Function Parameters
void demonstrateScopes(int paramVar) {
    // 4. Local Scope & 15. Visibility in Functions
    int localVar = 10;
    std::cout << "Local variable: " << localVar << ", Parameter variable: " << paramVar << std::endl;

    // 11. Variable Shadowing & 12. Scope Resolution Operator
    int globalVar = 200; // Shadows the global variable
    std::cout << "Shadowed local globalVar: " << globalVar << std::endl;
    std::cout << "Actual globalVar using :: operator: " << ::globalVar << std::endl;

    // 6. Block Scope & 14. Visibility in Nested Blocks
    {
        int blockVar = 5;
        std::cout << "Block variable: " << blockVar << std::endl;
        // Can access outer variables
        std::cout << "Accessing outer localVar from block: " << localVar << std::endl;
    }
    // std::cout << blockVar; // Error: blockVar is not visible here
}

void loopAndConditionVisibility() {
    // 16. Visibility in Loops
    for (int i = 0; i < 3; i++) {
        std::cout << "Loop variable i: " << i << std::endl;
    }
    // std::cout << i; // Error: i is not visible here

    // 17. Visibility in Conditional Statements
    if (true) {
        int condVar = 7;
        std::cout << "Conditional block variable: " << condVar << std::endl;
    }
    // std::cout << condVar; // Error: condVar is not visible here
}

// 19. Static Variables and Visibility
void counter() {
    static int count = 0; // Local visibility, lifetime of the program
    count++;
    std::cout << "Static counter: " << count << std::endl;
}

// 7. Function Scope
void functionScopeExample() {
    goto start;

    std::cout << "This will be skipped." << std::endl;

start: // Label has function scope
    std::cout << "Jumped to start label." << std::endl;
}

int main() {
    std::cout << "--- Scope Demonstrations ---" << std::endl;
    demonstrateScopes(5);
    
    std::cout << "\n--- Loop and Conditional Visibility ---" << std::endl;
    loopAndConditionVisibility();

    std::cout << "\n--- Static Variable Visibility ---" << std::endl;
    counter();
    counter();

    std::cout << "\n--- Function Scope (goto label) ---" << std::endl;
    functionScopeExample();

    std::cout << "\n--- Namespace Visibility ---" << std::endl;
    std::cout << "Math::value = " << Math::value << std::endl;

    std::cout << "\n--- Class and Friend Function Visibility ---" << std::endl;
    ExampleClass obj;
    obj.display();
    friendFunction(obj);

    return 0;
}
