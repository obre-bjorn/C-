#include <iostream>
#include <string>
#include <vector>

class Student
{
private:
    std::string name;
    int age;
    std::string course;

public:
    // Constructor
    Student(const std::string &name, int age, const std::string &course)
        : name(name), age(age), course(course) {}

    // Getters
    std::string getName() const
    {
        return name;
    }

    int getAge() const
    {
        return age;
    }

    std::string getCourse() const
    {
        return course;
    }
};

int main()
{
    std::vector<Student> students;

    std::cout << "Enter student details. Enter 'q' to quit.\n";

    while (true)
    {
        std::cout << "Name: ";
        std::string name;
        std::getline(std::cin >> std::ws, name);

        if (name == "q")
            break;

        std::cout << "Age: ";
        int age;
        std::cin >> age;

        std::cout << "Course: ";
        std::string course;
        std::getline(std::cin >> std::ws, course);

        students.push_back(Student(name, age, course));
        std::cout << std::endl;
    }

    std::cout << "\nDisplaying student details:\n\n";
    for (size_t i = 0; i < students.size(); ++i)
    {
        std::cout << "Student " << i + 1 << ":\n";
        std::cout << "Name: " << students[i].getName() << " ";
        std::cout << "Age: " << students[i].getAge() << " ";
        std::cout << "Course: " << students[i].getCourse() << std::endl;
        std::cout << std::endl;
    }

    return 0;
}