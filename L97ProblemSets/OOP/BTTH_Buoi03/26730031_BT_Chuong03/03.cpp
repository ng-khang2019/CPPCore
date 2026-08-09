#include <iostream>
#include <cmath>

using namespace std;

class Diem {
private:
    float x, y;

public:
    void nhap(string tenDiem) {
        cout << "Nhap toa do diem " << tenDiem << " (x y): ";
        cin >> x >> y;
    }

    void xuat() {
        cout << "(" << x << ", " << y << ")";
    }

    float tinhKhoangCach(Diem d2) {
        return sqrt(pow(x - d2.x, 2) + pow(y - d2.y, 2));
    }
};

int main() {
    Diem d1, d2;
    d1.nhap("A");
    d2.nhap("B");

    cout << "Khoang cach giua hai diem A";
    d1.xuat();
    cout << " va B";
    d2.xuat();
    cout << " la: " << d1.tinhKhoangCach(d2) << endl;

    return 0;
}