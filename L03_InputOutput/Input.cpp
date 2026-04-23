#include <iostream>
#include <string.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main()
{
    // cin and scanf() are used for inputting non-space string (single words)
    // Use scanf() when you need to input string followed a format
    // Note that scanf() can only be used with char array
    string id;
    char phoneNumber[15];
    char unitCode[4];
    char roomCode[5];

    cout<<"Enter student ID: ";
    cin>>id;
    cout<<"Enter phone Number: ";
    scanf("%s", &phoneNumber);
    cout<<"Enter unit code and room code following this format ABC-XXXX: ";
    scanf("%s-%s", &unitCode,&roomCode);

    // getline(cin,variable) is used to input space included string (mutiples words)
    // Remember to use cin.ignore() to skip the "\n" after the usage scanf() or cin otherwise
    // getline() will take that "\n" character as an input
    string myName;
    cin.ignore();
    cout<<"Enter your full name: ";
    getline(cin, myName);

    // cin.getline(variable,size) is used to specify the length of input string
    // Note that getline() and cin.getline() only work with String class
    cout<<"Enter your tutor Name: ";
    char tutorName[50];
    cin.getline(tutorName,40);

    cout<<"Student ID: "<<id<<endl;
    cout<<"Phone Number: "<<phoneNumber<<endl;
    cout<<"Unit Code: "<<unitCode<<endl;
    cout<<"Room Code: "<<roomCode<<endl;
    cout<<"Full Name: "<<myName<<endl;
    cout<<"Tutor Name: "<<tutorName<<endl;

    return 0;
}