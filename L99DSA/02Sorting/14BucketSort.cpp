#include <iostream>
using namespace std;

void bucketSort(int arr[], int n)
{

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
    bucketSort(arr, n);
    printArray(arr, n);
    return 0;
}
