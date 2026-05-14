#include <iostream>
using namespace std;

int main ()
{
    int firstvalue, secondvalue;
    int *mypointer;

    mypointer = &firstvalue;
    *mypointer = 10;
    mypointer = &secondvalue;
    *mypointer = 20;
    cout << "firstvalue is " << firstvalue << '\n';
    cout << "secondvalue is " << secondvalue << '\n';

    /* Important tips: Always initialize a pointer,
     * if you don't have a value yet, assign the pointer
     * to "nullptr" which means nothing.
     */

    int *p = nullptr;
    return 0;
}