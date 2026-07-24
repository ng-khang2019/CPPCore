#include <iostream>
using namespace std;

// Merge two sub arrays: arr[left..mid] and arr[mid+1..right]
void merge(int arr[], int left, int mid, int right)
{
    int n1 = mid - left +1;
    int n2 = right - mid;

    // Create temp arrays and copy the values
    int leftArr[n1], rightArr[n2];
    for (int i = 0; i < n1; i++) leftArr[i] = arr[left + i];
    for (int i = 0; i < n2; i++) rightArr[i] = arr[mid + 1 + i];

    // Merge the temp arrays
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of leftArr[] if any
    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    // Copy the remaining elements of rightArr[] if any
    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right)
{
    if (left >= right) return;
    int mid = left + (right - left) / 2;
    // Split the array in halves until there's only one element left
    mergeSort(arr, left, mid);
    mergeSort(arr, mid+1, right);
    // Merge and sort
    merge(arr, left, mid, right);
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
    int arr[] = {7,4,8,9,1,3,5,6,5,2,4,10};
    int n = std::size(arr);
    printArray(arr, n);
    mergeSort(arr, 0,n-1);
    printArray(arr, n);
    return 0;
}