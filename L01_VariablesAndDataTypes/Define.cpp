#include <iostream>
#define MAX_BUFFER_SIZE 1024
#define SQUARE_AREA(x) ((x)*(x))
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define DEBUG_MODE

using namespace std;

int main()
{
    char buffer[MAX_BUFFER_SIZE];

    int area = SQUARE_AREA(5);
    cout<< "Square area with side of 5: " << area << endl;
    int max = MAX(20,5);
    cout<< "Max number between 20 and 5 is " << max << endl;

    #ifdef DEBUG_MODE
        cout <<"Running in debug mode"<< endl;
    #endif
    return 0;
}