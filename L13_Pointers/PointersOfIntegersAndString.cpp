#include <iostream>
using namespace std;
int main()
{
    /* IMPORTANT: Elements in side a string pointers array
     * are string literals and also pointers at the same time.
     * In C++, a string is a pointer itself (Points to first character) not like integers that need
     * variable declaration to hold their values
     */

    char stringArrray[3][15] = {"Hi","Hello","Goodbye"}; // Each element is a string
    char s1[] = "Hi", s2[] = "Hello", s3[] = "Goodbye";
    char *pointerArray[] = {s1,s2,s3}; // Each element is a pointer to the address (first character) but it is also a string
    cout<<"First element of stringArrray1: "<<stringArrray[0]<<endl;
    cout<<"Pointer (first character) of the first element stringArray1: "<<*stringArrray[0]<<"\n"<<endl;
    cout<<"First element of pointerArray1: "<<pointerArray[0]<<endl;
    cout<<"Pointer (first character) of the first element in pointerArray1: "<<*pointerArray[0]<<"\n"<<endl;

    int a = 10, b = 20;
    int *intPointer[] = {&a,&b}; // This will cause error -> int *intPointer[] = {10,20};
    cout<<"Value of variable a: "<<*intPointer[0]<<endl;
    cout<<"Pointer (Reference address) of variable a: "<<intPointer[0]<<endl;
    return 0;
}