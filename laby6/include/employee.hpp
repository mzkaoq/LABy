#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <string>
#include <iostream>

using namespace std;

class employee 
{
public:
    string id, name, surname, departmentID, position;

    employee(string id, string name, string surname, string departmentID, string position);
    employee();

    string getID();
    string getName();
    string getSurname();
    string getdepartmentID();
    string getPosition();
    void printEmploye();
    void printEmployeByDepID();
};

#endif