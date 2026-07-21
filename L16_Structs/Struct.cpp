#include <iostream>
#include <cmath>
using namespace std;

struct Point
{
     double x, y;
};

struct Rectangle
{
    Point topLeft;
    Point topRight;
    Point bottomLeft;
    Point bottomRight;
};

double perimeter(Rectangle r);
double area(Rectangle r);
double distance(Point a, Point b);

int main() {
    Point a = Point();
    a.x=0;
    a.y=4;

    Point b = Point();
    b.x=6;
    b.y=4;

    Point c = Point();
    c.y=0;
    c.x=6;

    Point d = Point();
    d.x=0;
    d.y=0;

    Rectangle r = Rectangle();
    r.topLeft = a;
    r.topRight = b;
    r.bottomRight = c;
    r.bottomLeft = d;

    cout<< "Width of the rectangle is: " << distance(r.topLeft,r.bottomLeft)<< endl;
    cout<< "Length of the rectangle is: " << distance(r.topLeft,r.topRight)<< endl;

    cout<< "Perimeter of the rectangle is: " << perimeter(r) << endl;
    cout<< "Area of the rectangle is: " << area(r) << endl;

    return 0;
};

double distance(Point a, Point b)
{
    return std::sqrt(std::pow(a.x-b.x,2) + std::pow(a.y-b.y,2));
}

double perimeter(Rectangle r)
{
    return 2*(std::abs(r.topLeft.y-r.bottomLeft.y) + std::abs(r.bottomRight.x-r.bottomLeft.x));
}

double area(Rectangle r)
{
    double ab = distance(r.topLeft, r.topRight);
    double bc = distance(r.topRight, r.bottomRight);
    return ab*bc;
}


