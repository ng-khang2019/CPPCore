
#include <iostream>
using namespace std;

int main()
{
    // Printing char using different methods
    char wordA = 'A';
    char wordB = (char) 66; // Using ASCII Decimal code
    char* wordC = "\u0043"; // Using UTF-8 Hexadecimal code
    printf("%c %c %s", wordA, wordB, wordC);

    // Sequence of characters
    char s1[] = "Good morning";
    char* s2 = "Good afternoon";
    string s3 = "Good evening";


    /*  In C++, a char* (character pointer) is primarily needed to handle strings
     *  because the basic char type can only store a single character. Strings are
     *  contiguous sequences of characters in memory, a pointer is used to store
     *  the address of the first character
     */

}