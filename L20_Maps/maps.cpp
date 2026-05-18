#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    // Declaration
    map<string,int> scores;
    map<char,double> values;

    // Initilization
    map<int,string> students = {
        {1,"Johb"},{2,"Alice"},{3,"Bob"}
    };

    // Inserting elements
    scores["John"] = 90;
    scores.insert({"Bob",57});
    scores.insert({"Eve", 6});
    scores.insert({"Alice",76});

    // Updateing elements
    scores["Bob"] = 85;
    scores.at("Alice") = 95;

    // Removing an elements
    scores.erase("Eve");

    // Accessing elements
    cout << "John's score: " << scores["John"] << endl;
    cout << "Alice's score: " << scores.at("Alice") << endl;

    // Map size
    cout << "Scores size: " << scores.size() << endl;
    cout << "Students size: " << students.size() << endl;

    // Traversing using ranged-base for loop
    for (const auto& pair : scores)
    {
        cout << pair.first << ": " << pair.second << endl; // Automacticlly sort keys
    }

    // Traversing using iterator
    for (auto it = scores.begin(); it != scores.end(); ++it)
    {
        cout << it->first << ": " << it->second << endl;
    }

    // Find a key and return its iterator
    auto find = scores.find("John");
    bool found = (find != scores.end());
    cout <<"Found John in the map? "<<found<<endl;
    if (found)
    {
        cout << "John's score is: " << find->second << endl;
    }

    // Element's key lookup (returns boolean values)
    cout <<"Is Alice in the map? "<<scores.count("Alice")<<endl;

    // Check if a map is empty a map
    cout<<values.empty()<<endl;

    // Clear a map
    values.clear();

    return 0;
}
