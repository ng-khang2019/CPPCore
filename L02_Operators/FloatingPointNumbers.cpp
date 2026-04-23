#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 3;

    /* The result of a division of two integers in C++ is always an integer. Unless using
     * some "tricks" to specifically show the complete floating point number.
     */
    cout<<a/b<<endl;

    /* To display fractional parts of decimal numbers (numbers after the decimal point)
     * when calculate with floating point numbers, we apply one of these tricks below
     */

    cout<<1.0*a/b<<endl; // Mutiply one of the operands by 1.0
    cout<<(double) a/b<<endl; // Explicitly casting one of the operands
    cout<<10.0/3<<endl;
    cout<<10./3<<endl; // Using special dot character "." right after one of the operands

    /* Notes: Cannot use "." on non-class type variables. C++ understands that we are trying to
     * call a function on those variables. So using cout<<a./b<<endl; will cause an error
     */

    // Format floating point numbers using fixed
    // Without "fixed", the number set in setprecision() is the total digits of the floating point number
    cout<<setprecision(2)<<1.0*a/b<<endl;

    // With "fixed", the number set in setprecision() is the total digits of the fractional part
    // Also, using "fixed" will apply the format for all cout afther the first one with "fixed"
    cout<<fixed<<setprecision(3)<<1.0*7/3<<endl;
    cout<<10./7<<endl;
    cout<<13./3<<endl;

    // Format using "printf"
    double x = 17./3;
    printf("%.1f\n", x);
    printf("%.3f\n", x);
    printf("%.5f\n", x);
    printf("%8.5f\n", 3.14); // Format with specified width (8 characters including ".")

}
