#include <iostream>
using namespace std;
/*
 * Ref: https://www.happycoders.eu/algorithms/heapsort/
 */

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int leftNode = 2 * i + 1;
    int rightNode = 2 * i + 2;

    if (leftNode < n && arr[leftNode] > arr[largest]) largest = leftNode;
    if (rightNode < n && arr[rightNode] > arr[largest]) largest = rightNode;
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

void buildHeap(int arr[], int n)
{
    for (int i = n/2 - 1; i >= 0; i--) heapify(arr, n, i);
}

void heapSort(int arr[], int n)
{
    /* Build a max heap from the original array, starts with the last
     * parent node in the tree which is at index (n/2) -1
     */
    buildHeap(arr, n);

    /* Swap the first with the last element then repair the remaining
     * array to a max heap again
     */
    for (int i = n-1; i > 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
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
    int arr[] = {7,4,8,9,1,3,5,6,5,2,4,10};
    int n = std::size(arr);
    printArray(arr, n);
    heapSort(arr, n);
    printArray(arr, n);
    return 0;
}