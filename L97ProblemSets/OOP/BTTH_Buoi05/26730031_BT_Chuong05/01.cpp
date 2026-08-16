#include <iostream>

using namespace std;

class SoPhuc {
private:
    float thuc;
    float ao;

public:
    // Quan điểm số thực như một số phức đặc biệt (mặc định ao = 0)
    SoPhuc(float t = 0, float a = 0) : thuc(t), ao(a) {}

    // Nạp chồng toán tử nhập >>
    friend istream& operator>>(istream& is, SoPhuc& sp) {
        cout << "Nhap phan thuc: ";
        is >> sp.thuc;
        cout << "Nhap phan ao: ";
        is >> sp.ao;
        return is;
    }

    // Nạp chồng toán tử xuất <<
    friend ostream& operator<<(ostream& os, const SoPhuc& sp) {
        if (sp.thuc == 0 && sp.ao == 0) {
            os << 0;
        } else if (sp.thuc == 0) {
            os << sp.ao << "i";
        } else if (sp.ao == 0) {
            os << sp.thuc;
        } else {
            os << sp.thuc << (sp.ao > 0 ? " + " : " - ") << abs(sp.ao) << "i";
        }
        return os;
    }

    // Nạp chồng toán tử +
    SoPhuc operator+(const SoPhuc& b) {
        return SoPhuc(thuc + b.thuc, ao + b.ao);
    }

    // Nạp chồng toán tử -
    SoPhuc operator-(const SoPhuc& b) {
        return SoPhuc(thuc - b.thuc, ao - b.ao);
    }

    // Nạp chồng toán tử *
    SoPhuc operator*(const SoPhuc& b) {
        float kqThuc = thuc * b.thuc - ao * b.ao;
        float kqAo = thuc * b.ao + ao * b.thuc;
        return SoPhuc(kqThuc, kqAo);
    }

    // Nạp chồng toán tử /
    SoPhuc operator/(const SoPhuc& b) {
        float mau = b.thuc * b.thuc + b.ao * b.ao;
        if (mau == 0) {
            cout << "Loi chia cho 0!" << endl;
            return SoPhuc(0, 0);
        }
        float kqThuc = (thuc * b.thuc + ao * b.ao) / mau;
        float kqAo = (ao * b.thuc - thuc * b.ao) / mau;
        return SoPhuc(kqThuc, kqAo);
    }

    // Nạp chồng toán tử so sánh ==
    bool operator==(const SoPhuc& b) {
        return (thuc == b.thuc && ao == b.ao);
    }
};

int main() {
    SoPhuc a, b;
    cout << "--- Nhap so phuc A ---" << endl;
    cin >> a;
    cout << "--- Nhap so phuc B ---" << endl;
    cin >> b;

    cout << "\nA = " << a << endl;
    cout << "B = " << b << endl;

    cout << "A + B = " << a + b << endl;
    cout << "A - B = " << a - b << endl;
    cout << "A * B = " << a * b << endl;
    cout << "A / B = " << a / b << endl;

    if (a == b) cout << "A va B bang nhau." << endl;
    else cout << "A va B khac nhau." << endl;

    // Test số thực là số phức đặc biệt
    SoPhuc c(5); // 5 + 0i
    cout << "\nSo phuc c duoc khoi tao tu so thuc 5: " << c << endl;

    return 0;
}