#include <iostream>
#include <string>

using namespace std;

// User Login Module
bool isUserValid(const string &username, const string &password, const string usernames[], const string passwords[], int numUsers)
{
    for (int i = 0; i < numUsers; ++i)
    {
        if (usernames[i] == username && passwords[i] == password)
        {
            return true;
        }
    }
    return false;

}

// New Student Registration Module
struct Student
{
    string name;
    int age;
    string course;
};

void registerNewStudent(Student students[], int &numStudents)
{
    Student newStudent;

    cout << "Enter student name: ";
    getline(cin, newStudent.name);

    cout << "Enter student age: ";
    cin >> newStudent.age;
    cin.ignore(); // Clear the input buffer

    cout << "Enter student course: ";
    getline(cin, newStudent.course);

    // Add the new student to the array
    students[numStudents] = newStudent;
    numStudents++;
    cout << "Student registered successfully!" << endl;
}

void printRegisteredStudents(const Student students[], int numStudents)
{
    cout << endl
         << "Registered Students:" << endl;
    for (int i = 0; i < numStudents; ++i)
    {
        cout << "Name: " << students[i].name << endl;
        cout << "Age: " << students[i].age << endl;
        cout << "Course: " << students[i].course << endl;
        cout << "----------------------" << endl;
    }
}

int main()
{

    // Login credatials for users
    // 1. user1 and password1
    // 2. user2 and passowrd2

    const int maxUsers = 2;
    string usernames[maxUsers] = {"user1", "user2"};
    string passwords[maxUsers] = {"password1", "password2"};

    // Student database setup
    const int maxStudents = 100;
    Student students[maxStudents];
    int numStudents = 0;


    cout << "User Login Module" << endl;
    cout << "-----------------" << endl;

    string username, password;
    cout << "Enter your username: ";
    getline(cin, username);

    cout << "Enter your password: ";
    getline(cin,password);

    if (isUserValid(username, password, usernames, passwords, maxUsers))
    {
        cout << "Login successful!" << endl;

        char choice;
        do
        {
            cout << endl
                 << "New Student Registration Module" << endl;
            cout << "------------------------------" << endl;
            registerNewStudent(students, numStudents);

            cout << "Do you want to register another student? (y/n): ";
            cin >> choice;
            cin.ignore(); // Clear the input buffer
        } while (choice == 'y' || choice == 'Y');

        if (numStudents > 0)
        {
            printRegisteredStudents(students, numStudents);
        }
        else
        {
            cout << "No students registered." << endl;
        }
    }
    else
    {
        cout << "Invalid username or password. Login failed." << endl;
    }

    return 0;
}
