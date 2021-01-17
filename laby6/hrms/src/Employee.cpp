#include <Employee.hpp>

using namespace std;


employee :: employee(string id,string name, string surname,string departmentId,string position)
{
    this -> id = id;
    this -> name = name;
    this -> surname = surname;
    this -> departmentId = departmentId;
    this -> position = position;
}
employee :: employee () {}

void employee :: przedstawsie()
{
    cout << "id: "<<id << endl;
    cout << "imie: "<<name << endl;
    cout << "nazwisko: "<<surname << endl;
    cout << "id wydzialu: "<<departmentId << endl;
    cout << "pozycja: "<<position << endl;
}

