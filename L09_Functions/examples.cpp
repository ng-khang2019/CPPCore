#include <iostream>
#include <cmath> // 28. Built-in Functions
#include <string>

// 17. Function Prototypes & 4. Function Declaration
int add(int a, int b);
void greet(std::string name = "Guest"); // 13. Default Parameters
void printMessage(); // 8. Void Functions

// 20. Global Variables
int globalCount = 0;

// 15. Inline Functions
inline int square(int x) {
    return x * x;
}

// 14. Function Overloading
double add(double a, double b) {
    return a + b;
}

// 10. Pass by Value
void passByValue(int x) {
    x = 100;
}

// 11. Pass by Reference
void passByReference(int &x) {
    x = 100;
}

// 12. Pass by Pointer
void passByPointer(int *x) {
    if (x != nullptr) {
        *x = 200;
    }
}

// 22. Constant Parameters
void printConst(const int x) {
    // x = 50; // Error: x is read-only
    std::cout << "Const parameter: " << x << std::endl;
}

// 16. Recursive Functions
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// 24. Returning References
int& getGlobalCount() {
    return globalCount;
}

// 25. Returning Pointers
int* getPointerToGlobal() {
    return &globalCount;
}

// 27. Function Templates
template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

// Class to demonstrate Member functions, Constructors, Destructors, Friend functions
class ExampleClass {
private:
    int value;

public:
    // 31. Constructor Functions
    ExampleClass(int v) : value(v) {
        std::cout << "Constructor called for ExampleClass" << std::endl;
    }

    // 32. Destructor Functions
    ~ExampleClass() {
        std::cout << "Destructor called for ExampleClass" << std::endl;
    }

    // 30. Member Functions
    void displayValue() {
        std::cout << "Value: " << value << std::endl;
    }

    // 29. Friend Functions
    friend void modifyValue(ExampleClass& obj, int newValue);
};

// Friend function definition
void modifyValue(ExampleClass& obj, int newValue) {
    obj.value = newValue; // Accessing private member
}

// 21. Static Variables in Functions
void counterFunction() {
    static int count = 0;
    count++;
    std::cout << "Static count: " << count << std::endl;
}


int main() {
    std::cout << "--- Basic Functions & Types ---" << std::endl;
    printMessage();
    greet();
    greet("Alice");
    std::cout << "Add integers: " << add(5, 7) << std::endl;
    std::cout << "Add doubles: " << add(5.5, 2.3) << std::endl;

    std::cout << "\n--- Passing Arguments ---" << std::endl;
    int number = 50;
    passByValue(number);
    std::cout << "After passByValue, number: " << number << std::endl; // Remains 50
    passByReference(number);
    std::cout << "After passByReference, number: " << number << std::endl; // Changes to 100
    passByPointer(&number);
    std::cout << "After passByPointer, number: " << number << std::endl; // Changes to 200

    std::cout << "\n--- Inline & Recursive Functions ---" << std::endl;
    std::cout << "Square of 5 (inline): " << square(5) << std::endl;
    std::cout << "Factorial of 5 (recursive): " << factorial(5) << std::endl;

    std::cout << "\n--- Scope & Variables ---" << std::endl;
    counterFunction();
    counterFunction();
    printConst(42);

    std::cout << "\n--- Returning Reference and Pointer ---" << std::endl;
    getGlobalCount() = 10; // Modifying returned reference
    std::cout << "Global count after reference modification: " << globalCount << std::endl;
    int* ptr = getPointerToGlobal();
    *ptr = 20;
    std::cout << "Global count after pointer modification: " << globalCount << std::endl;

    std::cout << "\n--- Lambda Functions ---" << std::endl;
    // 26. Lambda Functions
    auto multiply = [](int a, int b) {
        return a * b;
    };
    std::cout << "Lambda multiply(4, 5): " << multiply(4, 5) << std::endl;

    std::cout << "\n--- Function Templates ---" << std::endl;
    std::cout << "Maximum of 10 and 20: " << maximum(10, 20) << std::endl;
    std::cout << "Maximum of 3.14 and 2.71: " << maximum(3.14, 2.71) << std::endl;

    std::cout << "\n--- Built-in Functions ---" << std::endl;
    std::cout << "Square root of 144: " << std::sqrt(144) << std::endl;

    std::cout << "\n--- Class Functions ---" << std::endl;
    {
        ExampleClass obj(100);
        obj.displayValue();
        modifyValue(obj, 250);
        obj.displayValue();
    } // Destructor called here

    return 0;
}

// 5. Function Definition (from earlier declaration)
int add(int a, int b) {
    return a + b;
}

void printMessage() {
    std::cout << "Learning Functions in C++!" << std::endl;
}

void greet(std::string name) {
    std::cout << "Hello, " << name << "!" << std::endl;
}
