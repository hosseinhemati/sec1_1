#include<iostream>

#ifndef STUDENT_H
#define STUDENT_H



class Student {
    std::string m_name    = "ali";
    std::string m_surname = "ali_khafan";
    int         m_id      = 0;
    int         m_avg     = 50;

public:
    Student () = default;
    Student(std::string name, std::string surname, const int id, const int avg)
        :m_name(std::move(name))
        ,m_surname(std::move(surname))
        ,m_id(id)
        ,m_avg(avg)
    {}
    void showInfo() const;
};

#endif //STUDENT_H
