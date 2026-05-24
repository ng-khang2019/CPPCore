#include <iostream>
using namespace std;

int main ()
{
    int bienSo;
    cout<<"Nhap bien so xe (4 chu so): ";
    cin>>bienSo;
    if (bienSo < 0 || bienSo > 9999)
    {
        cout<<"Bien so khong hop le!"<<endl;
        return 1;
    }

    int tong = 0;
    int temp = bienSo;
    while (temp > 0) {
        tong += temp % 10;
        temp /= 10;
    }

    int soNut = tong % 10;
    cout<<"So xe cua ban duoc "<<soNut<<" nut"<<endl;
    return 0;
}