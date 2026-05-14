#include <iostream>
#include <vector> // 36. Arrays vs Vectors

// 13. Passing Arrays to Functions
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// 14. Returning Arrays from Functions
// Normal arrays cannot be returned directly, so we use pointers (dynamic arrays)
int* createDynamicArray(int size) {
    int* newArr = new int[size];
    for (int i = 0; i < size; i++) {
        newArr[i] = (i + 1) * 10;
    }
    return newArr;
}

// 19. Searching in Arrays (Linear Search)
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Found
        }
    }
    return -1; // Not found
}

// 20. Sorting Arrays (Bubble Sort)
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// 32. Passing 2D Arrays to Functions
void print2DMatrix(int matrix[][3], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::cout << "=== 1D Arrays ===" << std::endl;
    
    // 5. Array Declaration & 6. Initialization
    int numbers[5] = {10, 20, 30, 40, 50};
    
    // 10. Array Size
    int size = sizeof(numbers) / sizeof(numbers[0]);
    std::cout << "Array size: " << size << std::endl;
    
    // 8. Updating Array Elements
    numbers[1] = 25; // Update element at index 1
    
    // 11. Traversing Arrays (Range-based for loop)
    std::cout << "Traversing array: ";
    for (int val : numbers) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    
    // 16. Arrays and Pointers
    std::cout << "Pointer access (arr + 2): " << *(numbers + 2) << std::endl;

    std::cout << "\n--- Array Operations ---" << std::endl;
    int unsortedArr[5] = {5, 2, 8, 1, 3};
    std::cout << "Unsorted: ";
    printArray(unsortedArr, 5);
    
    bubbleSort(unsortedArr, 5);
    std::cout << "Sorted: ";
    printArray(unsortedArr, 5);
    
    int target = 8;
    int index = linearSearch(unsortedArr, 5, target);
    std::cout << "Linear search for " << target << " found at index: " << index << std::endl;

    std::cout << "\n--- Dynamic 1D Arrays ---" << std::endl;
    int dynSize = 3;
    int* dynArr = createDynamicArray(dynSize);
    std::cout << "Dynamic array: ";
    for (int i = 0; i < dynSize; i++) std::cout << dynArr[i] << " ";
    std::cout << std::endl;
    delete[] dynArr; // Free memory!

    std::cout << "\n=== 2D Arrays ===" << std::endl;
    
    // 26. 2D Array Declaration & 27. Initialization
    int matrix1[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int matrix2[2][3] = {
        {6, 5, 4},
        {3, 2, 1}
    };
    
    // 28. Accessing 2D Array Elements
    std::cout << "Element at [1][2]: " << matrix1[1][2] << std::endl;
    
    std::cout << "\nMatrix 1:" << std::endl;
    print2DMatrix(matrix1, 2);
    
    // 33. Matrix Operations (Addition)
    std::cout << "\nMatrix Addition (Matrix1 + Matrix2):" << std::endl;
    int result[2][3];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    print2DMatrix(result, 2);

    std::cout << "\n--- Dynamic 2D Arrays & Jagged Arrays ---" << std::endl;
    // 35. Dynamic 2D Arrays (and how Jagged Arrays are created)
    int rows = 2;
    int** dynMatrix = new int*[rows];
    // Creating a jagged array (different column sizes per row)
    dynMatrix[0] = new int[3]{1, 2, 3}; // Row 0 has 3 elements
    dynMatrix[1] = new int[2]{4, 5};    // Row 1 has 2 elements

    std::cout << "Jagged Dynamic Matrix:" << std::endl;
    std::cout << "Row 0: " << dynMatrix[0][0] << " " << dynMatrix[0][1] << " " << dynMatrix[0][2] << std::endl;
    std::cout << "Row 1: " << dynMatrix[1][0] << " " << dynMatrix[1][1] << std::endl;

    // Free dynamic 2D array memory
    delete[] dynMatrix[0];
    delete[] dynMatrix[1];
    delete[] dynMatrix;

    std::cout << "\n--- Vectors vs Arrays ---" << std::endl;
    // 36. Arrays vs Vectors
    std::vector<int> vec = {10, 20, 30};
    vec.push_back(40); // Dynamic resizing
    std::cout << "Vector elements: ";
    for (int v : vec) std::cout << v << " ";
    std::cout << std::endl;

    return 0;
}
