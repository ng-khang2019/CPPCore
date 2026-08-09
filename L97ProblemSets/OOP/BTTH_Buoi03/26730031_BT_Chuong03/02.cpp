#include <iostream>

using namespace std;

const float PI = 3.1415926535;

class DuongTron {
private:
    float xTam, yTam; // Toa do tam
    float banKinh;

public:
    void nhap() {
        cout << "Nhap toa do tam (x y): ";
        cin >> xTam >> yTam;
        cout << "Nhap ban kinh: ";
        cin >> banKinh;
    }

    float tinhChuVi() {
        return 2 * PI * banKinh;
    }

    float tinhDienTich() {
        return PI * banKinh * banKinh;
    }

    void xuat() {
        cout << "Duong tron tam I(" << xTam << ", " << yTam << ") co ban kinh R = " << banKinh << endl;
        cout << "Chu vi: " << tinhChuVi() << endl;
        cout << "Dien tich: " << tinhDienTich() << endl;
    }
};

int main() {
    DuongTron dt;
    dt.nhap();
    dt.xuat();
    return 0;
}