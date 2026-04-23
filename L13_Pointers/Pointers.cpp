#include <iostream>
using namespace std;
int main()
{
    /* IMPORTANT: An array of String literals is completely different from
     * an array of pointers
     */
    char stringArrray[3][15] = {"Hi","Hello","Goodbye"}; // Each element is a string
    char *pointerArray[] = {"Hi","Hello","Goodbye"}; // Each element is a pointer to the first character in the sequence
    cout<<"First element of stringArrray1: "<<stringArrray[0]<<endl;
    cout<<"First element of pointerArray1: "<<pointerArray[0]<<endl;

    int a = 10, b = 20;
    int *intPointer[2] = {&a,&b};
    cout<<"Reference address of variable a: "<<intPointer[0]<<endl;
    cout<<"Value of variable a: "<<*intPointer[0]<<endl;
    return 0;
}