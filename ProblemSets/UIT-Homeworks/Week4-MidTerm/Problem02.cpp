#include <iostream>
using namespace std;
const double PI = 3.1416;

int main()
{
    float r;
    cout<<"Nhap ban kinh r: ";
    cin>> r;

    float chuVi = r*2*PI;
    float dienTich = r*r*PI;
    printf("Chu vi hinh tron la: %.2f\n", chuVi);
    printf("Dien tich hinh tron la: %.2f\n", dienTich);
}