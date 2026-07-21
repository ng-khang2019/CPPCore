#include <iostream>
#include <limits>
using namespace std;

const int imin = numeric_limits<int>::min();

void soAmLonNhat(int array[], int length)
{
    int max = imin;
    bool iminExists = false;
    for (int i = 1; i < length; i++)
    {
        if (array[i] < 0 && array[i] > max)
        {
            max = array[i];
        }
        if (array[i] == imin)
        {
            iminExists = true;
        }
    }

    if (max == imin && !iminExists) {
        cout<<"Khong co so am lon nhat"<<endl;
    } else if (max == imin && iminExists) {
        cout<<"So am lon nhat la "<<imin<<endl;
    } else {
        cout<<"So am lon nhat la "<<max<<endl;
    }

}

int main()
{
    int array[] = {0,2,6,-2147483648,3,54,5,6,2,15};
    soAmLonNhat(array, 10);
    return 0;
}
