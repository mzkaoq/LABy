#include <iostream>
#include <Employee.hpp>

#include <list>
#include <map>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <exception>
#include <excpt.h>
#include <sstream>
#ifndef HRMS_H
#define HRMS_H

using namespace std;

class HRMS {
 
public:
    map<string, employee> pracownicy_all;
    map<string, string> pracownicy_department;
    map<string, double> pracownicy_wyplaty;


    static bool sortByVal(const pair<string, double> &a, const pair<string, double> &b);

    void add(employee pracownik,string departmentId, double salary);
    void printDepartment(string departmentId);
    void changeSalary(string employeeId, double salary);
    void printSalaries();
    void printSalariesSorted();
};

#endif