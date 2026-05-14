#include <iostream>
using namespace std;

// Pass By Value (A copp of the variable)
void increaseValue1(int x) {
    x = x + 10; 
}

// Pass By Reference
void increaseValue2(int &x) {
    x = x + 10;
}

// Pass By Pointer
void increaseValue3(int *x) {
    // Validating
    if (x != nullptr) {
        *x = *x + 10; 
    }
}

int main() {
    int a = 5;
    int* ptr = &a;
    cout << "Initial value of a: " << a << endl;
    cout << "The reference pointer holds " << ptr << endl;
    cout << "Initial value of ptr (also value a): " << *ptr << endl;
    cout <<"------------------------------------------------"<<endl;

    cout<<"Pass in the copy of variable a"<<endl;
    // A copy of the variable a has been passed to the function, the real variable a stays intact
    increaseValue1(a);
    cout << "After increasement by 10: a = " << a << endl; // Output: 5 (Nothing changed)

    cout<<"\nPass in the reference to the value of variable a"<<endl;
    // The reference to the actual value has been passed in, therefore value of variable a has been changed
    increaseValue2(a);
    cout << "After increasement by 10: a = " << a << endl; // Output: 15 (Actual value changed)

    cout<<"\nPass in the pointer holding the reference to the value of a"<<endl;
    // The pointer that holds the reference to the value of a has been passed in, therefore a's value has been changed
    increaseValue3(ptr);
    cout << "Afer increasement by 10: a = " << *ptr << endl; // Output: 25 (Actuall value changed)

    return 0;
}