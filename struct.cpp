#include <iostream>

using namespace std;

struct queue
{
    int arr[100];
    int len;

    queue()
    {
        len = 0;
    }

    void add_end(int x)
    {
        arr[len++] = x;
    }

    void add_front(int x)
    {
        for (int i = len; i >= 1; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = x;
        len++;
    }

    int remove_front()
    {
        int res = arr[0];
        for (int i = 1; i < len; i--)
        {
            arr[i - 1] = arr[i];
        }
        len--;
        return res;
    }

    void print()
    {
        for (int i = 0; i < len; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    return 0;
}