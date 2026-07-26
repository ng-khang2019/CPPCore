#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    // Outer loop: One element is sorted after each iteration
    for (int i = 0; i < n-1;i++)
    {
        bool swapped = false;
        /* For each iteration:
            -To bring the largest element to the right end, iterate from 0 to n-1-i
            -To bring the smallest element to the left, iterate from n-1 to i
         */
        for (int j = n-1; j > i;j--)
        {
            if (arr[j-1] > arr[j]) swap(arr[j], arr[j-1]);
            swapped = true;
        }
        if (!swapped) break;
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
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}
