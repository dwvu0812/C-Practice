#include <iostream>
#include <string>
#include <vector>
using namespace std;
template <typename T>

class Item
{
private:
    string name;
    T value;

public:
    Item(string name, T value) : name(name), value(value)
    {
    }
    string get_name() const { return name; }
    T get_value() const { return value; }
};

int main()
{
    Item<int> item{"Du", 100};
    cout << item.get_name() << endl;
    cout << item.get_value() << endl;

    return 0;
}
