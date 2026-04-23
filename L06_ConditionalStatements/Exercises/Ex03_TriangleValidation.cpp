#include <iostream>
using namespace std;

bool IsValidTriangle(float a, float b, float c);

int main() {
    float a, b, c;
    cout<<"Enter the length of 3 sides: "<<endl;
    cin>>a>>b>>c;
    if (IsValidTriangle(a, b, c)) {
        cout<<"The triangle is valid"<<endl;
    } else {
        cout<<"The triangle is not valid"<<endl;
    }
}

bool IsValidTriangle(float a, float b, float c) {
    if (a<0 || b<0 || c<0) {
        cout<<"Side values must be positive"<<endl;
        return false;
    }
    if ((a + b > c) && (b + c > a) && (a + c > b)) return true;
    return false;
}

