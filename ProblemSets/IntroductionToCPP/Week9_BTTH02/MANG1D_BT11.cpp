#include <iostream>
using namespace std;
class Search
{
public:
    static void printArray(int array[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }

    static void bubbleSort(int array[], int n)
    {
        bool swapped = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1 - i; j++)
            {
                if (array[j] > array[j + 1])
                {
                    int temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                    swapped = true;
                }
            }
            if (!swapped) break;
        }
    }

};


int main()
{
    return 0;
}
