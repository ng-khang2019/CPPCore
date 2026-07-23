#include <iostream>
using namespace std;

int lomutoPartition(int arr[], int left, int right)
{
    int pivot = arr[right];
    int j = left - 1;
    for (int i = left;i < right;i++)
    {
        if (arr[i] < pivot)
        {
            j++;
            swap(arr[i],arr[j]);
        }
    }
    j++;
    swap(arr[j],arr[right]);
    return j;
}

void quickSortLomuto(int arr[], int left, int right)
{
    if (left >= right) return;
    int pivot = lomutoPartition(arr, left, right);

    // Recursion for two halves
    quickSortLomuto(arr, left, pivot - 1);
    quickSortLomuto(arr, pivot + 1, right);
}

int hoarePartition(int arr[], int left, int right)
{
    int pivot = arr[left];
    int i = left -1;
    int j = right +1;

    while (true)
    {
        do i++; while (arr[i] < pivot);
        do j--; while (arr[j] > pivot);
        if (i >= j) return j;
        swap(arr[i],arr[j]);
    }
}

void quickSortHoare(int arr[], int left, int right)
{
    if (left >= right) return;
    int pivot = hoarePartition(arr, left, right);

    // Recursion for two halves
    quickSortHoare(arr, left, pivot);
    quickSortHoare(arr, pivot + 1, right);
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
    quickSortHoare(arr, 0,n-1);
    printArray(arr, n);
    return 0;
}