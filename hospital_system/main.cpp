#include <iostream>

using namespace std;

const int MAX_SPECIALIZATION = 20;
const int MAX_QUEUE = 5;

string names[MAX_SPECIALIZATION + 1][MAX_QUEUE + 1];
int status[MAX_SPECIALIZATION + 1][MAX_QUEUE + 1]; // 0 regular, 1 urgent
int queue_length[MAX_SPECIALIZATION + 1];          // for each specialization: how many patients so far

int menu()
{
    int choice = -1;
    while (choice == -1)
    {
        cout << "\nEnter your choice:\n";
        cout << "1) Add new patient\n";
        cout << "2) Print all patients\n";
        cout << "3) Get next patient\n";
        cout << "4) Exit\n";

        cin >> choice;

        if (!(1 <= choice && choice <= 4))
        {
            cout << "Invalid choice. Try again\n";
            choice = -1; // loop keep working
        }
    }
    return choice;
}

void shift_left(int spec, string names_sp[], int status_sp[])
{
    int len = queue_length[spec];
    for (int i = 1; i < len; ++i)
    {
        names_sp[i - 1] = names_sp[i];
        status_sp[i - 1] = status_sp[i];
    }
    queue_length[spec]--;
}

void shift_right(int spec, string names_sp[], int status_sp[])
{
    int len = queue_length[spec];
    for (int i = len - 1; i >= 0; --i)
    { // critical to start from END
        names_sp[i + 1] = names_sp[i];
        status_sp[i + 1] = status_sp[i];
    }
    queue_length[spec]++;
}

bool add_patient()
{
    int spec;
    string name;
    int st;

    cout << "Enter specialization, name, status: ";
    cin >> spec >> name >> st;

    if (!(1 <= spec && spec <= MAX_SPECIALIZATION))
    {
        cout << "Invalid specialization\n";
        return false;
    }

    if (!(1 <= st && st <= 2))
    {
        cout << "Invalid status\n";
        return false;
    }

    if (queue_length[spec] == MAX_QUEUE)
    {
        cout << "No space in queue\n";
        return false;
    }

    // Add patient
    shift_right(spec, names[spec], status[spec]);
    names[spec][0] = name;
    status[spec][0] = st;

    return true;
}

void print_patient(int spec, string names_sp[], int status_sp[])
{
    int len = queue_length[spec];
    if (len == 0)
        return;

    cout << "There are " << len << " patients in specialization " << spec << "\n";
    for (int i = 0; i < len; ++i)
    {
        cout << names_sp[i] << " ";
        if (status_sp[i])
            cout << "urgent\n";
        else
            cout << "regular\n";
    }
    cout << "\n";
}

void print_patients()
{
    cout << "****************************\n";
    for (int spec = 0; spec < MAX_SPECIALIZATION; ++spec)
    {
        print_patient(spec, names[spec], status[spec]);
    }
}

void get_next_patient()
{
    int spec;
    cout << "Enter specialization: ";
    cin >> spec;

    int len = queue_length[spec];

    if (len == 0)
    {
        cout << "No patients at the moment. Have rest, Dr\n";
        return;
    }

    // Let patient goes to dr
    cout << names[spec][0] << " please go with the Dr\n";

    // delete the patient in position 0
    shift_left(spec, names[spec], status[spec]);
}

void hospital_system()
{
    while (true)
    {
        int choice = menu();
        if (choice == 1)
        {
            add_patient();
        }
        else if (choice == 2)
        {
            print_patients();
        }
        else if (choice == 3)
        {
            get_next_patient();
        }
        else
        {
            break;
        }
    }
}

int main()
{
    hospital_system();
    return 0;
}