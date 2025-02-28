#include <iostream>
#include <utility>
#include "Student.h"
#include "course.h"


int main() {
    std::cout << "Hello, World!" << std::endl;

    Student student("John", "Doe", 12345, 88.5);
    student.displayInfo();

    Student student1("John", "Doe", 12345, 88.5);
    Student student2("Jane", "Doe", 67890, 92.3);
    Student student3("Alice", "Smith", 11111, 85.0);

    Course course("Mathematics");

    course.addStudent(student1);
    course.addStudent(student2);
    course.addStudent(student3);

    course.calculateAverageGrade();
    course.displayInfo();
    return 0;
}
