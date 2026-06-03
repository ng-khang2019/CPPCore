#include <iostream>
using namespace std;

void timMax(int array[], int arrayLength)
{
    int max = array[0];
    int count = 0;
    for (int i = 0; i < arrayLength; i++)
    {
        if (array[i] > max) {
            max = array[i];
            count = 1;
        } else if (array[i] == max) {
            count++;
        }
    }
    cout << "Max: " << max << " Count: " << count << endl;
}

void timMin(int array[], int arrayLength)
{
    int min = array[0];
    int count = 0;
    for (int i = 0; i < arrayLength; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
            count = 1;
        } else if (array[i] == min) {
            count++;
        }
    }
    cout << "Min: " << min << " Count: " << count << endl;
}

int main()
{
    const int n = 15;
    int array[n] = {1,1,8,9,5,6,7,10,2,3,5,7,1,8,10};

    timMax(array, n);
    timMin(array, n);
    return 0;
}
