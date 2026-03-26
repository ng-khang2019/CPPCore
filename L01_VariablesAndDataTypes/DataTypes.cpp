#include <iostream>
#include <string>
using namespace std;

int main ()
{
    /* char type one byte - 8 bits
     * char16_t two bytes - 16 bits
     * char32_t 4 bytes - 32 bits
     * wchar_t supports largest char type size possible
     */
    char word = 'A';

    /* (signed) short int type -32,768 to 37,767
     * unsigned short int 0 to 65,535
     */
    short int shortVal = 256123;
    unsigned short int ushortVal = 656123;

    /* (signed) int type -2.1 billion to 2.1 billion
     * unsigned int 0 to 4.29 billion
     */
    int intVal = -2026350156;
    unsigned int uintVal = 4151325147;

    /* (signed) long int same as signed long long int on Linux base64
     * unsigned long int same as unsigned long long int on Linux base64
     * (signed) long long int -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
     * unsigned long long int up to 18,446,744,073,709,551,615 or 2 to the power of 64 minus 1
     */
    long int longVal = -66646546613L;
    unsigned long int  ulongVal = 65534L;
    long long int longlongVal = -2665165521864847L;
    unsigned long long int ulonglongVal = 65534L;

    // float type up to 7 digits precision
    float floatVal = 3.14f;

    /* double type up to 15-17 digits precision
     * long double up to 18-36 digits precision
     */
    double doubleVal = 163155.1325f;
    long double ldoubleVal = 3.14159265358979323846f;

    // boolean type
    bool myBoolean = true;
    bool myBoolean2 = false;

    // string type
    string words = "Apple";

    // Print out
    std::cout<<"Char type: "<<word<<endl;
    std::cout<<"Short integer: "<<shortVal<<endl;
    std::cout<<"Integer type: "<<intVal<<endl;
    std::cout<<"Long integer type: "<<longVal<<endl;
    std::cout<<"Long long integer type: "<<longlongVal<<endl;
    std::cout<<"Float type: "<<floatVal<<endl;
    std::cout<<"Double type: "<<doubleVal<<endl;
    std::cout<<"Long double type: "<<ldoubleVal<<endl;
    std::cout<<"Boolean type true value: "<<myBoolean<<" - means true "<<endl;
    std::cout<<"Boolean type false value: "<<myBoolean2<<" - means false"<<endl;
    std::cout<<"Compound type or string type: "<<words<<endl;
    return 0;
}