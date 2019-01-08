#include <iostream>
#include "Person.hpp"
#include "Role.hpp"
#include "Activity.hpp"
#include "Room.hpp"
#include "TeacherRole.hpp"
#include "StudentRole.hpp"
#include "ActivityRepository.hpp"
#include "PersonRepository.hpp"
#include "RoomRepository.hpp"
#include "Person.cpp"
#include "Role.cpp"
#include "Activity.cpp"
#include "Room.cpp"
#include "TeacherRole.cpp"
#include "StudentRole.cpp"
#include "ActivityRepository.cpp"
#include "PersonRepository.cpp"
#include "RoomRepository.cpp"
#include "Repository.hpp"
#include "Repository.cpp"
#include "Discipline.hpp"
#include "DisciplineRepository.hpp"
#include "StudyGroup.hpp"


int main()
{

    PersonRepository students;
    PersonRepository teachers;
    RoomRepository rooms;

    students.add(new Person({new StudentRole()}, "000", "Costin", "Florin", "zzzzzz@yahoo.com"));

    teachers.add(new Person({new TeacherRole()}, "999", "Andrei", "Bogdan", "yyyyyy@yahoo.com"));

    rooms.add(new Room("Titeica"));
    rooms.add(new Room("Sala 123"));

    std::cout << "Profesori:\n";
    teachers.print();
    std::cout << "Sali:\n";
    rooms.print();
    std::cout << "Studenti:\n";
    students.print();

    std::cout << "MAIN MENU\n";
    std::cout << "1 - New student.\n";
    std::cout << "2 - New teacher.\n";
    std::cout << "3 - New room.\n";

    int option;
    std::cout << "Choose: ";
    std::cin >> option;
    switch(option)
    {
    case 1:
    {
        Person p;
        std::cin >> p;
        Person* student = &p;
        students.add(student);
        break;
    }
    case 2:
    {
        Person p;
        std::cin >> p;
        Person* teacher = &p;
        teachers.add(teacher);
        break;
    }
    case 3:
    {
        Room r;
        std::cin >> r;
        Room* room = &r;
        rooms.add(room);
        break;
    }

    }


    std::cout << "Profesori:\n";
    teachers.print();
    std::cout << "Sali:\n";
    rooms.print();
     std::cout << "Studenti:\n";
    students.print();

    return 0;

}

