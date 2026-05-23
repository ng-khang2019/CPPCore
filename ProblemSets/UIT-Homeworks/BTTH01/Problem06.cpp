#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{

    int a,b,c;
    cout<<"Nhap vao 3 he so a, b, c: "<<endl;
    cin>>a>>b>>c;
    printf("Phuong trinh bac hai can giai %dx^2 + %dx + %d = 0\n",a,b,c);
    if (a == 0 ) {
        if (b != 0) {
            double x = 1.0 * -c / b;
            cout<<"Nghiem duy nhat cua phuong trinh la: "<<fixed<<setprecision(2)<<x<<endl;
        } else {
            if (c == 0) {
                cout<<"Phuong trinh co vo so nghiem!"<<endl;
            } else {
                cout<<"Phuong trinh vo nghiem!"<<endl;
            }
        }
    } else {
        double delta = b * b - 4 * a * c;
        cout<<"He so delta la: "<<delta<<endl;
        if (delta == 0) {
            cout<<"Delta bang khong, phuong trinh co mot nghiem la: "<< (double) -b/(2*a)<<endl;
        } else if (delta > 0) {
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            cout<<"Delta lon hon khong, phuong trinh co hai nghiem la x1 = "<<x1<<", x2 = "<<x2<<endl;
        } else {
            cout<<"Phuong trinh vo nghiem!"<<endl;
        }
    }
    return 0;
}