#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <cctype>

using namespace std;

class Person
{
    string name;
    int age;

public:
    Person() = default;
    Person(string name, int age) : name{name}, age{age} {}
    bool operator<(const Person &rhs) const
    {
        return this->age < rhs.age;
    }

    bool operator==(const Person &rhs) const
    {
        return this->name == rhs.name && this->age == rhs.age;
    }
};

void find_test()
{
    cout << "===========================" << endl;
    vector<int> vec{1, 2, 3, 4, 5};
    auto loc = find(vec.begin(), vec.end(), 7);
    if (loc != vec.end())
    {
        cout << "Found the number: " << *loc << endl;
    }
    else
    {
        cout << "Couldn't find the number";
    }
}

int main()
{
    find_test();
    return 0;
}
