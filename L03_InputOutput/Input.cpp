#include <iostream>
#include <string.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main()
{
    string id;
    char* phoneNumber{15};
    string myName;

    // cin and scanf() are used for inputting non-space string (single words)
    cout<<"Enter Student ID: ";
    cin>>id;
    cout<<"Enter Phone Number: ";
    scanf("%s", phoneNumber);

    // getline(cin,variable) is used to input space included string (mutiples words)
    // Remember to use cin.ignore() to skip the "\n" after the usage scanf() or cin otherwise
    // getline() will take that "\n" character as an input
    cin.ignore();
    cout<<"Enter your full name: ";
    getline(cin, myName);

    return 0;
}