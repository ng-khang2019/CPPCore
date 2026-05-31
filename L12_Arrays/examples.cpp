#include <iostream>
#include <iomanip>
#include <vector>
#include <random>
#include <array>

using namespace std;

int* createRandomElementsArray(int size) {
    srand(time(NULL));
    int* newArr = new int[size];
    for (int i = 0; i < size; i++) {
        newArr[i] = rand() % 101;
    }
    return newArr;
}

void inputArray(int arr[], int size)
{
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << std::endl;
}

void print2DMatrix(int matrix[][3], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    std::cout << "\n--- Basic 1D Array Operations ---" << std::endl;

    // Declaration
    int numb[10];
    
    // Declaration & Initialization
    int numbers[5] = {10, 20, 30, 40, 50};

    // Auto length detection
    int numbers2[] = {10, 20, 30, 40};
    
    // Array Size
    int size = sizeof(numbers) / sizeof(numbers[0]);
    // Or
    int size2 = std::size(numbers);
    cout << "Array size: " << ((size == size2) ? size : size2 )<< endl;
    /*
     * Important: The dynamic size trick sizeof(arr) / sizeof(arr[0]) works only
     * where the raw array object itself is visible within scope. If you hand your
     * array off to an external function, it immediately decays down to a simple
     * tracking pointer. sizeof on that parameter will simply measure the platform
     * pointer size, ruining your calculations
     */
    
    // Updating Array Elements
    numbers[1] = 25;

    // Arrays and Pointers
    // Formula to access element at index i using pointer: ai = *(arr + i)
    cout << "Pointer access (arr + 1): " << *(numbers + 1) << endl;

    // Traversing using tradition for loop
    cout << "Traversing array using tradition for loop: ";
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
    
    // Traversing using range-based for loop
    cout << "Traversing array using range-based for loop: ";
    for (int val : numbers) {
        cout << val << " ";
    }
    cout << endl;

    // Traversing using pointer increment
    cout << "Traversing array using pointer increment: ";
    for (int* ptr = numbers; ptr < numbers + size; ptr++)
    {
        cout << *ptr << " ";
    }
    cout << endl;

    // Traversing using pointer arithmetic
    cout << "Traversing array using pointer arithmetic: ";
    for (int i = 0; i < size; i++)
    {
        cout << *(numbers + i) << " ";
    }
    cout << endl;

    // Create an array with random elements
    int dynSize = 10;
    int* dynArr = createRandomElementsArray(dynSize);
    cout << "Random elements array: ";
    printArray(dynArr, dynSize);
    cout << endl;

    // Input elements
    cout << "Input elements: ";
    int arr[dynSize];
    inputArray(arr, dynSize);
    cout << "Arrays: ";
    printArray(arr, dynSize);
    cout << endl;

    // Free an array memory
    delete[] dynArr; // Free memory!
    cout << "Free up an array: ";


    cout << "\n--- 2D Arrays & Jagged Arrays ---" << ndl;
    
    // 2D Array Declaration & Initialization
    int matrix1[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int matrix2[2][3] = {
        {6, 5, 4},
        {3, 2, 1}
    };
    
    // Accessing 2D Array Elements
    cout << "Element at [1][2]: " << matrix1[1][2] << endl;
    
    cout << "\nMatrix 1:" << endl;
    print2DMatrix(matrix1, 2);
    
    // Matrix Operations (Addition)
    cout << "\nMatrix Addition (Matrix1 + Matrix2):" << endl;
    int result[2][3];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    print2DMatrix(result, 2);

    cout << "\n--- Dynamic 2D Arrays & Jagged Arrays ---" << endl;
    // Dynamic 2D Arrays (and how Jagged Arrays are created)
    int rows = 2;
    int** dynMatrix = new int*[rows];
    // Creating a jagged array (different column sizes per row)
    dynMatrix[0] = new int[3]{1, 2, 3}; // Row 0 has 3 elements
    dynMatrix[1] = new int[2]{4, 5};    // Row 1 has 2 elements

    cout << "Jagged Dynamic Matrix:" << endl;
    cout << "Row 0: " << dynMatrix[0][0] << " " << dynMatrix[0][1] << " " << dynMatrix[0][2] << endl;
    cout << "Row 1: " << dynMatrix[1][0] << " " << dynMatrix[1][1] << endl;

    // Free dynamic 2D array memory
    delete[] dynMatrix[0];
    delete[] dynMatrix[1];
    delete[] dynMatrix;

    return 0;
}
