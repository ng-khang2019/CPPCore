#include <iostream>
using namespace std;

void interchangeSort(int arr[],int n)
{
    for (int i = 0; i < n-1;i++)
    {
        for (int j = i+1; j < n;j++)
            if (arr[i] > arr[j]) swap(arr[i], arr[j]);
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
    int n = sizeof(arr)/sizeof(arr[0]);
    interchangeSort(arr, n);
    printArray(arr, n);
    return 0;
    return 0;
}