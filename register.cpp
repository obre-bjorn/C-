#include <iostream>
#include <string>
#include <limits>

class User
{
private:
    std::string username;
    std::string password;

public:
    User(const std::string &username, const std::string &password)
     : username(username), password(password) {}

    bool login(const std::string &inputUsername, const std::string &inputPassword) const
    {
        return (inputUsername == username && inputPassword == password);
    }
};

class Student
{
private:
    std::string name;
    int age;

public:
    Student(const std::string &name, int age)
        : name(name), age(age) {}

    void registerStudent()
    {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Student Registration\n";
        std::cout << "Enter name: ";
        std::getline(std::cin, name);
        std::cout << "Enter age: ";
        std::cin >> age;
    }

    void displayDetails() const
    {
        std::cout << "\nStudent Details:\n";
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

int main()
{
    User user("admin", "password");

    std::cout << "Login Module\n";
    std::string inputUsername, inputPassword;

    do
    {
        std::cout << "Enter username: ";
        std::cin >> inputUsername;
        std::cout << "Enter password: ";
        std::cin >> inputPassword;

        if (user.login(inputUsername, inputPassword))
        {
            std::cout << "Login Successful!\n";
            break;
        }
        else
        {
            std::cout << "Login Failed! Please try again.\n";
        }
    } while (true);

    std::cout << "\nNew Student Registration Module\n";
    Student newStudent("", 0);
    newStudent.registerStudent();
    newStudent.displayDetails();

    return 0;
}