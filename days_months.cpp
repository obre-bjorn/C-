#include <iostream>
#include <string>

using namespace std;

// Function to display days of the week
void displayDaysOfWeek()
{
    string daysOfWeek[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    cout << "Days of the Week:" << endl;
    for (int i = 0; i < 7; ++i)
    {
        cout << i + 1 << ". " << daysOfWeek[i] << endl;
    }
}

// Function to display months of the year
void displayMonthsOfYear()
{
    string monthsOfYear[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    cout << "Months of the Year:" << endl;
    for (int i = 0; i < 12; ++i)
    {
        cout << i + 1 << ". " << monthsOfYear[i] << endl;
    }
}

int main()
{
    // Display days of the week
    displayDaysOfWeek();

    cout << endl;

    // Display months of the year
    displayMonthsOfYear();

    return 0;
}
