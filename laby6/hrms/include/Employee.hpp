#include <iostream>
#include <string>
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

using namespace std;

class employee
{
    public:
    string id, name,  surname, departmentId, position;
       employee(string id,string name, string surname,string departmentId,string position);
       employee();
       void przedstawsie();
        
};

#endif 
