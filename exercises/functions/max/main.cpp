#include <iostream>
using namespace std;

int max(int a, int b)
{
    return a > b ? a : b;
}

int max(int a, int b, int c)
{
    return max(max(a, b), c);
}

int max(int a, int b, int c, int d)
{
    return max(max(a, b, c), d);
}

int main()
{
    cout << max(1, 2, 3, 4) << endl; // 4
    return 0;
}