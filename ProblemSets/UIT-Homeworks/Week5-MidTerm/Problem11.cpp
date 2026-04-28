#include <iostream>
using namespace std;

int main()
{
    cout<<"Nhap vao so do ba canh cua mot tam giac (cach nhau bang khoang trang): "<<endl;
    int a, b, c;
    cin>>a>>b>>c;
    if (a + b > c && b + c > a && a + c > b) {
        cout<<"Day la mot tam giac"<<endl;
    } else
    {
        cout<<"Ba canh tren khong the tao thanh mot tam giac"<<endl;
    }
    return 0;
}