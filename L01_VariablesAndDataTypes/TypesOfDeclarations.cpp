#include <iostream>
using namespace std;

int main()
{
    // Declare first then initialize
    int a; a = 6;

    // Declare and Initialize
    // Right away declaration
    int b = 10;

    // With braces, just like functions calling
    int c(55);

    // With curly braces
    // Modern format, safest style, prevents data loss when performing conversion
    int d = {25};

    // Assign type automatically
    auto e = 72;

    // Declare a variable with an already-known variable
    int f = 7;
    decltype(f) g;
}