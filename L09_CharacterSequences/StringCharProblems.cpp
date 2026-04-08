#include <iostream>
#include <iomanip>
using namespace std;

const string name1 = "Nguyen Van Dat";
const string name2 = "Nguyễn Văn Đạt";

int main()
{
    // Different in size between original characters and their variants (with headers)
    cout<<name1.size()<<" & "<<name2.size()<<endl;
    // char c1 = name1[4], c2 = name2[4];
    // cout<<c1<<" & "<<c2<<endl;

    // Char array has an additional memory space to allocate '\0' - end of an array
    char hello[] = {'H', 'e', 'l', 'l', 'o'};
    char hello1[] = "Hello";
    string hello2 = "Hello";
    cout<<sizeof(&hello)<<endl;

    // Cannot reassign fixed-size array
    // hello = "Goodnight"; causes error
    // hello1 = "Morning"; causes error
    hello2 = "Goodbye";
    cout<<endl<<endl;

    string myName;
    cout<<"Nhập tên: ";
    // cin>>myName;
    getline(cin, myName);

    char lecturer[30];
    cout<<"Tên giảng viên: ";
    cin.getline(lecturer,29);

    cout<<"Tên của bạn là: "<<myName<<endl;
    cout<<"Tên của giảng viên: "<<lecturer;
    cin.get();
    return 0;
}