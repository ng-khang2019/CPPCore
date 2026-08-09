#include <iostream>

using namespace std;

class SoPhuc {
private:
    float thuc;
    float ao;

public:
    // Constructor co tham so va mac dinh
    SoPhuc(float t = 0, float a = 0) {
        thuc = t;
        ao = a;
    }

    void nhap() {
        cout << "Nhap phan thuc: ";
        cin >> thuc;
        cout << "Nhap phan ao: ";
        cin >> ao;
    }

    void xuat() {
        if (ao >= 0)
            cout << thuc << " + " << ao << "i";
        else
            cout << thuc << " - " << -ao << "i";
    }

    void thayDoi(float t, float a) {
        thuc = t;
        ao = a;
    }

    float layPhanThuc() { return thuc; }
    float layPhanAo() { return ao; }

    SoPhuc cong(SoPhuc b) {
        return SoPhuc(thuc + b.thuc, ao + b.ao);
    }

    SoPhuc tru(SoPhuc b) {
        return SoPhuc(thuc - b.thuc, ao - b.ao);
    }

    SoPhuc nhan(SoPhuc b) {
        float kqThuc = thuc * b.thuc - ao * b.ao;
        float kqAo = thuc * b.ao + ao * b.thuc;
        return SoPhuc(kqThuc, kqAo);
    }

    SoPhuc chia(SoPhuc b) {
        float mauSo = b.thuc * b.thuc + b.ao * b.ao;
        float kqThuc = (thuc * b.thuc + ao * b.ao) / mauSo;
        float kqAo = (ao * b.thuc - thuc * b.ao) / mauSo;
        return SoPhuc(kqThuc, kqAo);
    }
};

int main() {
    SoPhuc a, b;

    cout << "Nhap so phuc A:" << endl;
    a.nhap();
    cout << "Nhap so phuc B:" << endl;
    b.nhap();

    cout << "\nA = "; a.xuat();
    cout << "\nB = "; b.xuat();

    SoPhuc tong = a.cong(b);
    SoPhuc hieu = a.tru(b);
    SoPhuc tich = a.nhan(b);
    SoPhuc thuong = a.chia(b);

    cout << "\n\n--- KET QUA ---";
    cout << "\nA + B = "; tong.xuat();
    cout << "\nA - B = "; hieu.xuat();
    cout << "\nA * B = "; tich.xuat();
    cout << "\nA / B = "; thuong.xuat();
    cout << endl;

    return 0;
}