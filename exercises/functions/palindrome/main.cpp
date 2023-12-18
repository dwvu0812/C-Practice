#include <iostream>

using namespace std;

int read_array(int arr[])
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    return n;
}

bool isPalindrome(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        if (arr[start] != arr[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    // int arr[100];
    // int len = read_array(arr);
    // if (isPalindrome(arr, len))
    // {
    //     cout << "YES" << endl;
    // }
    // else
    // {
    //     cout << "NO" << endl;
    // }
    cout << isPrime(2) << endl;
    return 0;
}