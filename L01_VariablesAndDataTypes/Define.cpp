#include <iostream>
#define MAX_BUFFER_SIZE 1024
#define SQUARE_AREA(x) (x*x)
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define LOOP(i,a,n) for(int i=a;i<n;i++)
#define DEBUG_MODE
long int powerOf2(int n);

using namespace std;

int main()
{
    char buffer[MAX_BUFFER_SIZE];

    int area = SQUARE_AREA(5);
    cout<< "Square area with side of 5: " << area << endl;

    int max = MAX(20,5);
    cout<< "Max number between 20 and 5 is " << max << endl;

    int n = 15;
    cout<<"Two to the power of "<<n<<" is: "<<powerOf2(n)<<endl;

    #ifdef DEBUG_MODE
        cout <<"Running in debug mode"<< endl;
    #endif
    return 0;
}

long int powerOf2(int n) {
    long int result = 1;
    LOOP(i,0,n) {result *= 2;};
    return result;
}