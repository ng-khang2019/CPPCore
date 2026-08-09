#include <iostream>
using namespace std;

void countingSort(int arr[], int n)
{
    // First loop start with gap = n/2 then n/4, n/8, ...
    for (int gap = n/2; gap > 0; gap /= 2)
    {
        // Second loop sort all elements from i to the end
        for (int i = gap;i < n;i++)
        {
            int temp = arr[i];
            int j = i;
            // Third loop perform insertion sort with elements before i with
            // a distance of gap
            while (j >= gap && arr[j-gap] > temp)
            {
                arr[j] = arr[j-gap];
                j -= gap;
            }
            arr[j] = temp;
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
    int arr[] = {15,7,9,12,14,4,8,9,5,3,5,7,5,2,4,5};
    int n = std::size(arr);
    countingSort(arr, n);
    printArray(arr, n);
    return 0;
}
