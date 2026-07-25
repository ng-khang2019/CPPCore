#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int calcMinRun(int n)
{
    int remainder = 0;
    while (n >= 32)
    {
        remainder |= n & 1;
        n >>= 1;
    }
    return n + remainder;
}

void insertionSort(int arr[], int left, int right)
{
    for (int i = left + 1; i <= right; i++)
    {
        int temp = arr[i];
        int j = i - 1;

        while (j >= left && temp < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}


void merge(int arr[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temp arrays and copy the values
    vector<int> leftArr(n1), rightArr(n2);
    for (int i = 0; i < n1; i++) leftArr[i] = arr[left + i];
    for (int i = 0; i < n2; i++) rightArr[i] = arr[mid + 1 + i];

    // Merge the temp arrays
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (leftArr[i] <= rightArr[j])
        {
            arr[k++] = leftArr[i++];
        }
        else
        {
            arr[k++] = rightArr[j++];
        }
    }

    // Copy the remaining elements of leftArr[] if any
    while (i < n1) arr[k++] = leftArr[i++];
    // Copy the remaining elements of rightArr[] if any
    while (j < n2) arr[k++] = rightArr[j++];
}

void timSort(int arr[], int n)
{
    int minRun = calcMinRun(n);
    // Sort all runs
    for (int i = 0; i < n; i += minRun)
    {
        int right = min((i + minRun - 1), n - 1);
        insertionSort(arr, i, right);
    }

    for (int size = minRun; size < n; size *= 2)
    {
        for (int left = 0; left < n; left += 2 * size)
        {
            int mid = left + size - 1;
            int rightEnd = min(left + 2 * size - 1, n - 1);
            // Only merge if there is a right run
            if (mid < rightEnd) merge(arr, left, mid, rightEnd);
        }
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
    int smallArr[] = {7, 4, 8, 9, 1, 3, 12, 43, 78, 24, 17, 97, 6, 54, 2, 4, 10};
    int bigArr[] = {
        // Run 1 (0 - 31)
        3, 5, 8, 11, 14, 17, 19, 22,
        25, 27, 30, 33, 36, 39, 42, 45,
        48, 50, 53, 56, 59, 62, 65, 68,
        71, 74, 77, 80, 83, 86, 89, 92,

        // Run 2 (32 - 63)
        1, 4, 7, 10, 13, 16, 18, 21,
        24, 26, 29, 32, 35, 38, 41, 44,
        47, 49, 52, 55, 58, 61, 64, 67,
        70, 73, 76, 79, 82, 85, 88, 91,

        // Run 3 (64 - 95)
        2, 6, 9, 12, 15, 20, 23, 28,
        31, 34, 37, 40, 43, 46, 51, 54,
        57, 60, 63, 66, 69, 72, 75, 78,
        81, 84, 87, 90, 93, 94, 95, 96
    };

    int n1 = std::size(smallArr);
    int n2 = std::size(bigArr);
    timSort(smallArr, n1);
    timSort(bigArr, n2);
    printArray(smallArr, n1);
    printArray(bigArr, n2);
    return 0;
}
