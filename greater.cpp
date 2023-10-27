#include <iostream>

using namespace std;

int main()
{
    int arr[4];
    cout << "Please enter 4 Integers: " << endl;

    for (int i = 0; i < 4; i++)
    {
        cin>> arr[i];
    }

    cout << "Value in array are now: ";

    for (int i = 0; i < 4; i++)
    {
        cout << " " << arr[i];
    }

    cout << endl;
}
