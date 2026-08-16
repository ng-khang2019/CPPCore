#include <iostream>
#include <cmath>

using namespace std;

class DaThuc {
private:
    int bac;
    float* heSo;

public:
    // Khởi tạo đa thức bậc 0
    DaThuc() : bac(0) {
        heSo = new float[1];
        heSo[0] = 0;
    }

    // Khởi tạo đa thức bậc n bất kỳ
    DaThuc(int n) : bac(n) {
        heSo = new float[bac + 1];
        for (int i = 0; i <= bac; i++) heSo[i] = 0;
    }

    // Copy Constructor (Rất quan trọng khi operator trả về đối tượng mới)
    DaThuc(const DaThuc& dt) : bac(dt.bac) {
        heSo = new float[bac + 1];
        for (int i = 0; i <= bac; i++) heSo[i] = dt.heSo[i];
    }

    // Destructor
    ~DaThuc() { delete[] heSo; }

    // Operator gán (Assignment operator)
    DaThuc& operator=(const DaThuc& dt) {
        if (this != &dt) {
            delete[] heSo;
            bac = dt.bac;
            heSo = new float[bac + 1];
            for (int i = 0; i <= bac; i++) heSo[i] = dt.heSo[i];
        }
        return *this;
    }

    // Nạp chồng toán tử nhập >>
    friend istream& operator>>(istream& is, DaThuc& dt) {
        cout << "Nhap bac cua da thuc: "; is >> dt.bac;
        delete[] dt.heSo;
        dt.heSo = new float[dt.bac + 1];
        for (int i = dt.bac; i >= 0; i--) {
            cout << "He so cua x^" << i << ": ";
            is >> dt.heSo[i];
        }
        return is;
    }

    // Nạp chồng toán tử xuất <<
    friend ostream& operator<<(ostream& os, const DaThuc& dt) {
        bool first = true;
        for (int i = dt.bac; i >= 0; i--) {
            if (dt.heSo[i] != 0) {
                if (!first && dt.heSo[i] > 0) os << " + ";
                else if (dt.heSo[i] < 0) os << " - ";
                
                if (abs(dt.heSo[i]) != 1 || i == 0) os << abs(dt.heSo[i]);
                if (i > 0) os << "x";
                if (i > 1) os << "^" << i;
                first = false;
            }
        }
        if (first) os << "0";
        return os;
    }

    // Nạp chồng toán tử +
    DaThuc operator+(const DaThuc& dt) {
        int maxBac = max(bac, dt.bac);
        DaThuc kq(maxBac);
        for (int i = 0; i <= maxBac; i++) {
            float hs1 = (i <= bac) ? heSo[i] : 0;
            float hs2 = (i <= dt.bac) ? dt.heSo[i] : 0;
            kq.heSo[i] = hs1 + hs2;
        }
        return kq;
    }

    // Nạp chồng toán tử -
    DaThuc operator-(const DaThuc& dt) {
        int maxBac = max(bac, dt.bac);
        DaThuc kq(maxBac);
        for (int i = 0; i <= maxBac; i++) {
            float hs1 = (i <= bac) ? heSo[i] : 0;
            float hs2 = (i <= dt.bac) ? dt.heSo[i] : 0;
            kq.heSo[i] = hs1 - hs2;
        }
        return kq;
    }

    // Tính giá trị đa thức
    float tinhGiaTri(float x) {
        float result = 0;
        for (int i = 0; i <= bac; i++) {
            result += heSo[i] * pow(x, i);
        }
        return result;
    }
};

int main() {
    DaThuc P, Q;
    cout << "--- Nhap P(x) ---" << endl;
    cin >> P;
    cout << "--- Nhap Q(x) ---" << endl;
    cin >> Q;

    cout << "\nP(x) = " << P << endl;
    cout << "Q(x) = " << Q << endl;

    DaThuc Tong = P + Q;
    cout << "P(x) + Q(x) = " << Tong << endl;

    DaThuc Hieu = P - Q;
    cout << "P(x) - Q(x) = " << Hieu << endl;

    float x = 2;
    cout << "Gia tri P(" << x << ") = " << P.tinhGiaTri(x) << endl;

    return 0;
}