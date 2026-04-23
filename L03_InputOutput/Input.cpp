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

    // fgets(variable,size,stdin) is recommended for its type safety and size check
    // gets() was commonly used before but is now deprecated due to its unsafe memory allocation
    cout<<"Enter your campus area: ";
    char campus[30];
    fgets(campus,30,stdin);

    cout<<"Student ID: "<<id<<endl;
    cout<<"Phone number: "<<phoneNumber<<endl;
    cout<<"Unit code: "<<unitCode<<endl;
    cout<<"Room code: "<<roomCode<<endl;
    cout<<"Full name: "<<myName<<endl;
    cout<<"Tutor name: "<<tutorName<<endl;
    cout<<"Campus: "<<campus<<endl;

    return 0;
}