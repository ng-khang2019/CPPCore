#include <iostream>
#include <math.h>
using namespace std;

const double EPS = 1e-9;

bool equalDouble(double x, double y)
{
    return abs(x - y) < EPS;
}

bool validTriangle(double a, double b, double c)
{
    if (a + b > c && b + c > a && a + c > b) return true;
    return false;
}

bool rightTriangle(double a, double b, double c) {
    return equalDouble(a * a + b * b, c * c)
        || equalDouble(b * b + c * c, a * a)
        || equalDouble(c * c + a * a, b * b);
}


bool isoscelesTriangle(double a, double b, double c) {
    return equalDouble(a, b) || equalDouble(b, c) || equalDouble(a, c);
}

void triangleType(double a, double b, double c)
{
    if (validTriangle(a, b, c))
    {
        if (rightTriangle(a,b,c) && isoscelesTriangle(a,b,c)) cout << "Isosceles right triangle" << endl;
        else if (equalDouble(a,b) && equalDouble(b,c)) cout << "Equilateral triangle" << endl;
        else if (isoscelesTriangle(a,b,c)) cout << "Isosceles triangle" << endl;
        else if (rightTriangle(a,b,c)) cout << "Right triangle" << endl;
        else cout << "Scalene triangle" << endl;
    }
    else cout << "Not a valid triangle" << endl;
}

int main()
{
    triangleType(3,4,5);
    return 0;
}