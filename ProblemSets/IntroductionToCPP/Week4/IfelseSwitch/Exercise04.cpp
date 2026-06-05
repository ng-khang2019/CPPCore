#include <iostream>
using namespace std;

void standing(double grade)
{
    if (grade < 0 || grade > 10) cout << "Invalid grade";
    switch ((unsigned int) grade)
    {
        case 10:
        case 9:
            cout << "Excellent";
            break;
        case 8:
            cout << "Very Good";
            break;
        case 7:
            cout << "Good";
            break;
        case 6:
            cout << "Fair";
            break;
        case 5:
            cout << "Pass";
            break;
        default:
            cout << "Poor";
            break;
    }
}

int main()
{
    standing(9.5);
    return 0;
}