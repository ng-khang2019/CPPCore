#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    cout << "=== Vector Initialization & Basics ===" << endl;
    // 6. Declaring Vectors & 7. Initializing Vectors
    vector<int> emptyVec;
    vector<int> values = {10, 20, 30};
    vector<int> fixedSize(5); // 5 elements initialized to 0
    vector<int> customValues(3, 100); // 3 elements, all 100

    // 8. Accessing & 9. Updating
    values[1] = 25;
    cout << "Accessing values[1]: " << values[1] << endl;

    // 20. at() Function (Bounds checking)
    cout << "Using at(2): " << values.at(2) << endl;

    // 19. front() and back()
    cout << "Front: " << values.front() << ", Back: " << values.back() << endl;

    cout << "\n=== Size, Capacity & Memory ===" << endl;
    // 10. Vector Size & 11. Vector Capacity & 12. Empty Vectors
    vector<int> dynVec;
    cout << "Empty? " << (dynVec.empty() ? "Yes" : "No") << endl;

    // 42. Best Practices (Reserve capacity)
    dynVec.reserve(10);
    cout << "Capacity after reserve(10): " << dynVec.capacity() << endl;

    // 13. Adding Elements
    dynVec.push_back(5);
    dynVec.push_back(15);

    // 37. Emplace Functions (Faster, avoids copy)
    dynVec.emplace_back(25);

    cout << "Size: " << dynVec.size() << ", Capacity: " << dynVec.capacity() << endl;

    // 14. Removing Elements
    dynVec.pop_back(); // Removes 25
    cout << "Size after pop_back(): " << dynVec.size() << endl;

    cout << "\n=== Modifying Vectors ===" << endl;
    vector<int> nums = {1, 2, 3, 4, 5};

    // 22. insert()
    nums.insert(nums.begin() + 2, 99); // Insert 99 at index 2

    // 23. erase()
    nums.erase(nums.begin() + 4); // Remove element at index 4 (which was 4)

    cout << "After insert and erase: ";
    printVector(nums);

    // 24. resize()
    nums.resize(3);
    cout << "After resize(3): ";
    printVector(nums);

    // 25. swap()
    vector<int> a = {1, 1};
    vector<int> b = {2, 2};
    a.swap(b);
    cout << "Vector 'a' after swap: ";
    printVector(a);

    // 26. assign()
    a.assign(4, 7);
    cout << "Vector 'a' after assign(4, 7): ";
    printVector(a);

    // 21. clear()
    a.clear();
    cout << "Size after clear(): " << a.size() << endl;

    cout << "\n=== Traversing Vectors ===" << endl;
    vector<int> list = {10, 20, 30};

    // 16. Range-Based Loops
    cout << "Range-based loop: ";
    for (int val : list) cout << val << " ";
    cout << endl;

    // 17. Using Iterators & 18. begin() and end()
    cout << "Iterator loop: ";
    for (vector<int>::iterator it = list.begin(); it != list.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    cout << "\n=== Sorting & Searching (<algorithm>) ===" << endl;
    vector<int> randomNums = {50, 10, 40, 20, 30};

    // 33. Sorting Vectors
    sort(randomNums.begin(), randomNums.end());
    cout << "Sorted: ";
    printVector(randomNums);

    // 34. Searching in Vectors
    auto it = find(randomNums.begin(), randomNums.end(), 30);
    if (it != randomNums.end())
    {
        cout << "Found 30 at index: " << distance(randomNums.begin(), it) << endl;
    }

    cout << "\n=== Advanced Vectors ===" << endl;
    // 27. Vector of Strings
    vector<string> names = {"Alice", "Bob"};

    // 28. Vector of Objects
    vector<Student> students;
    students.emplace_back("Charlie"); // Directly constructs Student

    // 29. 2D Vectors & 30. Nested Vectors
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6}
    };
    cout << "2D Vector Element at [1][2]: " << matrix[1][2] << endl;

    // Output nested vector
    cout << "Traversing 2D Vector: " << endl;
    for (const auto& row : matrix)
    {
        for (int val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
