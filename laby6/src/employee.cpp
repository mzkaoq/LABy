#include <employee.hpp>
#include <string>

using namespace std;

employee::employee(string id, string name, string surname, string departmentID, string position)
{
    this -> id = id;
    this -> name = name;
    this -> surname = surname;
    this -> departmentID = departmentID;
    this -> position = position;
}
employee::employee(){ ; }

string employee::getID(){
    return this -> id;
}

string employee::getName(){
    return this -> name;
}

string employee::getSurname(){
    return this -> surname;
}

string employee::getdepartmentID(){
    return this -> departmentID;
}

string employee::getPosition(){
    return this -> position;
}

void employee::printEmploye(){
    cout << "id: " << this -> getID() << endl;
    cout << "Name: " << this -> getName() << endl;
    cout << "Surname: " << this -> getSurname() << endl;
    cout << "Position: " << this -> getSurname() << endl;
    cout << "Department ID: " << this -> getdepartmentID() << endl;
}

void employee::printEmployeByDepID(){
    cout << "ID: " << this -> getID() << endl;
    cout << "Name: " << this -> getName() << endl;
    cout << "Surname: " << this -> getSurname() << endl;
    cout << "Position: " << this -> getSurname() << endl;
}