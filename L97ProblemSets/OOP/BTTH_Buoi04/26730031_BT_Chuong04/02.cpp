#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;


bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}


class cPhanSo {
private:
    int tuSo, mauSo;
public:
    cPhanSo(int tu = 0, int mau = 1) : tuSo(tu), mauSo(mau) {
        if (mau == 0) mauSo = 1;
    }
    void nhap() {
        cout << "Nhap tu so: "; cin >> tuSo;
        do {
            cout << "Nhap mau so (khac 0): "; cin >> mauSo;
        } while (mauSo == 0);
    }
    void xuat() { cout << tuSo << "/" << mauSo; }
    void setNgauNhien() {
        tuSo = rand() % 20;
        do { mauSo = rand() % 20; } while (mauSo == 0);
    }
    float giaTri() { return (float)tuSo / mauSo; }
    int getTuSo() { return tuSo; }
};


class arrPhanSo {
private:
    cPhanSo* arr;
    int n;
public:
    arrPhanSo(int size = 0) {
        n = size;
        if (n > 0) arr = new cPhanSo[n];
        else arr = nullptr;
    }
    ~arrPhanSo() {
        if (arr != nullptr) delete[] arr;
    }

    void nhap() {
        cout << "Nhap so luong phan so: "; cin >> n;
        arr = new cPhanSo[n];
        for (int i = 0; i < n; i++) {
            cout << "- Nhap phan so thu " << i + 1 << ":" << endl;
            arr[i].nhap();
        }
    }

    void xuat() {
        for (int i = 0; i < n; i++) {
            arr[i].xuat();
            cout << "  ";
        }
        cout << endl;
    }

    void taoNgauNhien(int size) {
        n = size;
        arr = new cPhanSo[n];
        srand(time(0));
        for (int i = 0; i < n; i++) {
            arr[i].setNgauNhien();
        }
    }

    void timPhanSoLonNhat() {
        if (n == 0) return;
        int idxMax = 0;
        for (int i = 1; i < n; i++) {
            if (arr[i].giaTri() > arr[idxMax].giaTri()) {
                idxMax = i;
            }
        }
        cout << "Phan so lon nhat la: ";
        arr[idxMax].xuat();
        cout << " (Gia tri: " << arr[idxMax].giaTri() << ")" << endl;
    }

    void demTuNguyenTo() {
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (isPrime(abs(arr[i].getTuSo()))) {
                count++;
            }
        }
        cout << "Co " << count << " phan so co tu la so nguyen to." << endl;
    }

    void sapXepTangDan() {
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i].giaTri() > arr[j].giaTri()) {
                    cPhanSo temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
};

int main() {
    arrPhanSo m;
    m.taoNgauNhien(5);

    cout << "Danh sach cac phan so: ";
    m.xuat();

    m.timPhanSoLonNhat();
    m.demTuNguyenTo();

    m.sapXepTangDan();
    cout << "Danh sach sau khi sap xep tang dan: ";
    m.xuat();

    return 0;
}