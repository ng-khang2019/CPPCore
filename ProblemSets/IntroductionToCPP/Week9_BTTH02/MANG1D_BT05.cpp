#include <iostream>
#include <limits>
using namespace std;
const int imax = numeric_limits<int>::max();

void soDuongNhoNhat(int array[], int length)
{
    bool imaxExists = false;
    int min = imax;
    for (int i = 1; i < length; i++)
    {
        if (array[i] > 0 && array[i] < min)
        {
            min = array[i];
        }
        if (array[i] == imax)
        {
            imaxExists = true;
        }
    }
    if (min == imax && !imaxExists) {
        cout<<"Khong co so duong nho nhat"<<endl;
    } else if (min == imax && imaxExists) {
        cout<<"So duong nho nhat la "<<imax<<endl;
    } else {
        cout<<"So duong nho nhat la "<<min<<endl;
    }

}

int main()
{
    int array[] = {0,-2,-6,-8,-3,-54,-5,2147483647,-2,-15};
    soDuongNhoNhat(array, 10);
    return 0;
}

