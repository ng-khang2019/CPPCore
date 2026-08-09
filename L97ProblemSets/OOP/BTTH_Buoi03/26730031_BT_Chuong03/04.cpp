#include <iostream>
#include <string>

using namespace std;

class cHocSinh {
private:
    string maHS;
    string hoTen;
    string gioiTinh;
    int namSinh;
    float dtb;

public:
    void nhap(int stt) {
        cout << "--- Nhap thong tin hoc sinh thu " << stt << " ---" << endl;
        cout << "Ma HS: ";
        cin >> maHS;
        cin.ignore();
        cout << "Ho ten: ";
        getline(cin, hoTen);
        cout << "Gioi tinh: ";
        getline(cin, gioiTinh);
        cout << "Nam sinh: ";
        cin >> namSinh;
        cout << "Diem trung binh: ";
        cin >> dtb;
    }

    void xuat() {
        cout << "[" << maHS << "] " << hoTen << " - " << gioiTinh
             << " - Nam sinh: " << namSinh << " - DTB: " << dtb << endl;
    }

    float getDTB() { return dtb; }
    int getNamSinh() { return namSinh; }
    string getHoTen() { return hoTen; }
};

int main() {
    cHocSinh hs1, hs2;
    hs1.nhap(1);
    hs2.nhap(2);

    cout << "\n--- KET QUA SO SANH ---\n";

    // So sanh DTB
    if (hs1.getDTB() > hs2.getDTB()) {
        cout << "- Hoc sinh co DTB cao hon la: " << hs1.getHoTen() << endl;
    } else if (hs1.getDTB() < hs2.getDTB()) {
        cout << "- Hoc sinh co DTB cao hon la: " << hs2.getHoTen() << endl;
    } else {
        cout << "- Hai hoc sinh co DTB bang nhau." << endl;
    }

    // So sanh tuoi (tuoi nho hon nghia la nam sinh lon hon)
    if (hs1.getNamSinh() > hs2.getNamSinh()) {
        cout << "- Hoc sinh nho tuoi hon la: " << hs1.getHoTen() << endl;
    } else if (hs1.getNamSinh() < hs2.getNamSinh()) {
        cout << "- Hoc sinh nho tuoi hon la: " << hs2.getHoTen() << endl;
    } else {
        cout << "- Hai hoc sinh bang tuoi nhau." << endl;
    }

    return 0;
}