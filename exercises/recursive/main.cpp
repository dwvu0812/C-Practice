#include <iostream>

using namespace std;

void print_triangle(int n)
{
    if (n == 0)
        return;

    for (int i = 0; i < n; i++)
    {
        cout << "*";
    }
    cout << endl;
    print_triangle(n - 1);
}

// print 3n + 1 sequence
int length_print_3n1(int n)
{
    if (n == 1)
        return 1;
    if (n % 2 == 0)
    {
        return 1 + length_print_3n1(n / 2);
    }
    else
    {
        return 1 + length_print_3n1(3 * n + 1);
    }
}

int my_pow(int val, int p)
{
    if (p == 0)
        return 1;
    return val * my_pow(val, p - 1);
}

int arr_max(int arr[], int n)
{
    if (n == 1)
        return arr[0];
    return max(arr[n - 1], arr_max(arr, n - 1));
}

int main()
{
    // print_triangle(5);
    // print_3n1(6);
    cout << length_print_3n1(6);
    return 0;
}