#include <iostream>
#include <utility>
#include "Student.h"


int main() {
    std::cout << "Hello, World!" << std::endl;
    Student student1;
    Student student2("momad", "momad_patala", 1, 2);
    student1.showInfo();
    student2.showInfo();
    return 0;
}