#include <iostream>

using namespace std;

string reverse_str(const string &str)
{
    string ret = str;
    int st = 0, en = ret.size() - 1;
    while (st < en)
    {
        char tmp = ret[st];
        ret[st] = ret[en];
        ret[en] = tmp;
        st++;
        en--;
    }
    return ret;
}

int main()
{
    cout << reverse_str("Hello, world!");
    return 0;
}