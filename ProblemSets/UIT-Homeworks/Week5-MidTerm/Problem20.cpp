#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout << "Nhap so tien can doi: ";
    cin >> n;

    int menhGia[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int soToTien;
    int temp = n;

    cout << "Chi tiet doi tien:" << endl;
    for (int i = 0; i < 9; i++) {
        if (temp >= menhGia[i] * 1000) {
            soToTien = temp / (menhGia[i]*1000);
            cout << "- " <<soToTien << " to " << menhGia[i] << "k" << endl;
            temp %= menhGia[i] * 1000;
        }
    }
    return 0;
}