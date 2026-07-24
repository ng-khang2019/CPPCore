#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    bool swapped = false;
    for (int i = 0; i < n-1;i++)
    {
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
