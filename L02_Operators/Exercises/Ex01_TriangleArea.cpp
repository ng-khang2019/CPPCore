#include <iostream>
#include <cmath>

using namespace std;

bool isValidTriangle(float a, float b, float c) {
    if (a<0 || b<0 || c<0) {
        cout<<"Side values must be positive"<<endl;
        return false;
    }
    if ((a + b > c) && (b + c > a) && (a + c > b)) return true;
    return false;
}

float triangleArea(float a, float b, float c) {
    float halfPerimeter = (a + b + c) / 2;
    return sqrt((halfPerimeter-a)*(halfPerimeter-b)*(halfPerimeter-c));
}

int main() {
    float a, b, c;
    cout<<"Enter sides of the triangle: ";
    cin>>a>>b>>c;
    if (isValidTriangle(a,b,c)) {
        cout<<"The triangle is valid"<<endl;
    }
    cout<<"Triangle area is "<<triangleArea(a,b,c) <<endl;
    return 0;
}