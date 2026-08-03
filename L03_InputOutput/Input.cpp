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
    cout<<"Enter student ID: ";
    string id;
    cin>>id;
    cout<<"Enter phone number: ";
    char phoneNumber[15];
    scanf("%s", &phoneNumber);

    /* Pay attention: scanf() will read all the input characters until a white space character appears
     * Do this will cause characters missing in the next variable scanf("%s-%s",&unitCode,&roomCode)
     */
    cout<<"Enter unit code and room code following this format ABC - XXXX: ";
    char unitCode[10];
    char roomCode[10];
    scanf("%s - %s", &unitCode,&roomCode);

    /* getline(cin,variable) is used to input space included string (mutiples words)
     * Using getline() right after cin will create a bug since getline
     * reads the Enter character '\n' in the buffer cache, from cin.
     * To ignore '\n' from the above cin command, use cin.ignore().
     * This will skip '\n' character.
     */
    cin.ignore();
    string myName;
    cout<<"Enter your full name: ";
    getline(cin, myName);

    /* cin.getline(variable,size) is used to specify the length of input string
     * Note that getline() only works with String class, while cin.getline() works with char type
     */
    cout<<"Enter your tutor name: ";
    char tutorName[50];
    cin.getline(tutorName,40);

    /* cin.get() is very similar to cin.getline() however cin.get() keeps the
     * '\n' in the input stream, therefore, you must use cin.ignore() to "consome"
     * the '\n' character
     */
    cout<<"Enter your favorite subject: ";
    char favoriteSubject[20];
    cin.get(favoriteSubject,20,'\n');
    cin.ignore();

    // Use get() to input a single character
    cout<<"Enter your best grade (A B C D): ";
    char bestGrade;
    bestGrade = cin.get();
    cin.ignore();

    // fgets(variable,size,stdin) is recommended for its type safety and size check
    // gets() was commonly used before but is now deprecated due to its unsafe memory allocation
    cout<<"Enter your campus area: ";
    char campus[30];
    fgets(campus,30,stdin);
    campus[strlen(campus)-1]='\0';

    cout << "\n--- STUDENT INFO ---" << endl;
    cout<<"Student ID: "<<id<<endl;
    cout<<"Phone number: "<<phoneNumber<<endl;
    cout<<"Unit code: "<<unitCode<<endl;
    cout<<"Room code: "<<roomCode<<endl;
    cout<<"Full name: "<<myName<<endl;
    cout<<"Tutor name: "<<tutorName<<endl;
    cout<<"Favorite subject: "<<favoriteSubject<<endl;
    cout<<"Best grade: "<<bestGrade<<endl;
    cout<<"Campus: "<<campus<<endl;

    /* Conclusion: Best practices recommended by senior programmers are
     * to use string class for string variables declaration, use "cin" for
     * single words input, "getline()" and "cin.getline()" for strings containing
     * space characters (multiple words).
     */

    return 0;
}