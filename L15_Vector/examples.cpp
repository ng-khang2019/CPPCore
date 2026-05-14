#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// 28. Vector of Objects
class Student {
public:
    std::string name;
    Student(std::string n) : name(n) {}
};

// 31. Passing Vectors to Functions (Best Practice: pass by const reference)
void printVector(const std::vector<int>& numbers) {
    for (int value : numbers) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
}

// 32. Returning Vectors from Functions
std::vector<int> createVector() {
    std::vector<int> values = {1, 2, 3};
    return values;
}

int main() {
    std::cout << "=== Vector Initialization & Basics ===" << std::endl;
    // 6. Declaring Vectors & 7. Initializing Vectors
    std::vector<int> emptyVec;
    std::vector<int> values = {10, 20, 30};
    std::vector<int> fixedSize(5); // 5 elements initialized to 0
    std::vector<int> customValues(3, 100); // 3 elements, all 100

    // 8. Accessing & 9. Updating
    values[1] = 25; 
    std::cout << "Accessing values[1]: " << values[1] << std::endl;
    
    // 20. at() Function (Bounds checking)
    std::cout << "Using at(2): " << values.at(2) << std::endl;

    // 19. front() and back()
    std::cout << "Front: " << values.front() << ", Back: " << values.back() << std::endl;

    std::cout << "\n=== Size, Capacity & Memory ===" << std::endl;
    // 10. Vector Size & 11. Vector Capacity & 12. Empty Vectors
    std::vector<int> dynVec;
    std::cout << "Empty? " << (dynVec.empty() ? "Yes" : "No") << std::endl;
    
    // 42. Best Practices (Reserve capacity)
    dynVec.reserve(10); 
    std::cout << "Capacity after reserve(10): " << dynVec.capacity() << std::endl;

    // 13. Adding Elements
    dynVec.push_back(5);
    dynVec.push_back(15);
    
    // 37. Emplace Functions (Faster, avoids copy)
    dynVec.emplace_back(25);
    
    std::cout << "Size: " << dynVec.size() << ", Capacity: " << dynVec.capacity() << std::endl;

    // 14. Removing Elements
    dynVec.pop_back(); // Removes 25
    std::cout << "Size after pop_back(): " << dynVec.size() << std::endl;

    std::cout << "\n=== Modifying Vectors ===" << std::endl;
    std::vector<int> nums = {1, 2, 3, 4, 5};
    
    // 22. insert()
    nums.insert(nums.begin() + 2, 99); // Insert 99 at index 2
    
    // 23. erase()
    nums.erase(nums.begin() + 4); // Remove element at index 4 (which was 4)
    
    std::cout << "After insert and erase: ";
    printVector(nums);

    // 24. resize()
    nums.resize(3);
    std::cout << "After resize(3): ";
    printVector(nums);

    // 25. swap()
    std::vector<int> a = {1, 1};
    std::vector<int> b = {2, 2};
    a.swap(b);
    std::cout << "Vector 'a' after swap: ";
    printVector(a);

    // 26. assign()
    a.assign(4, 7);
    std::cout << "Vector 'a' after assign(4, 7): ";
    printVector(a);

    // 21. clear()
    a.clear();
    std::cout << "Size after clear(): " << a.size() << std::endl;

    std::cout << "\n=== Traversing Vectors ===" << std::endl;
    std::vector<int> list = {10, 20, 30};
    
    // 16. Range-Based Loops
    std::cout << "Range-based loop: ";
    for (int val : list) std::cout << val << " ";
    std::cout << std::endl;

    // 17. Using Iterators & 18. begin() and end()
    std::cout << "Iterator loop: ";
    for (std::vector<int>::iterator it = list.begin(); it != list.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "\n=== Sorting & Searching (<algorithm>) ===" << std::endl;
    std::vector<int> randomNums = {50, 10, 40, 20, 30};
    
    // 33. Sorting Vectors
    std::sort(randomNums.begin(), randomNums.end());
    std::cout << "Sorted: ";
    printVector(randomNums);

    // 34. Searching in Vectors
    auto it = std::find(randomNums.begin(), randomNums.end(), 30);
    if (it != randomNums.end()) {
        std::cout << "Found 30 at index: " << std::distance(randomNums.begin(), it) << std::endl;
    }

    std::cout << "\n=== Advanced Vectors ===" << std::endl;
    // 27. Vector of Strings
    std::vector<std::string> names = {"Alice", "Bob"};
    
    // 28. Vector of Objects
    std::vector<Student> students;
    students.emplace_back("Charlie"); // Directly constructs Student

    // 29. 2D Vectors & 30. Nested Vectors
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6}
    };
    std::cout << "2D Vector Element at [1][2]: " << matrix[1][2] << std::endl;

    // Output nested vector
    std::cout << "Traversing 2D Vector: " << std::endl;
    for (const auto& row : matrix) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
