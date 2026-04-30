#include <iostream>
using namespace std;

int main ()
{
    double a, b;
    char op;
    cout<< "Nhap phep tinh (a +,-,*,/ b): ";
    cin>>a>>op>>b;

    switch (op) {
        case '+':
            cout<<"Ket qua: " <<a + b<<endl;
            break;
        case '-':
            cout<<"Ket qua: " <<a - b<<endl;
            break;
        case '*':
            cout<<"Ket qua: " <<a * b<<endl;
            break;
        case '/':
            if (b != 0) cout<<"Ket qua: " <<a / b<<endl;
            else cout<<"Loi chia cho 0!"<<endl;
            break;
        default:
            cout << "Phep toan khong hop le!"<<endl;
    }
    return 0;
}