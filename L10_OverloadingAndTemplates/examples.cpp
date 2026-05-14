#include <iostream>
#include <string>

// ==========================================
// 1. Function Overriding and Polymorphism
// ==========================================

// 12. Abstract Classes & 11. Pure Virtual Functions
class Shape {
public:
    // 17. Destructor Overriding
    virtual ~Shape() {
        std::cout << "Shape Destructor" << std::endl;
    }

    // Pure virtual function
    virtual void draw() const = 0; 
};

// 5. Base Class and Derived Class
class Circle : public Shape {
public:
    // 9. Override Keyword & 6. Virtual Functions
    void draw() const override {
        std::cout << "Drawing Circle" << std::endl;
    }

    ~Circle() override {
        std::cout << "Circle Destructor" << std::endl;
    }
};

class Base {
public:
    virtual ~Base() = default;

    virtual void show() {
        std::cout << "Base show" << std::endl;
    }

    // 10. Final Keyword (prevents overriding in Derived)
    virtual void display() final {
        std::cout << "Base display (final)" << std::endl;
    }

    // 16. Covariant Return Types
    virtual Base* clone() const {
        return new Base(*this);
    }
};

class Derived : public Base {
public:
    // 15. Function Hiding vs Overriding
    // If we forget `override` and change signature, it hides instead of overrides.
    // Here we override properly:
    void show() override {
        std::cout << "Derived show" << std::endl;
    }

    // display() cannot be overridden here because it is marked final in Base

    // Covariant Return Type: Returns Derived* instead of Base*
    Derived* clone() const override {
        return new Derived(*this);
    }
};

// ==========================================
// 2. Templates
// ==========================================

// 24. Function Templates & 27. Template Type Parameters
template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

// 32. Function Template Specialization
template <>
const char* maximum<const char*>(const char* a, const char* b) {
    std::cout << "(Specialized maximum for const char*) ";
    return (std::string(a) > std::string(b)) ? a : b;
}

// 25. Class Templates & 28. Multiple Template Parameters
template <typename T, typename U>
class Pair {
public:
    T first;
    U second;

    Pair(T f, U s) : first(f), second(s) {}

    void display() const {
        std::cout << "Pair: " << first << ", " << second << std::endl;
    }
};

// 33. Class Template Specialization (Full Specialization)
template <>
class Pair<int, int> {
public:
    int first;
    int second;

    Pair(int f, int s) : first(f), second(s) {}

    void display() const {
        std::cout << "Specialized Pair<int, int>: " << first << ", " << second << std::endl;
    }
};

// 34. Partial Template Specialization
template <typename T>
class Pair<T, int> {
public:
    T first;
    int second;

    Pair(T f, int s) : first(f), second(s) {}

    void display() const {
        std::cout << "Partially Specialized Pair<T, int>: " << first << ", " << second << std::endl;
    }
};

// 29. Non-Type Template Parameters & 30. Default Template Parameters
template <typename T = int, int Size = 5>
class Array {
private:
    T arr[Size];
public:
    void fill(T value) {
        for (int i = 0; i < Size; i++) {
            arr[i] = value;
        }
    }
    void print() const {
        std::cout << "Array size " << Size << ": ";
        for (int i = 0; i < Size; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

// 35. Variadic Templates
void printAll() {
    std::cout << std::endl;
}

template <typename T, typename... Types>
void printAll(T first, Types... rest) {
    std::cout << first << " ";
    printAll(rest...);
}

int main() {
    std::cout << "=== Function Overriding & Polymorphism ===" << std::endl;
    
    // 8. Runtime Polymorphism & 13. Dynamic Binding
    Shape* shapePtr = new Circle();
    shapePtr->draw(); // Calls Circle::draw()
    delete shapePtr;  // Calls Circle destructor, then Shape destructor

    Base* basePtr = new Derived();
    basePtr->show(); // Calls Derived::show()
    
    Base* clonedBase = basePtr->clone(); // Uses covariant return type internally
    clonedBase->show();
    
    delete basePtr;
    delete clonedBase;

    std::cout << "\n=== Templates ===" << std::endl;

    std::cout << "\n--- Function Templates ---" << std::endl;
    std::cout << "Max of ints: " << maximum(10, 20) << std::endl;
    std::cout << "Max of doubles: " << maximum(3.5, 2.1) << std::endl;
    std::cout << "Max of const char*: " << maximum("Apple", "Banana") << std::endl;

    std::cout << "\n--- Class Templates & Specializations ---" << std::endl;
    Pair<std::string, double> p1("Pi", 3.14);
    p1.display(); // General template

    Pair<int, int> p2(10, 20);
    p2.display(); // Full specialization

    Pair<std::string, int> p3("Age", 30);
    p3.display(); // Partial specialization

    std::cout << "\n--- Non-Type & Default Template Parameters ---" << std::endl;
    Array<double, 3> arr1;
    arr1.fill(1.5);
    arr1.print();

    Array<> arr2; // Uses default <int, 5>
    arr2.fill(42);
    arr2.print();

    std::cout << "\n--- Variadic Templates ---" << std::endl;
    std::cout << "Printing multiple arguments of different types: ";
    printAll(1, 2.5, "Hello", 'Z');

    return 0;
}
