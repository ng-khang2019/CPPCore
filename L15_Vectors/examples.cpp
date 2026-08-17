#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Student
{
    string name;
    Student(string name) : name(name) {};
};

void printVector(vector<int> nums)
{
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << "\n";
}
int main()
{
    cout << "=== Vector Initialization & Basics ===" << endl;
    // Declaring Vectors
    vector<int> emptyVec;
    // Initializing Vectors
    vector<int> values = {10, 20, 30};
    vector<int> fixedSize(5);
    vector<int> customValues(3, 100);

    // Accessing & Updating
    values[1] = 25;
    cout << "Accessing values[1]: " << values[1] << endl;

    // at(), front() and back()
    cout << "Using at(2): " << values.at(2) << endl;
    cout << "Front: " << values.front() << ", Back: " << values.back() << endl;

    cout << "\n=== Size, Capacity & Memory ===" << endl;
    // Vector Size & Vector Capacity & Empty Vectors
    vector<int> dynVec;
    cout << "Empty? " << (dynVec.empty() ? "Yes" : "No") << endl;
    dynVec.reserve(10); // Best Practices (Reserve capacity)
    cout << "Capacity after reserve(10): " << dynVec.capacity() << endl;
    dynVec.push_back(5);
    dynVec.push_back(15);
    dynVec.emplace_back(25); // Faster than push_back, avoids copy)
    cout << "Size: " << dynVec.size() << ", Capacity: " << dynVec.capacity() << endl;

    // Removing Elements
    dynVec.pop_back(); // Removes 25
    cout << "Size after pop_back(): " << dynVec.size() << endl;

    // insert() and erase() an element at specific index
    cout << "\n=== Modifying Vectors ===" << endl;
    vector<int> nums = {1, 2, 3, 4, 5};
    nums.insert(nums.begin() + 2, 99); // Insert 99 at index 2
    nums.erase(nums.begin() + 4); // Remove element at index 4 (which was 4)
    cout << "After insert and erase: ";
    printVector(nums);
    // resize()
    cout << "Size: " << nums.size() << ", Capacity: " << nums.capacity() << endl;
    nums.resize(3);
    cout << "After resize(3): ";
    printVector(nums);
    cout << "Size: " << nums.size() << ", Capacity: " << nums.capacity() << endl;


    // swap(): swap two vectors
    vector<int> a = {1, 1};
    vector<int> b = {2, 2};
    a.swap(b);
    cout << "Vector 'a' after swap: ";
    printVector(a);

    // assign(): change all elements with specific value to another value
    a.assign(4, 7);
    cout << "Vector 'a' after assign(4, 7): ";
    printVector(a);

    // clear(): Remove all elements
    a.clear();
    cout << "Size after clear(): " << a.size() << endl;

    // Traversing
    cout << "\n=== Traversing Vectors ===" << endl;
    vector<int> list = {10, 20, 30};
    // Range-Based Loops
    cout << "Range-based loop: ";
    for (int val : list) cout << val << " ";
    cout << endl;
    // Using Iterators & begin() and end()
    cout << "Iterator loop: ";
    for (vector<int>::iterator it = list.begin(); it != list.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Sorting and Searching
    cout << "\n=== Sorting & Searching (<algorithm>) ===" << endl;
    vector<int> randomNums = {50, 10, 40, 20, 30};
    // Sorting Vectors
    sort(randomNums.begin(), randomNums.end());
    cout << "Sorted: ";
    printVector(randomNums);
    // Searching in Vectors
    auto it = find(randomNums.begin(), randomNums.end(), 30);
    if (it != randomNums.end())
    {
        cout << "Found 30 at index: " << distance(randomNums.begin(), it) << endl;
    }

    cout << "\n=== Advanced Vectors ===" << endl;
    // Vector of Strings
    vector<string> names = {"Alice", "Bob"};
    // Vector of Objects
    vector<Student> students;
    students.emplace_back("Charlie"); // Directly constructs Student
    // 2D Vectors & Nested Vectors
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
