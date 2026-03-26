#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Char type
    cout << left << setw(25) << "Char type" << "Size in bytes" << endl;
    cout << "-----------------------------------------" << endl;
    cout << setw(25) << "char" << sizeof(char) << endl;
    cout << setw(25) << "char16_t" << sizeof(char16_t) << endl;
    cout << setw(25) << "char32_t" << sizeof(char32_t) << endl;
    cout << setw(25) << "wchar_t" << sizeof(wchar_t) << endl;
    cout << endl;

    // Integer type
    cout << left << setw(25) << "Integer type" << "Size in bytes" << endl;
    cout << "-----------------------------------------" << endl;
    cout << setw(25) << "short int" << sizeof(short int) << endl;
    cout << setw(25) << "int" << sizeof(int) << endl;
    cout << setw(25) << "long int" << sizeof(long int) << endl;
    cout << setw(25) << "long long int" << sizeof(long long int) << endl;
    cout << endl;

    // Unsigned Integer type
    cout << left << setw(25) << "Unsigned integer type" << "Size in bytes" << endl;
    cout << "-----------------------------------------" << endl;
    cout << setw(25) << "unsigned short int" << sizeof(short int) << endl;
    cout << setw(25) << "unsigned int" << sizeof(int) << endl;
    cout << setw(25) << "unsigned long int" << sizeof(long int) << endl;
    cout << setw(25) << "unsigned long long int" << sizeof(long long int) << endl;
    cout << endl;

    // Float type
    cout << left << setw(25) << "Float type" << "Size in bytes" << endl;
    cout << "-----------------------------------------" << endl;
    cout << setw(25) << "float" << sizeof(float) << endl;
    cout << setw(25) << "double" << sizeof(double) << endl;
    cout << setw(25) << "long double" << sizeof(long double) << endl;
    cout <<  endl;

    // Boolean type
    cout << left << setw(25) << "Boolean type" << "Size in bytes" << endl;
    cout << "-----------------------------------------" << endl;
    cout << setw(25) << "boolean" << sizeof(bool) << endl;
    cout << endl;

    // String type
    cout << left << setw(25) << "String type" << "Size in bytes" << endl;
    cout << "-----------------------------------------" << endl;
    cout << setw(25) << "string" << sizeof(string) << endl;

    return 0;
}