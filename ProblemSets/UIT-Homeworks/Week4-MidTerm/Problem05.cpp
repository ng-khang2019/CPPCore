#include <iostream>
#include <iomanip>.
using namespace std;

int main()
{
    int a, b;
    cout<<"Nhap vao 2 he so a va b cua phuong trinh ax + b = 0: "<<endl;
    cin>>a>>b;
    if (a != 0) {
        double x = 1.0 * -b / a;
        cout<<"Nghiem duy nhat cua phuong trinh la: "<<fixed<<setprecision(2)<<x<<endl;
    } else {
        if (b == 0) {
            cout<<"Phuong trinh co vo so nghiem!"<<endl;
        } else {
            cout<<"Phuong trinh vo nghiem!"<<endl;
        }
    }
    return 0;
}