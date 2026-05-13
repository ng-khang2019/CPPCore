#include <iostream>
using namespace std;

int main()
{
    char kiTu;
    cout<<"Nhap vao mot ki tu: "<<endl;
    cin>>kiTu;
    if (kiTu >= 'a' && kiTu <= 'z') {
        cout <<kiTu<<" la chu cai thuong"<<endl;
    } else if (kiTu >= 'A' && kiTu <= 'Z') {
        cout <<kiTu<<" la chu cai hoa"<<endl;
    } else if (kiTu >= '0' && kiTu <= '9') {
        cout <<kiTu<<" la chu so"<<endl;
    } else {
        cout <<kiTu<<" la ki tu dac biet"<<endl;
    }
    return 0;
}