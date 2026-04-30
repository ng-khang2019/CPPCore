#include <iostream>
using namespace std;

int main ()
{
    int n;
    cout<<"Nhap 1 so tu 1 den 7: ";
    cin>>n;

    switch (n) {
        case 1:
            cout << "Chu nhat" << endl;
            break;
        case 2:
            cout << "Thu hai" << endl;
            break;
        case 3:
            cout << "Thu ba" << endl;
            break;
        case 4:
            cout << "Thu tu" << endl;
            break;
        case 5:
            cout << "Thu nam" << endl;
            break;
        case 6:
            cout << "Thu sau" << endl;
            break;
        case 7:
            cout << "Thu bay" << endl;
            break;
        default: cout << "So khong hop le!" << endl;
    }
    return 0;
}