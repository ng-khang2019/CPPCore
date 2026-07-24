#include <iostream>
using namespace std;

void binaryInsertionSort2(int arr[], int n)
{
    int left, right, mid;
    for (int i = 1; i < n;i++)
    {
        int temp = arr[i];
        int j = i -1;
        left = 0, right = i -1;
        // Look for the correct position to insert
        while (left <= right)
        {
            mid = left + (right - left) / 2;
            if (temp < arr[mid]) right = mid -1;
            else left = mid +1;
        }
        // Insert and shift
        while (j >= left)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[left] = temp;
    }
}

int binarySearch(int arr[], int left, int right, int key)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) return mid;
        if (arr[mid] > key) right = mid -1;
        else left = mid +1;
    }
    return left;
}

void binaryInsertionSort(int arr[], int n)
{
    for (int i = 1; i < n;i++)
    {
        int temp = arr[i];
        int j = i -1;
        int left = 0, right = i -1;

        // Look for the correct position to insert
        int insertPos = binarySearch(arr, left, right, temp);

        // Insert and shift
        while (j >= insertPos)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[insertPos] = temp;
    }
}


void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {7,4,8,9,5,3,5,7,5,2,4,5};
    int n = std::size(arr);
    printArray(arr, n);
    binaryInsertionSort(arr, n);
    printArray(arr, n);
    return 0;
}