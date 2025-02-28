//
// Created by FathAli on 2/28/2025.
//

#include "Student.h"

void Student::showInfo() const {
        std::cout << "name : " << m_name << std::endl;
        std::cout << "surname: " << m_surname << std::endl;
        std::cout << "id: " << m_id << std::endl;
        std::cout << "avg: " << m_avg << std::endl;
}