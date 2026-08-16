#include <iostream>

using namespace std;

class PhanSo {
private:
    int tuso;
    int mauso;
public:
    PhanSo(int t = 0, int m = 1) : tuso(t), mauso(m != 0 ? m : 1) {}
    PhanSo(const PhanSo &p) : tuso(p.tuso), mauso(p.mauso) {}

    int LayTu() const { return tuso; }
    int LayMau() const { return mauso; }
    void GanTu(int t) { tuso = t; }
    void GanMau(int m) { if (m != 0) mauso = m; }

    void Nhap() {
        cout << "Tu so: "; cin >> tuso;
        do {
            cout << "Mau so: "; cin >> mauso;
        } while (mauso == 0);
    }

    void Xuat() const { cout << tuso << "/" << mauso; }

    // a. Cài đặt toán tử >
    bool operator>(const PhanSo& p) const {
        return (float)tuso / mauso > (float)p.tuso / p.mauso;
    }

    // Toán tử cộng để dùng cho mảng tính tổng
    PhanSo operator+(const PhanSo& p) const {
        return PhanSo(tuso * p.mauso + p.tuso * mauso, mauso * p.mauso);
    }
};

// b. Lớp DSPhanSo
class DSPhanSo {
private:
    PhanSo* arr;
    int n;
public:
    DSPhanSo(int size = 0) {
        n = size;
        arr = (n > 0) ? new PhanSo[n] : nullptr;
    }

    ~DSPhanSo() { delete[] arr; }

    void Nhap() {
        cout << "Nhap so luong phan so: "; cin >> n;
        arr = new PhanSo[n];
        for (int i = 0; i < n; i++) {
            cout << "- Phan so thu " << i + 1 << ":" << endl;
            arr[i].Nhap();
        }
    }

    void Xuat() {
        for (int i = 0; i < n; i++) {
            arr[i].Xuat(); cout << "  ";
        }
        cout << endl;
    }

    PhanSo timMax() {
        if (n == 0) return PhanSo();
        PhanSo pMax = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] > pMax) pMax = arr[i];
        }
        return pMax;
    }

    PhanSo tinhTong() {
        PhanSo tong(0, 1);
        for (int i = 0; i < n; i++) {
            tong = tong + arr[i];
        }
        return tong;
    }
};

int main() {
    // c. Viết chương trình
    DSPhanSo ds;
    ds.Nhap();

    cout << "\nMang phan so vua nhap: ";
    ds.Xuat();

    cout << "Phan so lon nhat: ";
    ds.timMax().Xuat();
    cout << endl;

    cout << "Tong cac phan so trong mang: ";
    ds.tinhTong().Xuat();
    cout << endl;

    return 0;
}
