#include <iostream>
#include <utility>

//todo refactor the class out of here
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
    void showInfo() const {
        std::cout << "name : " << m_name << std::endl;
        std::cout << "surname: " << m_surname << std::endl;
        std::cout << "id: " << m_id << std::endl;
        std::cout << "avg: " << m_avg << std::endl;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    Student student1;
    Student student2("momad", "momad_patala", 1, 2);
    student1.showInfo();
    student2.showInfo();
    return 0;
}