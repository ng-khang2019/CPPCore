#include <iostream>
using namespace std;

int main()
{
    float toan, ly, hoa;
    cout<<"Nhap diem ba mon Toan, Ly va Hoa: "<<endl;
    scanf("%f %f %f", &toan, &ly, &hoa);
    printf("Diem trung binh ba mon la: %.2f",(toan+ly+hoa) / 3);
    return 0;
}