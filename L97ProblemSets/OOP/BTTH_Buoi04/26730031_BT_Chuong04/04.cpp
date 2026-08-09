#include <iostream>
#include <cmath>

using namespace std;

class DaThuc {
private:
    int bac;
    float* heSo;

public:

    DaThuc(int n = 0) {
        bac = n;
        heSo = new float[bac + 1];
        for (int i = 0; i <= bac; i++) heSo[i] = 0;
    }

    // Copy Constructor
    DaThuc(const DaThuc& dt) {
        bac = dt.bac;
        heSo = new float[bac + 1];
        for (int i = 0; i <= bac; i++) heSo[i] = dt.heSo[i];
    }

    ~DaThuc() {
        delete[] heSo;
    }

    void nhap() {
        cout << "Nhap bac cua da thuc: "; cin >> bac;
        delete[] heSo;
        heSo = new float[bac + 1];
        for (int i = bac; i >= 0; i--) {
            cout << "Nhap he so cua x^" << i << ": ";
            cin >> heSo[i];
        }
    }

    void xuat() {
        bool first = true;
        for (int i = bac; i >= 0; i--) {
            if (heSo[i] != 0) {
                if (!first && heSo[i] > 0) cout << " + ";
                else if (heSo[i] < 0) cout << " - ";

                float hs = abs(heSo[i]);
                if (hs != 1 || i == 0) cout << hs;

                if (i > 0) cout << "x";
                if (i > 1) cout << "^" << i;

                first = false;
            }
        }
        if (first) cout << "0";
        cout << endl;
    }

    float tinhGiaTri(float x) {
        float kq = 0;
        for (int i = 0; i <= bac; i++) {
            kq += heSo[i] * pow(x, i);
        }
        return kq;
    }

    DaThuc cong(const DaThuc& dt2) {
        int bacMax = max(bac, dt2.bac);
        DaThuc tong(bacMax);
        for (int i = 0; i <= bacMax; i++) {
            float hs1 = (i <= bac) ? heSo[i] : 0;
            float hs2 = (i <= dt2.bac) ? dt2.heSo[i] : 0;
            tong.heSo[i] = hs1 + hs2;
        }
        return tong;
    }

    DaThuc tru(const DaThuc& dt2) {
        int bacMax = max(bac, dt2.bac);
        DaThuc hieu(bacMax);
        for (int i = 0; i <= bacMax; i++) {
            float hs1 = (i <= bac) ? heSo[i] : 0;
            float hs2 = (i <= dt2.bac) ? dt2.heSo[i] : 0;
            hieu.heSo[i] = hs1 - hs2;
        }
        return hieu;
    }
};

int main() {
    DaThuc P, Q;
    cout << "--- Nhap Da Thuc P(x) ---" << endl;
    P.nhap();
    cout << "--- Nhap Da Thuc Q(x) ---" << endl;
    Q.nhap();

    cout << "\nP(x) = "; P.xuat();
    cout << "Q(x) = "; Q.xuat();

    DaThuc Tong = P.cong(Q);
    cout << "P(x) + Q(x) = "; Tong.xuat();

    DaThuc Hieu = P.tru(Q);
    cout << "P(x) - Q(x) = "; Hieu.xuat();

    float x = 2.0;
    cout << "Gia tri P(" << x << ") = " << P.tinhGiaTri(x) << endl;

    return 0;
}