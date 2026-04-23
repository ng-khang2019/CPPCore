#include <iostream>
using namespace std;

// Classic Enum
enum Difficulty
{
    EASY, MEDIUM, HARD
};

// Scoped Enum
/* Use 'enum class' for better type safety
 * You must use scope resolution operator (::) to access enum values
 */
enum class TrafficLight
{
    RED, YELLOW, GREEN
};

// Assigned Values Enum
enum ErrorCode
{
    SUCCESS = 0,
    BAD_REQUEST = 400,
    NOT_FOUND = 404,
    SERVER_ERROR = 500
};

void classicEnum();
void scopedEnum();
void assignedEnum();

int main()
{
    classicEnum();
    scopedEnum();
    assignedEnum();
    return 0;
}

void classicEnum()
{
    Difficulty myLevel = MEDIUM;
    switch (myLevel) {
    case EASY:
        cout<<"Starting Game on Easy Mode"<<endl;
        break;
    case MEDIUM:
        cout<<"Starting Game on Medium Mode"<<endl;
        break;
    case HARD:
        cout<<"Starting Game on Hard Mode"<<endl;
        break;
    default:
        cout<<"Invalid Difficulty Level"<<endl;
    }
}

void scopedEnum()
{
    // Using (::) to access scoped enum values
    TrafficLight currentLight = TrafficLight::GREEN;
    switch (currentLight)
    {
        /* Note: You cannot directly print an enum class
         * or compare it to a normal integer
         * without explicitly casting it first.
         * cout << currentLight; // This would cause a compiler error!
         */
        case TrafficLight::RED:
            cout<<"Stop!"<<endl;
            break;
        case TrafficLight::YELLOW:
            cout<<"Caution!"<<endl;
            break;
        case TrafficLight::GREEN:
            cout<<"You can drive!"<<endl;
            break;
        default:
            cout<<"Invalid Traffic Light"<<endl;
    }
}

void assignedEnum()
{
 int status = 404;
    switch (status)
    {
        case SUCCESS:
            cout<<"Success"<<endl;
            break;
        case BAD_REQUEST:
            cout<<"Bad Request "<<status<<". Please try again"<<endl;
            break;
        case NOT_FOUND:
            cout<<"Not Found "<<status<<". Please check your URL"<<endl;
            break;
        case SERVER_ERROR:
            cout<<"Server Error "<<status<<". Please try again later"<<endl;
            break;
        default:
            cout<<"Unknown Status Code"<<endl;
    }
}