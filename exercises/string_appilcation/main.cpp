#include <iostream>

using namespace std;

int main()
{
    const int MAX = 10000;
    string names[MAX];
    int ages[MAX];
    long salaries[MAX];
    char genders[MAX];
    int added = 0;

    while (true)
    {
        int choice = -1;
        cout << "Enter your choice: \n";
        cout << "1. Add a new employee\n";
        cout << "2. Print all employees\n";
        cout << "3. Delete by age\n";
        cout << "4. Update salary by name\n";

        cin >> choice;

        if (!(choice >= 1 && choice <= 4))
        {
            cout << "Invalid choice\n";
            continue;
        }

        if (choice == 1)
        {
            cout << "Enter name: ";
            cin >> names[added];
            cout << "Enter age: ";
            cin >> ages[added];
            cout << "Enter salary: ";
            cin >> salaries[added];
            cout << "Enter gender: ";
            cin >> genders[added];

            added++;
        }
        else if (choice == 2)
        {
            cout << "======================================\n";
            for (int i = 0; i < added; i++)
            {
                if (ages[i] != -1)
                {
                    cout << "Name: " << names[i] << " "
                         << "Age: " << ages[i] << " "
                         << "Gender: " << genders[i] << " "
                         << "Salary: " << salaries[i] << endl;
                }
            }
        }
        else if (choice == 3)
        {
            int age;
            cout << "Enter age: ";
            cin >> age;

            for (int i = 0; i < added; i++)
            {
                if (ages[i] == age)
                {
                    ages[i] = -1;
                }
            }
        }
        else if (choice == 4)
        {
            string name;
            cout << "Enter name: ";
            cin >> name;

            for (int i = 0; i < added; i++)
            {
                if (names[i] == name)
                {
                    cout << "Enter new salary: ";
                    cin >> salaries[i];
                }
            }
        }
    }

    return 0;
}
