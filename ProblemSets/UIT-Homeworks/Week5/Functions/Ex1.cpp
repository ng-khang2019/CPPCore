#include <iostream>
using namespace std;

class Exercises1
{
public:
    // 1.a
    char toLowerCase(char c) {
        return c + 32;
    }

    // 1.b
    void linearEquation(int a, int b)
    {
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
    }

    // 1.c
    void draquaticEquation(int a, int b, int c)
    {
        printf("Phuong trinh bac hai can giai %dx^2 + %dx + %d = 0\n",a,b,c);
        if ( a == 0)
        {
            linearEquation(b,c);
        } else
        {
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
    }

    // 1.d
    int minOfTwo(int a, int b)
    {
        return (a < b) ? a : b;
    }

    int minOfFour(int a, int b, int c, int d)
    {
        return minOfTwo(minOfTwo(a,b),minOfTwo(c,d));
    }

    // 1.e
    void swap(int& a, int& b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    // 1.f
    void sortFour(int a, int b, int c, int d)
    {
        if (a<b) swap(a,b);
        if (c<d) swap(c,d);
        if (a<c) swap(a,c);
        if (b<d) swap(b,d);
        cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    }

};

int main()
{

}
