#include <iostream>
using namespace std;

bool namNhuan(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int soNgayTrongThang(int month, int year) {
    switch (month) {
        case 4:
        case 6:
        case 9:
        case 11: return 30;
        case 2: return namNhuan(year) ? 29 : 28;
        default: return 31;
    }
}

int main () {
    int month, year;
    cout<<"Nhap thang (1-12): ";
    cin>>month;
    cout<<"Nhap nam: ";
    cin>>year;

    cout<<"So ngay cua thang "<<month<<" trong nam "<<year<<" la "<<soNgayTrongThang(month, year)<<endl;

    return 0;
}