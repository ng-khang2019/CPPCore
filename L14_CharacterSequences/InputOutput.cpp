#include <iostream>
#include <string.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main()
{
    string id;string myName;
    cout<<"Nhập MSSV: ";
    cin>>id;
    cin.ignore();
    cout<<"Nhập tên đầy đủ: ";
    getline(cin, myName);

    // char lecturer1[30], lecturer2[30], lecturer3[30];
    // cout<<"Nhập tên giảng viên môn Lập Trình: ";
    // cin.getline(lecturer1,29);
    // cout<<"Nhập tên giảng viên môn Giải Tích: ";
    // fgets(lecturer2,29,stdin); // fgets is SAFE and Recommended
    // cout<<"Nhập tên giảng viên môn Đại Số: ";
    // fgets(lecturer3,29,stdin);
    //
    cout<<"Tên: "<<myName<<endl;
    cout<<"MSSV: "<<id<<endl;
    // cout<<"GV Lập Trình: "<<lecturer1<<endl;
    // cout<<"GV Giải Tích: "<<lecturer2<<endl;
    // cout<<"GV Đại Số : "<<lecturer3<<endl;
    cin.get();
    return 0;
}

/*
     * Using getline() right after cin will create a bug since getline
     * reads the Enter character '\n' in the buffer cache, from cin.
     * To ignore '\n' from the above cin command, use cin.ignore().
     * This will skip '\n' character.
     */