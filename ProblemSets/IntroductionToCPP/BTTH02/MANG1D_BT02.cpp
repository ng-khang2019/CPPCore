#include <iostream>
using namespace std;

const int MAX = 100;

int* taoMangNgauNhien(int &n)
{
    while (n <= 0 || n > MAX)
    {
        cout << "Nhap so phan tu cua mang, n < 100: ";
        cin >> n;
    }
    int* mang = new int[n];
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        mang[i] = rand() % 100;
    }
    return mang;
}


int main()
{
    int n;
    int* mang = taoMangNgauNhien(n);
    for (int i = 0; i < n; i++)
    {
        cout << mang[i] << " ";
    }
    return 0;
}
