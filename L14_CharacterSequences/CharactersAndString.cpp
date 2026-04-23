
#include <iostream>
using namespace std;

int main()
{
    // Printing char using different methods
    char wordA = 'A';
    char wordB = (char) 66; // Using ASCII Decimal code
    char* wordC = "\u0043"; // Using UTF-8 Hexadecimal code
    printf("%c %c %s\n", wordA, wordB, wordC);

    /*  In C++, a char* (character pointer) is primarily needed to handle strings
     *  because the basic char type can only store a single character. Strings are
     *  contiguous sequences of characters in memory, a pointer is used to store
     *  the address of the first character
     */
    char* s0 = "Good afternoon";
    char *firstChar = s0;
    cout<<"String s0: "<<s0<<" has the size of "<<sizeof(s0)<<endl;
    cout<<"First character of s0: "<<*firstChar<<endl;

    // Sequence of characters
    // Declare and allocate size for a char array - maximum characters allowed is 9 plus "\0"
    char s[10];

    // Char array has an additional memory space to allocate '\0' - end of an array
    char s1[] = "Good morning"; // Size of 13
    // Char array with elements listing will not include "ending character"
    char s2[] = {'G', 'o', 'o', 'd', ' ', 'm', 'o', 'r', 'n', 'i', 'n', 'g'}; // Size of 12
    char s3[15] = "Good morning"; // Size of 15, but only 12 characters and 1 "ending character" are allocated
    cout<<"String s1: "<<s1<<" has the size of "<<sizeof(s1)<<endl;
    cout<<"String s2: "<<s1<<" has the size of "<<sizeof(s2)<<endl;
    cout<<"String s3: "<<s1<<" has the size of "<<sizeof(s3)<<endl;

    // Using String class to define a sequence of characters
    string s4 = "Good evening";
    cout<<"String s5: "<<s4<<endl;

}