#include <iostream>
using namespace std;

int main()
{
    int input;
    do {
        cout<<"Nhap vao mot so nguyen co 3 chu so: "<<endl;
        cin>>input;
        if (input < 100 || input > 999)
        {
            cout<<"So nguyen nhap vao khong hop le, vui long nhap lai!"<<endl;
        }
    } while (input < 100 || input > 999);
    int donVi = input % 10; input /= 10;
    int hangChuc = input % 10; input /= 10;
    int hangTram = input % 10;
    cout<<"Chu so hang tram la: "<<hangTram<<endl;
    cout<<"Chu so hang chuc la: "<<hangChuc<<endl;
    cout<<"Chu so hang don vi la: "<<donVi<<endl;
    return 0;
}