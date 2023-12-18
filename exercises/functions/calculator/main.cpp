#include <iostream>

using namespace std;

int menu()
{
    int choice = -1;

    while (choice == -1)
    {
        if (true)
        {
            cout << "\nMenu: \n";
            cout << "1. Addition\n";
            cout << "2. Subtraction\n";
            cout << "3. Multiplication\n";
            cout << "4. Division\n";
            cout << "5. Exit\n";

            cout << "\nEnter your choice: \n";
            cin >> choice;

            if (choice < 1 || choice > 5)
            {
                cout << "\nInvalid choice. Try again.\n";
                choice = -1;
            }
        }
    }

    return choice;
}

void readNumbers(int &a, int &b)
{
    cout << "Enter the numbers: \n";
    cin >> a >> b;
}

void add(int a, int b)
{
    cout << "a + b = " << a + b << "\n";
}

void subtract(int a, int b)
{
    cout << "a - b = " << a - b << "\n";
}

void multiply(int a, int b)
{
    cout << "a * b = " << a * b << "\n";
}

void divide(int a, int b)
{
    if (b == 0)
    {
        cout << "Cannot divide by 0.\n";
    }
    else
    {
        cout << "a / b = " << a / b << "\n";
    }
}

int main()
{
    int total_operations = 0;
    int a, b;

    while (true)
    {
        int choice = menu();

        if (choice == 5)
            break;
        total_operations++;
        readNumbers(a, b);
        switch (choice)
        {
        case 1:
            add(a, b);
            break;
        case 2:
            subtract(a, b);
            break;
        case 3:
            multiply(a, b);
            break;
        case 4:
            divide(a, b);
            break;
        }
    }

    cout << "\nTotal operations: " << total_operations << "\n";

    return 0;
}