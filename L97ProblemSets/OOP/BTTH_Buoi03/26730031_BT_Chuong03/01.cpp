#include <iostream>
#include <string>

using namespace std;

class HocSinh {
private:
    string hoTen;
    float diemToan;
    float diemVan;

public:
    void nhap() {
        cout << "Nhap ho ten: ";
        getline(cin, hoTen);
        cout << "Nhap diem Toan: ";
        cin >> diemToan;
        cout << "Nhap diem Van: ";
        cin >> diemVan;
        cin.ignore(); // Xoa bo nho dem
    }

    float tinhDTB() {
        return (diemToan + diemVan) / 2.0;
    }

    string xepLoai() {
        float dtb = tinhDTB();
        if (dtb >= 8.0) return "Gioi";
        if (dtb >= 6.5) return "Kha";
        if (dtb >= 5.0) return "Trung binh";
        return "Yeu";
    }

    void xuat() {
        cout << "--- Thong tin hoc sinh ---" << endl;
        cout << "Ho ten: " << hoTen << endl;
        cout << "Diem Toan: " << diemToan << " | Diem Van: " << diemVan << endl;
        cout << "Diem trung binh: " << tinhDTB() << endl;
        cout << "Xep loai: " << xepLoai() << endl;
    }
};

int main() {
    HocSinh hs;
    hs.nhap();
    hs.xuat();
    return 0;
}