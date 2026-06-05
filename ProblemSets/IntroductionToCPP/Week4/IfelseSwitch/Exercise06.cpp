#include <iostream>
#include <cmath>
using namespace std;

void linearEquation(int a, int b)
{
    if (a == 0) cout << "Linear equation has no solution";
    else cout << "x = " << -b*1.0/a;
}

void quadraticEquation(int a, int b, int c)
{
    if (a == 0) linearEquation(b, c);
    else
    {
        double discriminant = b*b - 4*a*c;
        if (discriminant < 0) cout << "Quadratic equation has no real solution";
        else if (discriminant == 0) cout << "x = " << -b*1.0/(2*a);
        else cout << "x1 = " << (-b + sqrt(discriminant))*1.0/(2*a) << ", x2 = " << (-b - sqrt(discriminant))*1.0/(2*a);
    }
}

int main()
{
    quadraticEquation(2, 3, 1);
    return 0;
}