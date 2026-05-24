#include <iostream>
using namespace std;

void xuatMang(int array[], int n)
{
    cout<<"In ra mang voi "<< n <<" phan tu"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
}

int main()
{
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    xuatMang(array, 8);
    return 0;
}
