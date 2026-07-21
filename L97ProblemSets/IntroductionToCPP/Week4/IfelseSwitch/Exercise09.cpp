#include <iostream>
using namespace std;

bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

bool valiate(int year, int month)
{
    if (month < 1 || month > 12 || year <= 1975) return false;
    return true;
}

int main() {

    int year;
    int month;
    cout << "Enter a year: ";
    cin >> year;
    cout << "Enter a month: ";
    cin >> month;
    if (valiate(year, month))
    {
        int days;
        switch (month)
        {
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        case 2:
            days = isLeapYear(year) ? 29 : 28;
            break;
        default:
            days = 31;
        }
        cout << "The input month has " << days << " days.";
    } else
    {
        cout << "Invalid month or year!";
    }
    return 0;
}