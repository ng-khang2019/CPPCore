#include <iostream>
using namespace std;

// Or CocktailSort
void shakerSort(int arr[], int n)
{
    int left = 0, right = n-1;
    if (left >= right) return;
    bool swapped = true;
    while (swapped)
    {
        swapped = false;
        for (int i = left; i < right; i++)
        {
            if (arr[i] > arr[i+1]) swap(arr[i], arr[i+1]);
            swapped = true;
        }
        if (!swapped) break;
        right--;

        swapped = false;
        for (int i = right; i > left; i--)
        {
            if (arr[i] < arr[i-1]) swap(arr[i], arr[i-1]);
            swapped = true;
        }
        left++;
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
    shakerSort(arr, n);
    printArray(arr, n);
    return 0;
}