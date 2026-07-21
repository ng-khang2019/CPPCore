#include <iostream>
#include <cmath>

using namespace std;

struct Point
{
    double x, y;
};

void inputPoint(Point &p)
{
    cout<< "x value: ";
    cin >> p.x;
    cout<< "y value: ";
    cin >> p.y;
}

void outputPoint(Point p)
{
    cout<< "x: "<<p.x<<", y: "<<p.y<<endl;
}

double distance(Point a, Point b)
{
    return std::sqrt(std::pow(a.x-b.x,2)+std::pow(a.y-b.y,2));
}

Point findClosestPoint(Point *points, int n)
{
    Point root = {0.0};
    Point closest = {0.0};
    double min = distance(root, points[0]);
    for (int i = 0; i < n; i++)
    {
        if (distance(root, points[i]) < min)
        {
            double min = distance(root, points[i]);
            closest.x = points[i].x;
            closest.y = points[i].y;
        }
    }
    return closest;
}

int main()
{
    Point p1 = {1,3};
    Point p2 = {3,4};
    Point p3 = {-2,1};
    Point p4 = {2,-2};

    cout<<"Distance between p1 and p3: "<<distance(p1,p3)<<endl;
    cout<<"Distance between p2 and p4: "<<distance(p2,p4)<<endl;

    Point arrays[] = {p1,p2,p3,p4};
    cout<<"Closest to root point: ";
    outputPoint(findClosestPoint(arrays, 4));

    return 0;
}