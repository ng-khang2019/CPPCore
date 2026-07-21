#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n;i++)
    {
        int temp = arr[i];
        int j = i -1;
        if (temp < arr[j])
        {
            while (j >= 0 && temp < arr[j])
            {
                // Shift
                arr[j+1] = arr[j];
                j--;
            }
        }
        arr[j+1] = temp;
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
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}
