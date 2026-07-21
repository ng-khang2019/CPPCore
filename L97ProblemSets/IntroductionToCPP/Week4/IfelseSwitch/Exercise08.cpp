#include <iostream>
using namespace std;
const double FIRST_KM_FEE = 15000;
const double NEXT_KM_FEE = 13500;
const double SIXTH_KM_FEE = 11000;

double totalFare(double distance)
{
    if (distance < 0) return -1;
    if (distance <= 1)
    {
        return distance * FIRST_KM_FEE;
    } else if (distance <= 5)
    {
       return  FIRST_KM_FEE +  NEXT_KM_FEE * (distance - 1);
    } else if (distance <= 120)
    {
        return FIRST_KM_FEE +  NEXT_KM_FEE * 4 + (distance - 5) * SIXTH_KM_FEE;
    } else
    {
        return 0.9 * (FIRST_KM_FEE +  NEXT_KM_FEE * 4 + (distance - 5) * SIXTH_KM_FEE);
    }
}

int main()
{
    double distance = 121;
    cout << "Total fare: " << totalFare(distance) << endl;
    return 0;
}