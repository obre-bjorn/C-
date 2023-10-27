#include <iostream>
#include <string>

int main()
{
    // Array of strings containing the days of the week
    int daysOfWeek[] = {1,2,4,5,6,7,8,9,9,0};

    // Get the size of the array
    int numDays = sizeof(daysOfWeek) / sizeof(daysOfWeek[0]);

    std::cout <<sizeof(daysOfWeek)<<std::endl;
    // Display the days of the week
    std::cout << "Days of the Week:" << std::endl;
    for (int i = 0; i < numDays; i++)
    {
        std::cout << i + 1 << ". " << daysOfWeek[i] << std::endl;
    }

    return 0;
}