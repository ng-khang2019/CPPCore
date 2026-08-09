#include <iostream>
#include <cmath>

using namespace std;

class DonThuc {
private:
    float heSo; // a
    int soMu;   // b

public:
    DonThuc(float a = 0, int b = 0) {
        heSo = a;
        soMu = b;
    }

    void nhap() {
        cout << "Nhap he so (a): "; cin >> heSo;
        cout << "Nhap so mu (b): "; cin >> soMu;
    }

    void xuat() {
        if (heSo == 0) {
            cout << "0";
            return;
        }
        if (soMu == 0) {
            cout << heSo;
            return;
        }
        if (heSo != 1 && heSo != -1) cout << heSo;
        if (heSo == -1) cout << "-";

        cout << "x";
        if (soMu != 1) cout << "^" << soMu;
    }

    float tinhGiaTri(float x) {
        return heSo * pow(x, soMu);
    }

    DonThuc tinhDaoHam() {
        if (soMu == 0) return DonThuc(0, 0);
        return DonThuc(heSo * soMu, soMu - 1);
    }


    DonThuc cong(DonThuc dt2) {
        if (soMu != dt2.soMu) {
            cout << "[Loi] Hai don thuc khong cung bac, khong the cong gom." << endl;
            return DonThuc(0, 0);
        }
        return DonThuc(heSo + dt2.heSo, soMu);
    }

    int getSoMu() { return soMu; }
};

int main() {
    DonThuc dt1, dt2;

    cout << "--- Nhap don thuc 1 ---" << endl;
    dt1.nhap();
    cout << "--- Nhap don thuc 2 ---" << endl;
    dt2.nhap();

    cout << "\nDon thuc 1: P(x) = "; dt1.xuat(); cout << endl;
    cout << "Don thuc 2: Q(x) = "; dt2.xuat(); cout << endl;

    float x = 2.0;
    cout << "Gia tri cua P(" << x << ") = " << dt1.tinhGiaTri(x) << endl;

    DonThuc dh = dt1.tinhDaoHam();
    cout << "Dao ham cua P(x) = "; dh.xuat(); cout << endl;

    if (dt1.getSoMu() == dt2.getSoMu()) {
        DonThuc tong = dt1.cong(dt2);
        cout << "Tong hai don thuc P(x) + Q(x) = "; tong.xuat(); cout << endl;
    } else {
        cout << "Hai don thuc khong cung bac, khong tinh tong duoc." << endl;
    }

    return 0;
}